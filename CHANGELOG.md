# CHANGELOG

## [4.1.0-dev.17] - Current
### Testing
- Executed automated test suite and build verification across all active test targets (`projectM-playlist-unittest`, `projectM_EvalLib_Test` 79 unit tests, `TestMainAPIHeaders`, `TestPlaylistAPIHeaders`), validating stability across platforms with a 100% pass rate.

## [4.1.0-dev.16] - Previous
### CI
- Added `workflow_dispatch:` trigger to `.github/workflows/build_osx.yml` enabling manual dispatch for macOS framework and library CI runs across arm64 and x86_64 runners.

## [4.1.0-dev.15] - Previous
### Testing
- Verified automated build targets and full test suites post-ref updates across `projectM-playlist-unittest`, `projectM_EvalLib_Test` (79 unit tests), `TestMainAPIHeaders`, and `TestPlaylistAPIHeaders`, confirming system integrity and 100% test pass rate.

## [4.1.0-dev.14] - Previous
### Testing
- Executed automated test suite across all active test suites: `projectM-playlist-unittest` (playlist integration and ordering), `projectM_EvalLib_Test` (79 AST and expression evaluator unit tests), and verified C99/C++ API headers via `TestMainAPIHeaders` and `TestPlaylistAPIHeaders`, achieving a 100% pass rate.

## [4.1.0-dev.13] - Previous
### CI
- Removed duplicate `build-framework:` job definition in `.github/workflows/build_osx.yml` that was overwriting the primary framework build steps.

## [4.1.0-dev.12] - Previous
### Docs
- Updated `docs/index.rst` to point CI build badges and raw asset links to the primary branch `main`.

## [4.1.0-dev.11] - Previous
### CI
- Updated CI workflows (`build_linux.yml`, `build_windows.yml`, `build_android.yml`, `build_emscripten.yml`) to trigger on `main` alongside `master`.
- Added missing `bison` and `flex` tool installations to `build_linux.yml` runner dependencies.

## [4.1.0-dev.10] - Previous
### Docs
- Updated `MEMORY.md` to document the modern graphics backend abstraction, audio FFT scratchpad optimization, beat detection rate consolidation, and unified string utilities.
- Updated `DEPLOY.md` with explicit tool dependencies (`bison`, `flex`) and testing dependencies (`libgtest-dev`, `libgmock-dev`).

## [4.1.0-dev.9] - Previous
### Added
- Added `GetDefaultCapabilities` query function in `src/libprojectM/Renderer/GraphicsBackend.hpp` to provide baseline capability profiles for Vulkan, Metal, DirectX, OpenGLES, and OpenGL.

## [4.1.0-dev.8] - Previous
### Changed
- Refactored `PresetFileParser::ToLower` to reuse standard utility `Utils::ToLower`, combining duplicate string lowercase transformations.
- Updated `TextureAttachment` to use explicit `Texture::Source::Internal` for texture allocation.

## [4.1.0-dev.7] - Previous
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
