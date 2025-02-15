#include "verbosity.hpp"

#include <ap/argument_parser.hpp>

namespace {

void print_welcome_message(const verbosity_level verbosity) {
    switch (verbosity) {
    case verbosity_level::low:
        std::cout << "Hi!" << std::endl;
        break;

    case verbosity_level::mid:
        std::cout << "Welcome to CPP-AP demo: verbosity!" << std::endl;
        break;

    case verbosity_level::high:
        std::cout << "Welcome to the CPP-AP demo project: verbosity!" << std::endl
                  << "This project demostrates how to use the "
                     "ap::argument_parser class with custom types (like enums)" << std::endl;
        break;
    }
}

} // namespace

int main(int argc, char** argv) {
    ap::argument_parser parser;
    parser.program_name("verbosity level")
        .program_description("shows the correct way of using enums as a parser argument type")
        .default_optional_arguments({ ap::argument::default_optional::help });

    parser.add_optional_argument<verbosity_level>("verbosity_level", "v")
        .default_value(verbosity_level::low)
        .implicit_value(verbosity_level::mid)
        .nargs(1);

    parser.try_parse_args(argc, argv);
    parser.handle_help_action();

    print_welcome_message(parser.value<verbosity_level>("verbosity_level"));

    return 0;
}
