//#include <iostream>
//
//using namespace std;
//
//// external variable
//double warming = 0.3;
//
//// function declaration
//void update(double dt);
//void local();
//
//// use external variable
//int main() {
//	cout << "External warming: " << warming << " degree.\n";
//	update(0.1);
//	cout << "External warming: " << warming << " degree.\n";
//	local();
//	cout << "External warming: " << warming << " degree.\n";
//	return 0;
//}
//
//// file1
//int erros = 20;
//
//// ---------------------------------------
//
//// Incorrect
//// file2
//int errors = 5;
//{
//	// Error
//	// variable should be one
//	cout << errors;
//}
//
//// Correct
//// file2
//static int errors = 5;
//{
//	// errors only can be used in file2
//	// so this is correct
//	cout << errors;
//}
