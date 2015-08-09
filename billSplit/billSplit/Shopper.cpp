#include <String>
#include "shopper.h"
#include <iostream>
#include <sstream>

using namespace std;

Shopper::Shopper() {};
void Shopper::print() {
	cout << "Shopper print";
}
Shopper::Shopper(string nam) {
	name = nam;
	isShopping = false;
	total = 0.0;
}
Shopper::Shopper(string nam, double tot) {
	total = tot;
	isShopping = false;
	name = nam;
}
string Shopper::getName() {
	return name;
}
double Shopper::getTotal() {
	return total;
}
bool Shopper::getIsShopping() {
	return isShopping;
}
void Shopper::setName(string in) {
	name = in;
}
void Shopper::setTotal(double tot) {
	total = tot;
}
void Shopper::addTotal(double tot) {
	total += tot;
}
string Shopper::toString() {
	stringstream ss;
	ss << name << " " << total <<  " " << ((isShopping) ? ("True") : ("False"));
	string s = ss.str();
	return s;
}
void Shopper::setIsShopping(bool shop) {
	isShopping = shop;
}

