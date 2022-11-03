#include <iostream>
#include <string>
#include <fstream>

std::string     read_file(std::ifstream &ifs){
    std::string fichier;
    std::string lecture;


    std::getline(ifs,  lecture);
    lecture.append("\n");
    fichier.append(lecture) ;
    while ((ifs.rdstate() & std::ifstream::eofbit ) == 0){
        std::getline(ifs,  lecture);
        fichier.append(lecture);
        if ((ifs.rdstate() & std::ifstream::eofbit ) == 0)
            fichier.append("\n");
    }
    return fichier;
}

int main(int argc, char **argv)
{
	std::ifstream filein;
	std::ofstream fileout;
	if (argc != 4)
	{
		std::cout << "Invalid number of parameter" << std::endl;
		exit (-1);
	}
	std::string namefile = argv[1];
	std::string to_change = argv[2];
	std::string with_that = argv[3];
	// std::string buffer;    
    std::string infile;
	int	i = 0;

	filein.open(namefile, std::ios::in);
	fileout.open(namefile.append(".replace"), std::ios::out);
	if (!filein )
	{
		std::cout << "Error: couldn't open in or out file" << std::endl;
		exit (-1);
	}
	infile = read_file(filein);
	while(infile[i] && to_change.length())
	{
		if (infile.substr(i, to_change.length()) == to_change)
		{
			infile.erase(i, to_change.length());
			infile.insert(i, with_that);
			i += with_that.length();
			i--;
		}
		i++;
	}
	fileout << infile;
	filein.close();
	fileout.close();
}