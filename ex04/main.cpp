#include <cstring>
#include <iostream>
#include <fstream>
#include <string>

void	searchAndReplace(std::string &str, const char *search, const char *replace);

int	main(int argc, char **argv)
{
	std::string		line;
	std::string		new_file;
	std::ifstream	input_stream;
	std::ofstream	output_stream;

	if (argc != 4)
	{
		std::cout << "Please provide: <filename> <s1> <s2>" << std::endl;
		return (0);
	}
	new_file = argv[1]; 
	input_stream.open(argv[1]);
	if (!input_stream) {
		std::cout << "Error opening '" << new_file << "' or it doesn't exist." << std::endl;
		return (0);
	}
	if (input_stream.peek() == std::ifstream::traits_type::eof()) {
		std::cout << "Error! File '" << new_file << "' is empty." << std::endl;
	}
	new_file += ".replace";
	output_stream.open(new_file.data());
	while (std::getline(input_stream, line))
	{
		searchAndReplace(line, argv[2], argv[3]);
		output_stream << line << std::endl;
	}
	input_stream.close();
	output_stream.close();
	return (0);
}

void	searchAndReplace(std::string &str, const char *search, const char *replace)
{
	std::size_t		find_index;
	std::size_t		search_len;

	find_index = str.find(search);
	while (find_index != str.npos)
	{
		search_len = strlen(search);
		str.erase(find_index, search_len);
		str.insert(find_index, replace);
		find_index = str.find(search, find_index);
	}
	return ;
}
