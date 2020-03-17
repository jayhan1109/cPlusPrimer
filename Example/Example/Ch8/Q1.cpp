//#include <iostream>
//#include <string>
//
//using namespace std;
//
//void print(string& str, int n=0);
//
//int main() {
//	string str="Hello World";
//	print(str);
//	print(str);
//	print(str);
//	print(str);
//	print(str);
//	print(str);
//	cout << "=============================\n";
//	print(str,4);
//	cout << "=============================\n";
//
//	print(str,3);
//	cout << "=============================\n";
//
//	print(str,2);
//
//	return 0;
//}
//
//void print(string& str, int n) {
//	static int num = 0;
//	if (n == 0) {
//		cout << str << endl;
//	}
//	else {
//		for (int i = 0; i < num; i++) {
//			cout << str << endl;
//		}
//	}
//	num++;
//}