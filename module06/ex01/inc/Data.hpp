#ifndef DATA_HPP
# define DATA_HPP

class Data {
public:
	Data();
	Data(const Data &src);
	Data &operator=(const Data &rhs);
	~Data();

	int d;
	char c;
};

#endif
