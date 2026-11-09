# MEMORY

## Internal Architectural Observations
- The core of projectM is `libprojectM`, responsible for preset parsing, audio analysis (PCM/FFT), and graphics rendering.
- The codebase relies heavily on CMake for build configuration across diverse platforms.
- `projectm-eval` is used as a submodule for expression evaluation logic.
- There's a clear separation between the rendering pipeline and audio feature extraction.
- External dependencies are managed using `vcpkg` or system development packages.
- Graphics backend abstractions are defined in `src/libprojectM/Renderer/GraphicsBackend.hpp` (`IGraphicsDevice`, `GraphicsBackendCapabilities`, and `GetDefaultCapabilities`) to pave the way for Vulkan, Metal, and DirectX modernization alongside OpenGL/OpenGLES.
- In audio processing, `MilkdropFFT` leverages a pre-allocated scratchpad buffer (`m_spectrumData`) and `Loudness` computes beat decay rates via consolidated transcendental calls, eliminating heap churn and CPU overhead in per-frame rendering loops.
- Central string processing is unified under `Utils::ToLower` and `Utils::ToUpper` in `src/libprojectM/Utils.hpp`.
