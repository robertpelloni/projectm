# CHANGELOG

## [4.1.0-dev.7] - Current
### Optimized
- Optimized `Loudness::AdjustRateToFps` by consolidating nested exponent calls `std::pow(std::pow(rate, 30.0f), secondsSinceLastFrame)` into a single `std::pow(rate, 30.0f * secondsSinceLastFrame)`, halving transcendental call overhead in the per-frame beat detection calculation.

## [4.1.0-dev.6] - Previous
### Added
- Added abstract device interface `IGraphicsDevice` in `src/libprojectM/Renderer/GraphicsBackend.hpp` for decoupling graphics hardware access across modern APIs (Vulkan, Metal, DirectX, and OpenGL).

## [4.1.0-dev.5] - Previous
### Optimized
- Optimized `MilkdropFFT::TimeToFrequencyDomain` by reusing a pre-allocated scratchpad buffer `m_spectrumData` instead of heap-allocating on every audio frame, minimizing memory allocations on high-frequency audio analysis loops.

## [4.1.0-dev.4] - Previous
### Added
- Added `GraphicsBackend.hpp` to `src/libprojectM/Renderer/`, introducing `GraphicsBackendType` (OpenGL, OpenGLES, Vulkan, Metal, DirectX) and `GraphicsBackendCapabilities` for graphics backend modernization.
- Resolved `Texture::Source::Internal` usage in `MilkdropNoise.cpp`.

## [4.1.0-dev.3] - Previous
### Fixed
- Fixed null pointer dereference vulnerability in `src/sdl-test-ui/setup.cpp` when environment variable (`HOME` or `USERPROFILE`) is unset in `getConfigFilePath`.

## [4.1.0-dev.2] - Previous
### Changed
- Clarified subproject roles and repository boundaries: confirmed that end-user UI features and dashboard integrations reside in `frontend-sdl2`.
- Validated build pipeline, test coverage, and submodule initialization across dependencies.
- Updated documentation governance across `HANDOFF.md`, `CHANGELOG.md`, `TODO.md`, and `VERSION.md`.

## [4.1.0-dev.1] - Previous
### Changed
- Concluded verification of canonical frontends for UI issues (none found locally as frontend-sdl2 is maintained externally).
- Updated TODO.md to mark UI issue task as complete.

## [4.1.0-dev] - Previous
### Added
- Comprehensive project documentation files (VISION, ROADMAP, TODO, MEMORY, DEPLOY, IDEAS).
- Version tracking file (`VERSION.md`).
