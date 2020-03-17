//#include <iostream>
//#include <cstring>
//#pragma warning(disable:4996)
//char* getFirstName();
//char* getLastName();
//using namespace std;
//
//int main() {
//	char* firstname = getFirstName();
//	char* lastname = getLastName();
//
//	cout << "============================" << endl;
//	cout << "Your Name: " << lastname << ", " << firstname << endl;
//
//	delete[] firstname;
//	delete[] lastname;
//}
//
//char* getFirstName() {
//	char firstname[80];
//	cout << "First Name: ";
//	cin.getline(firstname,80);
//
//	char* temp = new char[strlen(firstname) + 1];
//	strcpy(temp, firstname);
//	return temp;
//}
//
//char* getLastName() {
//	char lastname[80];
//	cout << "Last Name: ";
//	cin >> lastname;
//
//	char* temp = new char[strlen(lastname) + 1];
//	strcpy(temp, lastname);
//	return temp;
//}