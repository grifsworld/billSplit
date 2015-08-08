#include <iostream>
#include <String>
#include "shopper.h"

using namespace std;

void screen();

int main(int argc, char* argv[]) {

	screen();
	string i = "";
	cin >> i;
}


Shopper s;
void screen() {
	string str;
	system("cls");
	cout << "----------------------------------BILL  SPLIT-----------------------------------\n";
	s.print();
	cout << "\n--------------------------------------------------------------------------------";
	cout << "Add item for: Griffin and Peyton.\n\n\n\n\n";
	cin >> str; 

//	for (int i = 0; i < )

	return;
}
