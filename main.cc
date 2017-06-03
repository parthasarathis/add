#include "add.h"
#include "printutil.h"

int main()
{
	printutil p;
	add a;
	p.printline(80);p.gotonextline();
	p.printtab(3);std::cout<< " Program for adding two numbers";p.gotonextline();
	p.printline(80);p.gotonextline();
	a.getfirstnumber();p.gotonextline();
	p.printline(80);p.gotonextline();
	a.getsecondnumber();p.gotonextline();
	p.printline(80);p.gotonextline();
	a.calculate();p.gotonextline();
	p.printline(80);p.gotonextline();
}

	
