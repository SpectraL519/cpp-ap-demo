#include "numbers_converter.hpp"

#include <ap/argument_parser.hpp>

int main(int argc, char* argv[]) {
    ap::argument_parser parser;
    parser.program_name("convert numbers")
        .program_description("shows the correct way of using dthe choices parameter")
        .default_optional_arguments({ ap::default_optarg::help });

    parser.add_optional_argument<std::size_t>("numbers", "n")
          .nargs(ap::nargs::any())
          .help("positive integer value");
    parser.add_optional_argument("base", "b")
          .nargs(1)
          .default_value("dec")
          .choices({ "bin", "dec", "hex" })
          .help("output number format base");

    try {
        parser.parse_args(argc, argv);
    }
    catch (const ap::argument_parser_error& err) {
        std::cerr << "[ERROR] : " << err.what() << std::endl << parser << std::endl;
        std::exit(EXIT_FAILURE);
    }

    if (parser.value<bool>("help")) {
        std::cout << parser << std::endl;
        std::exit(EXIT_SUCCESS);
    }

    const auto numbers = parser.values<std::size_t>("numbers");
    const auto base = parser.value("base");

    convert_numbers(numbers, base);

    return 0;
}
