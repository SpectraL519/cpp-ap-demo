#include <ap/argument_parser.hpp>

#include <cmath>
#include <iostream>

int main(int argc, char* argv[]) {
    // create the parser class instance
    ap::argument_parser parser;
    parser.program_name("power calculator")
          .program_description("calculates the value of an expression: base & exponent")
          .default_optional_arguments({ ap::default_optarg::help });

    // add arguments
    parser.add_positional_argument<double>("base")
          .help("the exponentation base value");
    parser.add_optional_argument<int>("exponent", "e")
          .nargs(ap::nargs::at_least(1)) // define the number of values range for the argument
          .help("the exponent value");

    // parse command-line arguments
    try {
        parser.parse_args(argc, argv);
    }
    catch (const ap::argument_parser_exception& err) {
        std::cerr << "[ERROR] : " << err.what() << std::endl << parser << std::endl;
        std::exit(EXIT_FAILURE);
    }

    // check for the help argument presence
    if (parser.value<bool>("help")) {
        std::cout << parser << std::endl;
        std::exit(EXIT_SUCCESS);
    }

    const double base = parser.value<double>("base");
    const std::vector<int> exponent_values = parser.values<int>("exponent");

    for (const int exponent : exponent_values) {
        std::cout << base << " ^ " << exponent << " = " << std::pow(base, exponent) << std::endl;
    }

    return 0;
}
