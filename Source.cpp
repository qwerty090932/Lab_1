
#include <iostream>
#include <cmath>
using namespace std;
void exersice1() {
	setlocale(LC_ALL, "rus");
	float a, b, c, ma, mb, mc, sqr1, sqr2, sqr3;
	ma = 0;
	mb = 0;
	mc = 0;
	a = 5.2;
	b = 8.13;
	c = 7.71;
	sqr1 = sqrt(2 * pow(b, 2) + 2 * pow(c, 2) - pow(a, 2));
	sqr2 = sqrt(2 * pow(a, 2) + 2 * pow(c, 2) - pow(b, 2));
	sqr3 = sqrt(2 * pow(b, 2) + 2 * pow(a, 2) - pow(c, 2));
	if ((sqr1 >= 0) && (sqr2 >= 0) && (sqr3 >= 0)) {
		ma = 0.5 * sqr1;
		mb = 0.5 * sqr2;
		mc = 0.5 * sqr3;
	}
	cout << ma << endl << mb << endl << mc;
}
void calculateDouble(double x) {
	double y, z,denom1, denom2, denom3;
	denom1 = 2 - 0.047 * x;
	if (denom1 != 0) {
		y = (pow(x, 2) + 10.2) / denom1 - pow(x, 2) / 4;
		denom2 = abs(y - x);
		if (denom2 != 0) {
			denom3 = pow(x, 2) - y / denom2;
		}
		else {
			cout << "Error!" << endl;
			exit(0);
		}
		if (denom3 != 0) {
			z = (8.7 * x * sqrt(abs(y - x))) / denom3;
		}
		else {
			cout << "Error!" << endl;
			exit(0);
		}
		cout << z << endl;
	}
	else cout << "Error!";
}
int main() {
	float x, y, z;
	setlocale(LC_ALL, "rus");
	do {
		if (cin.fail()) {
			cout << "Error!";
			cin.clear();
			cin.ignore(32767,'\n');
		}
		cout << "Value: " << endl;
		cin >> x;
	} while (cin.fail());

	float denom1, denom2, denom3;
	denom1 = 2 - 0.047 * x;
	if (denom1 != 0) {
		y = (pow(x, 2) + 10.2) / denom1 - pow(x, 2) / 4;
		denom2 = abs(y - x);
		if (denom2 != 0) {
			denom3 = pow(x, 2) - y / denom2;
		}
		else {
			cout << "Error!" << endl;
			exit(0);
		}
		if (denom3 != 0) {
			z = (8.7 * x * sqrt(abs(y - x))) / denom3;
		}
		else {
			cout << "Error" << endl;
			exit(0);
		}
		cout << z <<endl;
	}
	else cout << "Error!";
	calculateDouble(x);
	//exersice1();
	return 0;
}
