
#include "printutil.h"

void printutil::printline(int LineLength){
	for(i=0;i<LineLength;i++){
		std::cout << "-";
	}
}
void printutil::printtab(int tabLength){
	for(i=0;i<tabLength;i++){
		std::cout << "\t";
	}
}

void printutil::gotonextline(){
	std::cout << "\n";
	}

