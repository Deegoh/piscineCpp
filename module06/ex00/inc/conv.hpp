#ifndef CONV_HPP
# define CONV_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <iomanip>
# include <cmath>

void convert(std::string arg);
void printAndConv(std::string arg, std::string type);

bool isChar(std::string arg);
bool isInt(std::string arg);
int isFloat(std::string arg);
int isDouble(std::string arg);
std::string findType(std::string arg);

bool isPrintable(char c);
void printInChar(char c);
void printInInt(int d);
void printInFloat(float f, int p);
void printInDouble(double ld, int p);

#endif
