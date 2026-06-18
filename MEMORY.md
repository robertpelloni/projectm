# MEMORY

## Internal Architectural Observations
- The core of projectM is `libprojectM`, responsible for preset parsing, audio analysis (PCM/FFT), and OpenGL rendering.
- The codebase relies heavily on CMake for build configuration across diverse platforms.
- `projectm-eval` is used as a submodule for evaluation logic.
- There's a clear separation between the rendering pipeline and the audio feature extraction.
- External dependencies are managed using `vcpkg`.
