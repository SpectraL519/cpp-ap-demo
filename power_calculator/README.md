# CPP-AP demo: power calculator

<!-- TODO -->

This demo project demonstrates how to add positional and optional arguments to the parser's configuration.

The program takes two arguments:
* (positional) `base` - the exponentation base
* (optional) `exponent` - a list of exponents (specified to take at least one argument)

<br />

#### The project defines:

* The [power file](power.cpp) - the entry point of the program. Here you include the `ap/argument_parser.hpp` header file and define the parser's configuration, as well as the program's logic.

<br />

#### Build and run:

Build the project by running the following:

```shell
cmake -B build
cd build
make
```

This will build the executable `power` in the `<power-calculator-root>/build` directory.

<br />

#### Experiments

Check what happens when you run the `power` executable with:
* no arguments
* only the *base positional value*
* the *base positional value* positional value and the *exponent flag* with at least one value

> [!NOTE]
> * The *base positional value* is parsed without any flags, e.g. `./power 2`
> * The *exponent flag* is either `-e` or `--exponent`.

<br />

#### Example program execution

```shell
> ./power 3 --exponent 1 2 3
3 ^ 1 = 3
3 ^ 2 = 9
3 ^ 3 = 27
```
