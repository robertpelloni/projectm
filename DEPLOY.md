# DEPLOY

## Environment Setup Instructions
### Dependencies
- CMake 3.10+
- A C++17 compatible compiler (GCC, Clang, MSVC)
- Vcpkg for dependency management (optional but recommended for non-Linux platforms)
- OpenGL development headers
- Build parser tools: `bison` (>= 3.8) and `flex` (>= 2.6)
- Test framework packages (for `-DBUILD_TESTING=ON`): `libgtest-dev`, `libgmock-dev`

### Build Process
1. Clone the repository and update submodules:
   `git clone --recursive https://github.com/projectM-visualizer/projectm.git`
2. Create a build directory:
   `mkdir build && cd build`
3. Configure the project:
   `cmake .. -DBUILD_TESTING=ON`
4. Build:
   `cmake --build . -j$(nproc)`
5. Run tests:
   `ctest --output-on-failure`

For platform-specific details, refer to `BUILDING.md` and `EMSCRIPTEN.md`.
