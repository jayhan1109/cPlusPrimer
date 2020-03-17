//#include <iostream>
//
//using namespace std;
//
//int main() {
//	string ch;
//	int v = 0;
//	int o = 0;
//	int r = 0;
//	cout << "Input words (EXIT - q)" << endl;
//	cin >> ch;
//	while (ch != "q") {
//		if (ch[0] == 'a' || ch[0] == 'e' || ch[0] == 'u' || ch[0] == 'o' || ch[0] == 'i') {
//			v++;
//		}
//		else if (isalpha(ch[0])) {
//			o++;
//		}
//		else {
//			r++;
//		}
//		cin >> ch;
//	}
//
//	cout << "v: " << v << endl;
//	cout << "o: " << o << endl;
//	cout << "r: " << r << endl;
//
//	return 0;
//}