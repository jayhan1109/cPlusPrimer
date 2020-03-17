//#include <iostream>
//
//using namespace std;
//
//double add(double x, double y) {
//	return x + y;
//}
//
//double multiply(double x, double y) {
//	return x * y;
//}
//
//double minuss(double x, double y) {
//	return x - y;
//}
//
//double calculate(double x, double y, double (*f)(double x, double y)) {
//	return f(x, y);
//}
//
//int main() {
//	double q = calculate(12.5, 10.4, add);
//	cout << q << endl;
//	q = calculate(12.5, 10.4, multiply);
//	cout << q << endl;
//	q = calculate(12.5, 10.4, minuss);
//	cout << q << endl;
//
//	double (*pf[3]) (double x, double y);
//	pf[0] = add;
//	pf[1] = multiply;
//	pf[2] = minuss;
//	cout << pf[0](12.5, 10.4) << endl;
//	cout << pf[1](12.5, 10.4) << endl;
//	cout << pf[2](12.5, 10.4) << endl;
//	return 0;
//}
//	