//#include <iostream>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//const int SIZE = 20;
//
//int main() {
//	char filename[SIZE];
//	ifstream inFile;
//	cout << "Input a file name: ";
//	cin.getline(filename, SIZE);
//	inFile.open(filename);
//	if (!inFile.is_open()) {
//		cout << filename << " can't be open" << endl;
//		cout << "Exit program..." << endl;
//		exit(EXIT_FAILURE);
//	}
//	string value;
//	int vowel = 0;
//	int cons = 0;
//	int rest = 0;
//
//	inFile >> value;
//	while (inFile.good()) {
//		if (value == "q")
//			break;
//		if (value[0] == 'a' || value[0] == 'e' || value[0] == 'i' || value[0] == 'o' || value[0] == 'u') {
//			vowel++;
//		}
//		else if (isalpha(value[0])) {
//			cons++;
//		}
//		else {
//			rest++;
//		}
//		inFile >> value;
//	}
//
//	if (inFile.eof()) {
//		cout << "We reached to the EOF\n";
//	}
//	else if (inFile.fail()) {
//		cout << "Different data type\n";
//	}
//	else {
//		cout << "Unknown Error\n";
//	}
//
//	if (vowel == 0 && cons == 0 && rest == 0) {
//		cout << "There is no data\n";
//	}
//	else {
//		cout << "Vowels: " << vowel << endl;
//		cout << "Cons: " << cons << endl;
//		cout << "Rest: " << rest << endl;
//	}
//	inFile.close();
//
//	return 0;
//}