//#include <iostream>
//#include <string>
//#include <vector>
//
//using std::cout;
//using std::cin;
//using std::endl;
//using std::string;
//using std::vector;
//
//void printMenu();
//void selectMenu(vector<int>&);
//void printNums(const vector<int>&);
//void addNum(vector<int>&);
//void meanNum(const vector<int>&);
//void smNum(const vector<int>&);
//void lgNum(const vector<int>&);
//
//int main() {
//	vector<int> vec;
//	selectMenu(vec);
//	return 0;
//}
//
//void printMenu() {
//	cout << "P - Print numbers\n"
//		<< "A - Add a number\n"
//		<< "M - Display mean of the numbers\n"
//		<< "S - Display the smallest number\n"
//		<< "L - Display the largest number\n"
//		<< "Q - Quit\n\n"
//		<< "Enter your choice: ";
//}
//
//void selectMenu(vector<int>& vec) {
//	bool isRunning = true;
//	while (isRunning) {
//		printMenu();
//		char select;
//		cin >> select;
//		switch (select) {
//		case 'P':
//		case 'p':
//			printNums(vec);
//			break;
//		case 'A':
//		case 'a':
//			addNum(vec);
//			break;
//		case 'M':
//		case 'm':
//			meanNum(vec);
//			break;
//		case 'S':
//		case 's':
//			smNum(vec);
//			break;
//		case 'L':
//		case 'l':
//			lgNum(vec);
//			break;
//		case 'Q':
//		case 'q':
//			cout << "Exit the program...\n";
//			isRunning = false;
//			break;
//		default:
//			cout << "Unknown selection, please try again\n"
//				<< "=====================================\n\n";
//			break;
//		}
//	}
//}
//
//
//void printNums(const vector<int>& vec) {
//	if (vec.size() == 0) {
//		cout << "The list is empty\n"
//			<< "=====================================\n\n";
//	}
//	else {
//		cout << "[ ";
//		for (int v : vec) {
//			cout << v << " ";
//		}
//		cout << "]\n"
//		<< "=====================================\n\n";
//
//	}
//}
//
//void addNum(vector<int>& vec) {
//	int num;
//	cout << "Input a number: ";
//	cin >> num;
//	vec.push_back(num);
//	cout << "Added a number to the vector!\n"
//		<< "=====================================\n\n";
//}
//
//void meanNum(const vector<int>& vec) {
//	if (vec.size() == 0) {
//		cout<<"Unable to calculate the mean - no data\n"
//			<< "=====================================\n\n";
//	}
//	else {
//		double sum{ 0.0 };
//		for (int v : vec) {
//			sum += v;
//		}
//
//		cout << "Mean is " << sum / vec.size() << endl
//			<< "=====================================\n\n";
//	}
//}
//
//void smNum(const vector<int>& vec) {
//	if (vec.size() == 0) {
//		cout << "Unable to determine the smallest number - list is empty\n"
//			<< "=====================================\n\n";
//	}
//	else {
//		int tmp{ vec.at(0) };
//		for (int v : vec) {
//			if (tmp > v)
//				tmp = v;
//		}
//		cout << "The smallest number is " << tmp << endl
//		<< "=====================================\n\n";
//	}
//}
//
//void lgNum(const vector<int>& vec) {
//	if (vec.size() == 0) {
//		cout << "Unable to determine the largest number - list is empty\n"
//			<< "=====================================\n\n";
//	}
//	else {
//		int tmp{ vec.at(0) };
//		for (int v : vec) {
//			if (tmp < v)
//				tmp = v;
//		}
//		cout << "The largest number is " << tmp << endl
//			<< "=====================================\n\n";
//	}
//}