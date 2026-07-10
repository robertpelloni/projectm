# DEPLOY

## Environment Setup Instructions
### Dependencies
- CMake 3.10+
- A C++17 compatible compiler (GCC, Clang, MSVC)
- Vcpkg for dependency management (optional but recommended for non-Linux platforms)
- OpenGL development headers

### Build Process
1. Clone the repository and update submodules:
   `git clone --recursive https://github.com/projectM-visualizer/projectm.git`
2. Create a build directory:
   `mkdir build && cd build`
3. Configure the project:
   `cmake ..`
4. Build:
   `cmake --build .`

For platform-specific details, refer to `BUILDING.md` and `EMSCRIPTEN.md`.
