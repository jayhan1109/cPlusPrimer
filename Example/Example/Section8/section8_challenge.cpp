//#include <iostream>
//
//int main() {
//	using std::cout;
//	using std::cin;
//	using std::endl;
//
//	int cents{ 0 };
//	int divide_dollar{ 100 };
//	int divide_quarters{ 25 };
//	int divide_dimes{ 10 };
//	int divide_nickels{ 5 };
//	int divide_pennies{ 1 };
//	
//	cout << "Enter an amount in cents: ";
//	cin >> cents;
//	
//	cout << "You can provide this change as follows:\n";
//	cout << "dollars : " << cents / divide_dollar << endl;
//	cents = cents % divide_dollar;
//	cout << "quarters : " << cents / divide_quarters << endl;
//	cents = cents % divide_quarters;
//	cout << "dimes : " << cents / divide_dimes << endl;
//	cents = cents % divide_dimes;
//	cout << "nickels : " << cents / divide_nickels << endl;
//	cents = cents % divide_nickels;
//	cout << "pennies : " << cents / divide_pennies << endl;
//	return 0;
//}