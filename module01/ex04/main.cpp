#include <iostream>
#include <fstream>

void stream_editor(std::string filename, std::string s1, std::string s2)
{
	std::ifstream ifs(filename.c_str());
	std::ofstream ofs(filename.append(".replace").c_str());
	std::string readed;

	ifs >> readed;
	std::cout << readed;
	ifs.close();

	ofs << "i like ponies a whole damn lot" << std::endl;
	ofs.close();
	(void)s1;
	(void)s2;
}

int main()
{
	stream_editor("test", "null", "null");
	//s1 = s2
}
