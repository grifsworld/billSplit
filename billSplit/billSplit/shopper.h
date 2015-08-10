#include <String>

class Shopper {
public:
	Shopper();
	Shopper(std::string);
	Shopper(std::string, double);
	std::string getName();
	double getTotal();
	bool getIsShopping();
	void setTotal(double);
	void addTotal(double);
	void setName(std::string);
	void setIsShopping(bool);
	void toggleIsShopping();
	std::string toString();
	void print();
private:
	std::string name;
	double total;
	bool isShopping;
};