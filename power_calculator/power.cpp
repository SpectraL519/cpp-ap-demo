#include <ap/argument_parser.hpp>

#include <cmath>
#include <iostream>

int main(int argc, char* argv[]) {
    // create the parser class instance
    ap::argument_parser parser;
    parser.program_name("power calculator")
          .program_description("calculates the value of an expression: base & exponent")
          .default_optional_arguments({ ap::argument::default_optional::help });

    // add arguments
    parser.add_positional_argument<double>("base")
          .help("the exponentation base value");
    parser.add_optional_argument<int>("exponent", "e")
          .nargs(ap::nargs::at_least(1)) // define the number of values range for the argument
          .help("the exponent value");

    // parse command-line arguments
    parser.try_parse_args(argc, argv);

    // check for the help argument presence
    parser.handle_help_action();

    const double base = parser.value<double>("base");
    const std::vector<int> exponent_values = parser.values<int>("exponent");

    for (const int exponent : exponent_values) {
        std::cout << base << " ^ " << exponent << " = " << std::pow(base, exponent) << std::endl;
    }

    return 0;
}
