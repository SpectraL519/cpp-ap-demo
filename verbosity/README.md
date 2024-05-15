# CPP-AP demo: verbosity

This demo project demonstrates how you can use the `ap::argument_parser` class with custom types (like enums).

<br />

#### The project defines:

* The [main file](app/main.cpp) - the entry point of the program. Here you include the `ap/argument_parser.hpp` header file and define the parser's configuration.
* The [verbosity header file](include/verbosity.hpp) - the declarations of the `verbosity_level` custom type and the required `std::istream<<` operator
* The [verbosity source file](source/verbosity.cpp) - the definitions of the mentioned type and operator

<br />

#### Build and run:

Build the project by running the following:

```shell
cmake -B build
cd build
make
```

This will build the executable `verbosity` in the `<verbosity-root>/build` directory.

<br />

#### Experiments

Check what happens when you run the `verbosity` executable with:
* no arguments
* only the verbosity flag and no values
* the verbosity flag with a value from 0 to 2
* the verbosity flag with a value greater than 2 (e.g. `-v 5`)
* the verbosity flag with more than one value from 0 to 2 (e.g. `-v 0 1 2`)
* the verbosity flag used more than once with values (e.g. `-v 0 -v 1`)

> [!NOTE]
> The verbosity flag is either `-v` or `--verbosity`
