#include <iostream>
#include <String>
#include "shopper.h"
#include <sstream>

using namespace std;

void screen();
void setShoppers();
string toUpper(string);
string toLower(string);
bool isNumber(string);
int totalShopping();

Shopper* shoppers;
int shopperCount;
string test = "";

int main(int argc, char* argv[]) {
	screen();
	setShoppers();

	while (toLower(test) != "exit") {
		screen();
		cin >> test;
		if (isNumber(test)) {
			double x = atof(test.c_str()) / totalShopping();
			for (int i = 0; i < shopperCount; i++) {
				if (shoppers[i].getIsShopping()) shoppers[i].addTotal(x);
			}
		}
		else {
			for (int i = 0; i < shopperCount; i++) {
				if (toLower(test).compare(toLower(shoppers[i].getName())) == 0)
					shoppers[i].toggleIsShopping();
			}
		}
	}
}
int totalShopping() {
	int tot = 0;
	for (int i = 0; i < shopperCount; i++) {
		if (shoppers[i].getIsShopping()) tot++;
	}
	return tot;
}
void setShoppers() {
	screen();
	cout << "How many shoppers?";
	cin >> shopperCount;
	shoppers = new Shopper[shopperCount];
	screen();
	for (int i = 0; i < shopperCount; i++) {
		cout << "Please enter shopper " << (i + 1) << "'s name: ";
		string shp = "";
		cin >> shp;
		shoppers[i] = Shopper(shp);
		screen();
	}
}

void screen() {
	string str;
	system("cls");
	cout << "----------------------------------BILL  SPLIT-----------------------------------\n";
	cout << "\n--------------------------------------------------------------------------------";


	string s = "";
	stringstream ss;
	if (shoppers != 0) {
		for (int i = 0; i < shopperCount; i++) {
			ss << (i + 1) << ". ";
			if (shoppers[i].getTotal() >= 0.0) {
				
				if (shoppers[i].getIsShopping()) {
					ss << toUpper(shoppers[i].getName());
				}
				else {
					ss << toLower(shoppers[i].getName());
				}
				for (int i2 = shoppers[i].getName().length(); i2 < (i < 9 ? 30 : 29) ; i2++) ss << " ";
				ss << "$" << round(shoppers[i].getTotal() * 100) / 100;
			}
			ss << "\n";
		}
		
		s = ss.str();
	}


	//adds newlines until page is correctly formatted.
	int count = 0;
	for each(char c in s) if(c == '\n') count++;
	while (count < 15) {
		s = s + "\n";
		count++;
	}
	cout << s;



	cout << "--------------------------------------------------------------------------------\n";
	return;
}

string toUpper(string s){
	string s2 = "";
	for each(char c in s) {
		s2 += toupper(c);
	}
	return s2;
}
string toLower(string s) {
	string s2 = "";
	for each(char c in s) {
		s2 += tolower(c);
	}
	return s2;
}
bool isNumber(string s)
{
	std::string::const_iterator it = s.begin();
	while (it != s.end() && (isdigit(*it) || *it == '.')) ++it;
	return !s.empty() && it == s.end();
}