#include "add.h"


void add::getfirstnumber()
{
	std::cout<< " Enter First number:";
	std::cin>>num1;
}
void add::getsecondnumber()
{
	std::cout<< " Enter second number:";
	std::cin>>num2;
}
void add::calculate()
{
	std::cout << num1 <<"+" << num2 << "=" << num1+num2 <<".";
}
