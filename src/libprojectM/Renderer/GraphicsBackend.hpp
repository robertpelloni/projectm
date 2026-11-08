/**
 * @file GraphicsBackend.hpp
 * @brief Abstract definitions, enumerations, and device interface for modern graphics backend support.
 */
#pragma once

#include <projectM-4/projectM_cxx_export.h>

#include <cstdint>
#include <memory>
#include <string>

namespace libprojectM {
namespace Renderer {

/**
 * @brief Identifies the underlying graphics API used by the renderer.
 */
enum class GraphicsBackendType : uint8_t
{
    OpenGL,   //!< OpenGL Core profile (default for desktop).
    OpenGLES, //!< OpenGL ES profile (mobile/embedded/web).
    Vulkan,   //!< Modern cross-platform Vulkan backend.
    Metal,    //!< Apple Metal API backend.
    DirectX   //!< Microsoft Direct3D 11/12 backend.
};

/**
 * @brief Capabilities reported by the active graphics backend.
 */
struct PROJECTM_CXX_EXPORT GraphicsBackendCapabilities
{
    GraphicsBackendType type{GraphicsBackendType::OpenGL}; //!< Backend API type.
    std::string apiVersion;                               //!< Reported API version string.
    std::string deviceName;                               //!< GPU device or adapter name.
    bool supportsComputeShaders{false};                   //!< Whether compute shaders are available.
    bool supportsFloatFramebuffers{true};                 //!< Whether floating point render targets are supported.
    uint32_t maxTextureDimension{4096};                   //!< Maximum allowable 2D texture width/height.
};

/**
 * @brief Abstract device interface providing decoupled graphics hardware access.
 */
class PROJECTM_CXX_EXPORT IGraphicsDevice
{
public:
    virtual ~IGraphicsDevice() = default;

    /**
     * @brief Returns the backend type implemented by this device.
     */
    virtual auto GetBackendType() const -> GraphicsBackendType = 0;

    /**
     * @brief Queries hardware capabilities and limits.
     */
    virtual auto GetCapabilities() const -> const GraphicsBackendCapabilities& = 0;

    /**
     * @brief Initializes hardware context and command queues.
     * @return true on success, false otherwise.
     */
    virtual auto Initialize() -> bool = 0;

    /**
     * @brief Shuts down hardware context and releases all allocated device resources.
     */
    virtual void Shutdown() = 0;
};

} // namespace Renderer
} // namespace libprojectM
