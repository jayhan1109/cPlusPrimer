//#include <iostream>
//
//// tom will be declared in another file
//extern int tom;
//
//// the var in "twofile1" will be hidden
//static int dick = 10;
//
//// external var
//// this won't be crashed with static var harry
//// in :twofile1"
//int harry = 200;
//
//void remote_access() {
//	using namespace std;
//	cout << "remote_access()'s three var address: \n";
//	cout << &tom << " = &tom, " << &dick << " = &dick, ";
//	cout << &harry << " = &harry\n";
//}