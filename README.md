# cpp-ap-demo

A collection of the [CPP-AP](https://github.com/SpectraL519/cpp-ap) library demo projects.

<br />

> [!NOTE]
>
> Each demo project has it's own README file with it's detailed explanation

<br />

## Demo Projects

1. [Power Calculator](power_calculator/)
2. [File Merger](file_merger)
3. [Numbers Converter](numbers_converter/)
4. [Verbosity](verbosity/)
5. [Logging Mode](logging_mode/)

<br />

## Build and Run

To build the demo projects using CMake run the following:

```shell
cmake -B build # -DAP_TAG=<AP_TAG>
cmake --build build/ # -j <njobs>
```

This will generate a `run` executable in each of the `build/<demo-project-name>` directories, so to execute the built programs you can run:

```shell
./build/<demo-project-name>/run <command-line args>
```

> [!NOTE]
>
> Each project is built in the exact same way - using the `make_demo` macro defined in the root [CMakeLists.txt](/CMakeLists.txt) file

<br />

Alternatively you can use [Bazel](https://bazel.build/):

```shell
bazel build //:all_demos
```

This generate a target for each of the demo projects. To execute the built programs run:

```shell
bazel run //<demo-project-name>:<demo-project-name> -- <command-line args>
```
