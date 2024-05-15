# CPP-AP demo: numbers converter

This demo project demonstrates how you can use the `choises` parameter of an argument.

<br />

#### The project defines:

* The [main file](app/main.cpp) - the entry point of the program. Here you include the `ap/argument_parser.hpp` header file and define the parser's configuration.
* The numbers_converter [header](include/numbers_converter.hpp) and [source](source/numbers_converter.cpp) files - the declarations and definitions of the numbers conversion utility

<br />

#### Build and run:

Build the project by running the following:

```shell
cmake -B build
cd build
make
```

This will build the executable `convert_numbers` in the `<numbers-converter-root>/build` directory.

<br />

#### Experiments

Check what happens when you run the `convert_numbers` executable with:
* no arguments
* only the *numbers flag* with values
* the *numbers flag* with values and the *base flag* with one of the values: `bin`, `dec`, `hex`
* the *numbers flag* with values and the *base flag* with a different value

> [!NOTE]
> * The *base flag* is either `-b` or `--base`
> * The *numbers flag* is either `-n` or `--numbers`
