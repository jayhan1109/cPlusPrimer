//#include <iostream>
//#include <string>
//
//using namespace std;
//
//struct CandyBar {
//	string name;
//	double weight;
//	int cal;
//};
//
//int main() {
//	CandyBar* snack = new CandyBar[3];
//	*snack={ "Hello",2.3,50 };
//	*(snack + 1) = { "World",5.5,10 };
//	*(snack + 2) = { "Bye",2.3,15 };
//
//	cout << snack->name << endl;
//	cout << (snack + 1)->weight << endl;
//	cout << (snack + 2)->cal << endl;
//	
//
//	snack[0] = { "Hello",2.3,50 };
//	snack[1] = { "World",5.5,10 };
//	snack[2] = { "Bye",2.3,15 };
//
//	cout << snack[0].name << endl;
//	cout << snack[1].name << endl;
//	cout << snack[2].name << endl;
//	delete[] snack;
//	return 0;
//}