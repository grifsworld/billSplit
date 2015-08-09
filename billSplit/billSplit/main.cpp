#include <iostream>
#include <String>
#include "shopper.h"

using namespace std;

void screen();
void setShoppers(Shopper[],int);

int shopperCount;
double item = 0.0;
string buying = "";
int divider = 0;
string test = "";

int main(int argc, char* argv[]) {
	screen();
	cout << "How many shoppers?";
	cin >> shopperCount;
	Shopper* shoppers = new Shopper[shopperCount];
	setShoppers(shoppers, shopperCount);
	while (1) {
		cout << "Add a new item or type 0 for final numbers.\n";
		cin >> item;
		if (item == 0) {
			cout << "done boys";
		}
		else {
			for (int i = 0; i < shopperCount; i++) {
				cout << "Is " << shoppers[i].getName() << " buying this? (y for yes, n for no)\n";
				cin >> buying;
				if (buying == "y") {
					shoppers[i].setIsShopping(true);
					divider++;
				}
				else {
					buying = "";
				}
			}
			for (int i = 0; i < shopperCount; i++) {
				if (shoppers[i].getIsShopping() == true) {
					shoppers[i].addTotal(item / divider);
				}
			}
		}
		divider = 0;
		for (int i = 0; i < shopperCount; i++) {
			cout << shoppers[i].getName() << " owes: " << shoppers[i].getTotal() << "\n";
		}

	}
	
//	cout << shoppers[0].toString;
	cin >> test;
}

void setShoppers(Shopper shoppers[], int shopperCount) {
	for (int i = 0; i < shopperCount; i++) {
		cout << "Please enter shopper " << i + 1 << "'s name: ";
		string shp = "";
		cin >> shp;
		shoppers[i] = Shopper(shp);

	}
}

void screen() {
	string str;
	system("cls");
	cout << "----------------------------------BILL  SPLIT-----------------------------------\n";
	cout << "\n--------------------------------------------------------------------------------";
	cout << "Add item for: Griffin and Peyton.\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

	return;
}
