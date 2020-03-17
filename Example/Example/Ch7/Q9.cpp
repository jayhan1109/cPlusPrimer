//#include <iostream>
//
//using namespace std;
//
//const int SLEN = 30;
//
//struct Student {
//	char fullname[SLEN];
//	char hobby[SLEN];
//	int ooplevel;
//};
//
//int getinfo(Student students[], int n) {
//	int count = 0;
//	int num;
//	for (int i = 0; i < n; i++) {
//		cout << "Student #" << i + 1 << endl;
//		cout << "Name: ";
//		cin.getline(students[i].fullname, SLEN);
//		if (strlen(students[i].fullname) == 0) {
//			break;
//		}
//		cout << "Hobby: ";
//		cin.getline(students[i].hobby, SLEN);
//		cout << "OOP Level: ";
//		cin >> students[i].ooplevel;
//		cin.get();
//		count++;
//	}
//	return count;
//}
//
//void display1(Student s) {
//	cout << "================================================\n\n\n";
//	cout << "Name: " << s.fullname << endl;
//	cout << "Hobby: " << s.hobby << endl;
//	cout << "OOP Level: " << s.ooplevel << endl;
//	cout << "================================================\n\n\n";
//}
//
//void display2(Student* s) {
//	cout << "================================================\n\n\n";
//	cout << "Name: " << s->fullname << endl;
//	cout << "Hobby: " << s->hobby << endl;
//	cout << "OOP Level: " << s->ooplevel << endl;
//	cout << "================================================\n\n\n";
//}
//
//void display3(Student* s, int num) {
//	cout << "================================================\n\n\n";
//	for (int i = 0; i < num; i++) {
//		cout << "Student #" << i+1 << endl;
//		cout << "Name: " << s[i].fullname << endl;
//		cout << "Hobby: " << s[i].hobby << endl;
//		cout << "OOP Level: " << s[i].ooplevel << endl<<endl;
//	}
//	cout << "================================================\n\n\n";
//}
//
//int main() {
//	cout << "Number of students : ";
//	int class_size;
//	cin >> class_size;
//	while (cin.get() != '\n')
//		continue;
//	Student* ptr_stu = new Student[class_size];
//	int entered = getinfo(ptr_stu, class_size);
//	for (int i = 0; i < entered; i++) {
//		display1(ptr_stu[i]);
//		display2(&ptr_stu[i]);
//	}
//	display3(ptr_stu, entered);
//	cout << "Exit Program...\n";
//	delete[] ptr_stu;
//	return 0;
//}