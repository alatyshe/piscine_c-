#include <iostream>
#include <fstream>
#include <sstream>

std::string			readFile(const std::string& fileName) {
    std::ifstream f(fileName);
    std::stringstream ss;
    ss << f.rdbuf();
    return ss.str();
}

void 				find_and_replace(std::string& source,
	std::string const& find,std::string const& replace)
{
    for(std::string::size_type i = 0; (i = source.find(find, i)) != std::string::npos;)
    {
        source.replace(i, find.length(), replace);
        i += replace.length();
    }
}

int main(int argc, char **argv)
{
	std::string		file;
	std::string		find;
	std::string		replace;

	if (argc != 4)
	{
		std::cout << "Error" << std::endl;
		return (0);
	}
	setlocale(LC_ALL, "rus");
	find = argv[2];
	replace = argv[3];
	file = readFile(argv[1]);

	find_and_replace(file, find, replace);
	std::ofstream	ofs(argv[1]);

	ofs << file;
	ofs.close();
	return (0);
}