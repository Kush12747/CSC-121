/*//twoNumber.cpp
#include <iostream>
using namespace std;

int main() {
	int a, b;

	//keep prompting
	do {
		cout << "Enter two positive integers, the first smaller than the second." << endl;
		cout << "First: " << endl;
		cin >> a;
		cout << "Second: " << endl;
		cin >> b;
	} while ((a <= 0) || (b <= 0) || (a > b));

	//Only print this if its correct
	if (a < b) {
		cout << "You entered" << a << " and " << b << endl;
	}
	
}*/
/*
void transfer(double& balance1, double& balance2, double& amount) {
	if (balance1 >= amount) {
		balance1 = balance1 - amount;
		balance2 = balance2 + amount;
	}
}*/
/*
#include <iostream>
using namespace std;

class Bug {
public:
	int get_position() const;
	void reset();
	void up();
private:
	int position = 0;
};
int Bug::get_position() const {
	return position;
}
void Bug::reset() {
	position = 0;
}
void Bug::up() {
	position = position + 10;
	if (position >= 100)
		reset();
}
int main() {
	Bug bugsy;
	Bug itsy_bitsy;
	bugsy.reset();
	itsy_bitsy.reset();
	bugsy.up();
	bugsy.up();
	cout << bugsy.get_position() << endl;
	cout << "Ecpected: 20" << endl;
	itsy_bitsy.up();
	itsy_bitsy.up();
	itsy_bitsy.up();
	cout << itsy_bitsy.get_position() << endl;
	cout << "Expected: 30" << endl;
	for (int i = 1; i <= 8; i++) { bugsy.up(); }
	cout << bugsy.get_position() << endl;
	cout << "Expected: 0" << endl;
	bugsy.up();
	cout << bugsy.get_position() << endl;
	cout << "Expected: 10" << endl;

	return 0;
}*/