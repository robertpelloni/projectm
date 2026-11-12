# DEPLOY

## Environment Setup Instructions
### Dependencies
- CMake 3.10+
- A C++17 compatible compiler (GCC, Clang, MSVC)
- Vcpkg for dependency management (optional but recommended for non-Linux platforms)
- OpenGL development headers
- Build parser tools: `bison` (>= 3.8) and `flex` (>= 2.6)
- Test framework packages (for `-DBUILD_TESTING=ON`): `libgtest-dev`, `libgmock-dev`
- Audio and GUI test packages (optional for test UI): `libsdl2-dev`

### Build Process
1. Clone the repository and update submodules recursively:
   `git clone --recursive https://github.com/projectM-visualizer/projectm.git`
   `git submodule update --init --recursive`
2. Create and enter a build directory:
   `mkdir -p build && cd build`
3. Configure the project:
   `cmake .. -DBUILD_TESTING=ON`
4. Build the core visualizer library and test suites:
   `cmake --build . -j$(nproc)`
5. Run automated test suites:
   - Playlist unit tests: `ctest -R "projectM-playlist-unittest" --output-on-failure`
   - Expression evaluator tests: `./vendor/projectm-eval/tests/projectM_EvalLib_Test`
   - C API header compatibility tests: `cmake --build . --target TestMainAPIHeaders TestPlaylistAPIHeaders`

For platform-specific details, refer to `BUILDING.md` and `EMSCRIPTEN.md`.
