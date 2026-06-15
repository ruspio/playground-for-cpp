# C++ Playground

This repository is a personal C++ playground built with CMake.  
It is intended for experimenting with C++ syntax, standard library features, algorithms, design patterns, and small test programs.

## Purpose

The goal of this project is to provide a simple sandbox for learning, testing, and practicing C++ concepts, including:

- Standard Library containers such as `std::vector`, `std::map`, `std::unordered_set`, etc.
- Standard algorithms such as `std::sort`, `std::accumulate`, `std::transform`, etc.
- Smart pointers such as `std::unique_ptr`, `std::shared_ptr`, and `std::weak_ptr`
- Modern C++ features such as lambdas, range-based loops, RAII, move semantics, and `auto`
- Design patterns such as Factory, Strategy, Observer, Decorator, Singleton, etc.
- Small algorithmic exercises and problem-solving experiments
- Code snippets, tests, and quick prototypes

This project is not focused on building one final application.  
Instead, it is meant to be a clean and expandable workspace for practicing and exploring C++.

## Build Instructions

### Requirements

- CMake
- C++17-compatible compiler, for example GCC, MinGW-w64, Clang, or MSVC
- Visual Studio Code with the CMake Tools extension, recommended but not required

### Build

From the root directory of the project:

```bash
cmake -S . -B build
cmake --build build