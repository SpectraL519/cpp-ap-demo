# cpp-ap-demo

A collection of the [CPP-AP](https://github.com/SpectraL519/cpp-ap) library demo projects.

<br />

> [!NOTE]
> Each demo project has it's own README file with it's detailed explanation

<br />

## Demo Projects

1. [Power calculator](power_calculator/)
2. [Numbers converter](numbers_converter/)
3. [Verbosity](verbosity/)
4. [File merger](file_merger)

<br />

## Build and Run

To build the demo projects using CMake run the following:

```shell
cmake -B build # -DAP_TAG=<AP_TAG>
cmake --build build/ # -j <njobs>
```

This will generate a `run` executable in each of the `build/<demo-project-name>` directories, so to execute the built programs you can run:

```shell
./build/<demo-project-name> <command-line args>
```

<br />

Alternatively you can use [Bazel](https://bazel.build/):

```shell
bazel build //:all_demos
```

This generate a target for each of the demo projects. To execute the built programs run:

```shell
bazel run //<demo-project-name>:<demo-project-name> -- <command-line args>
```
