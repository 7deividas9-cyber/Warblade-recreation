# Warblade

## Requirements

- CMake 3.14 or newer
- A C++ compiler (Visual Studio or MinGW on Windows; GCC or Clang on GNU/Linux)
- raylib and raylib-cpp installed with their CMake package configuration files available to `find_package`

If CMake cannot find the raylib packages, set `CMAKE_PREFIX_PATH` to the installation prefix containing their CMake package files.

## Build on Windows

Open PowerShell in the project directory and configure and build:

```powershell
cmake -S . -B build
cmake --build build --config Release
```

If the dependencies are installed in a non-standard location, pass their prefix when configuring:

```powershell
cmake -S . -B build -DCMAKE_PREFIX_PATH="C:/path/to/dependencies"
```

The build copies `media/` next to the executable. Run it with the executable's directory as the working directory so its relative media paths resolve:

```powershell
Push-Location .\build\Release
.\Warblade.exe
Pop-Location
```

With a single-configuration generator such as MinGW Makefiles, use `build` instead of `build\Release`.

## Build on GNU/Linux

From the project directory, configure and build:

```sh
cmake -S . -B build
cmake --build build --parallel
```

If the dependencies are installed in a non-standard location, pass their prefix when configuring:

```sh
cmake -S . -B build -DCMAKE_PREFIX_PATH="$HOME/.local"
```

The build copies `media/` next to the executable. Run it with the executable's directory as the working directory so its relative media paths resolve:

```sh
cd build
./Warblade
```
