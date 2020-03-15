//#include <iostream>
//#include <string>
//#include <cmath>
//
//int main() {
//	using std::cout;
//	using std::cin;
//	using std::endl;
//	using std::string;
//
//	string word;
//	size_t wordsize;
//	cout << "Input a word: ";
//	cin >> word;
//	wordsize = word.size();
//	string tabs(wordsize, '\t');
//
//	cout << endl;
//	cout << "Here is the result\n";
//	cout << "==================================================\n";
//	cout << tabs;
//	cout << word.at(0)<<endl;
//	for (int i = 1; i < word.size(); i++) {
//		tabs.erase(0, 1);
//		cout << tabs;
//		for (int j = 0; j <= i; j++) {
//			cout << word.at(j) << "\t";
//		}
//
//		for (int k = i - 1; k >= 0; k--) {
//			cout << word.at(k) << "\t";
//		}
//
//		cout << endl;
//
//	}
//
//	return 0;
//}