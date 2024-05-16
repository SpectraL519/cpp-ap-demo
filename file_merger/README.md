# CPP-AP demo: file merger

This demo project demonstrates how you can use the default arguments.

The program takes two default optional arguments:
* `input` - a list of file paths to be merged with a default action: `check_file_exists`
* `output` - output file path

The program merges all input files into a single output file.

<br />

#### The project defines:

* The [merge_files source file](merge_files.cpp) - the entry point of the program. Here you include the `ap/argument_parser.hpp` header file and define the parser's configuration.

<br />

#### Build and run:

Build the project by running the following:

```shell
cmake -B build
cd build
make
```

This will build the executable `merge_files` in the `<file-merger-root>/build` directory.

<br />

#### Experiments

Check what happens when you run the `merge_files` executable with:
* no arguments
* only the *input flag* with values / only the *output flag* with values
* both the *input* and *output* flags with values

> [!NOTE]
> * The *input flag* is either `-i` or `--input`
> * The *output flag* is either `-o` or `--output`

<br />

#### Example program execution

```shell
> ./merge_files -i ../data/test_file_1.txt ../data/test_file_2.txt ../data/test_file_1.txt -o out_file.txt
```
