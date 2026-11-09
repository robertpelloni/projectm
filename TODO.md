# TODO

## Immediate Tasks
- [x] Investigate and resolve upstream merge conflicts and unrelated history issues.
- [x] Review pending pull requests and address open UI issues in canonical frontends. (Checked local sdl-test-ui; actual canonical UI is in frontend-sdl2 external repo)
- [x] Polish cross-platform CI pipelines (GitHub Actions) for better test coverage.
- [x] Refactor redundant code paths in Audio/PCM buffer implementations.
- [x] Audit test coverage and build pipeline on primary branch `main`.
- [x] Guard against null pointer dereference in `src/sdl-test-ui/setup.cpp` when HOME/USERPROFILE is unset.
- [x] Lay core abstractions for graphics modernization (`GraphicsBackend.hpp` and texture source cleanup).
- [x] Optimize FFT memory allocation path in `MilkdropFFT` to eliminate per-frame dynamic allocations.
- [x] Define `IGraphicsDevice` abstract hardware device interface for modern graphics APIs.
- [x] Optimize beat detection rate calculation in `Loudness::AdjustRateToFps`.
- [x] Consolidate redundant string lowercase transformations in `PresetFileParser` using `Utils::ToLower`.
- [x] Implement baseline backend capabilities profile provider `GetDefaultCapabilities`.
- [x] Refine documentation and deploy specifications in `MEMORY.md` and `DEPLOY.md`.
- [x] Align GitHub Actions CI workflows with primary branch `main` and ensure generator packages (bison/flex) are installed.
- [x] Align documentation index build badges and URLs in `docs/index.rst` to `main`.
- [x] Clean up redundant duplicate job definition in `.github/workflows/build_osx.yml`.
- [x] Run automated test suite across `projectM-playlist-unittest`, `projectM_EvalLib_Test`, and C API header validation targets.
