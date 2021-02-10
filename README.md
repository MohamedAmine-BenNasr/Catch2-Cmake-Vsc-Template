# C++ Starter Template for CMake
![image](https://user-images.githubusercontent.com/32094503/106008548-b496de80-60b7-11eb-92d9-776748d76f25.png)

> Can be used in Visual Studio Code

Features:

- [x] Building C++ files using CMake in Visual Studio Code
- [x] Supports Windows, Mac, and Linux
- [x] [Catch Test](https://github.com/catchorg/Catch2) for unit tests
- [x] Debugging with Visual Studio Code to provide breakpoints, watch, call stack, and pretty printing for STL containers such as `std::map` and `std::vector`
- [x] Measure coverage using Gcov


## Prerequisite

### Installing CMake

This repo uses `CMake` and `Mingw` for building C++ files.
You can install CMake using this [link](https://cmake.org/download/) and Mingw using this [link](http://mingw-w64.org/doku.php/download).

### Installing Toolchain

CMake can detect and work with most toolchains. On Mac, you can install XCode. On Windows, you can use Visual Studio. On Linux, you can use gcc.

### Visual Studio Code Extensions
If you are using [Visual Studio Code](https://code.visualstudio.com/), you need to install these extensions:
- [CMake Tools](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cmake-tools)
- [CMake](https://marketplace.visualstudio.com/items?itemName=twxs.cmake)
- [cmake-format](https://marketplace.visualstudio.com/items?itemName=cheshirekow.cmake-format)
- [CMake Test Explorer](https://marketplace.visualstudio.com/items?itemName=fredericbonnet.cmake-test-adapter)
- [C/C++](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)


## Cloning this repo

```bash
git clone https://github.com/MohamedAmine-BenNasr/Catch2-Cmake-Vsc-Template.git
```

## Configuring CMake
Once CMake and CMake extensions are installed, type the following in the command line:

`CMake: Configure`

This will create a subfolder called `build`. Once you do this, a new button on the left `Activity Bar` in Visual Studio Code will appear which allows you to run and debug the targets.


## Origin

This repository is based on another template made by `Ari ourarash` :

```bash
https://github.com/ourarash/cmake-catch-vsc-template
```