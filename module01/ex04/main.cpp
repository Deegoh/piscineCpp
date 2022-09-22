#include <iostream>
#include <fstream>

bool stream_editor(std::string filename, std::string s1, std::string s2)
{
	std::ifstream ifs(filename.c_str());
	std::string readed;

	if (ifs.fail() || s1.empty())
		return 0;
	char c = ifs.get();
	do {
		readed += c;
		c = ifs.get();
	} while (!ifs.eof());
	ifs.close();

	for (size_t pos = readed.find(s1); pos != readed.npos; )
	{
		readed.erase (pos, s1.length());
		readed.insert(pos, s2);
		pos = readed.find(s1);
	}

	std::ofstream ofs(filename.append(".replace").c_str());
	if (ofs.fail())
		return 0;
	ofs << readed;
	ofs.close();
	return 1;
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "./usage <filename> <s1> <s2>" << std::endl;
		return 1;
	}
	std::string filename(av[1]);
	std::string s1(av[2]);
	std::string s2(av[3]);
	if (!stream_editor(filename, s1, s2))
	{
		std::cout << "Failed" << std::endl;
		return 1;
	}
	std::cout << "Succeed" << std::endl;
	return 0;
}
