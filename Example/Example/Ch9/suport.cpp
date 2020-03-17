//#include <iostream>
//
//// use warming from other file
//extern double warming;
//
//void update(double dt);
//void local();
//
//using std::cout;
//
//void update(double dt) {
//	extern double warming;
//	warming += dt;
//	cout << "External warming: " << warming << " degree.\n";
//}
//
//void local() {
//	double warming = 0.8;
//	cout << "Local warming: " << warming << " degree.\n";
//	cout << "Buttttttttttttttttttttt\n";
//	cout << "External warming: " << ::warming << " degree.\n";
//}
//
