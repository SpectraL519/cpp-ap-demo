#include <ap/argument_parser.hpp>

#include <fstream>
#include <iostream>
#include <sstream>

int main(int argc, char* argv[]) {
    ap::argument_parser parser;
    parser
        .program_name("merge files")
        .program_description("shows the correct way of using default arguments")
        .default_optional_arguments({
            ap::argument::default_optional::help,
            ap::argument::default_optional::multi_input,
            ap::argument::default_optional::output
        });

    parser.try_parse_args(argc, argv);
    parser.handle_help_action();

    const auto input_file_name_list = parser.values("input");
    const auto output_file_name = parser.value("output");

    std::ofstream output_file(output_file_name);
    if (not output_file.is_open())
        throw std::runtime_error("Cannot open file: " + output_file_name);

    for (const auto& input_file_name : input_file_name_list) {
        std::ifstream input_file(input_file_name);
        std::stringstream buff;
        buff << input_file.rdbuf();
        output_file << buff.str();
    }

    return 0;
}
