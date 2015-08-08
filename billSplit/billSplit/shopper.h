#include <String>

class Shopper {
public:
	Shopper();
	Shopper(std::string);
	Shopper(std::string, double);
	std::string getName();
	double getCost();
	bool getIsShopping();
	void setTotal(double);
	void setName(std::string);
	void setIsShopping(bool);
	std::string toString();
	void print();
private:
	std::string name;
	double total;
	bool isShopping;
};