# cpp-ap-demo

A collection of the [CPP-AP](https://github.com/SpectraL519/cpp-ap) library demo projects.

<br />

> [!NOTE]
> Each demo project has it's own README file with it's detailed explanation

<br />

## Projects

1. [Power calculator](power_calculator/)
2. [Numbers converter](numbers_converter/)
3. [Verbosity](verbosity/)
4. [File merger](file_merger)

<br />

## Build and run

To build the demo projects run the following:

```shell
cmake -B build # -DAP_TAG=<AP_TAG>
cd build
make # -j <njobs>
```

This will build the `run` executables in the `<demo-repo-root>/build/<demo-project-name>` directories.
