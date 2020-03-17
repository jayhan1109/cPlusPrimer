//#include <iostream>
//#include <cstring>
//#include "Q1.h"
//
//void setgolf(golf& g, const char* name, int hc) {
//	strcpy(g.fullname, name);
//	g.handicap = hc;
//}
//
//int setgolf(golf& g) {
//	using std::cout;
//	using std::cin;
//	cout << "What is your name: ";
//	cin >> g.fullname;
//	if (strlen(g.fullname)) {
//		cout << "Handicap : ";
//		cin >> g.handicap;
//		return 1;
//	}
//	else
//		return 0;
//	
//	
//}
//
//void handicap(golf& g, int hc) {
//	g.handicap = hc;
//}
//
//void showgolf(const golf& g) {
//	std::cout << "Name : " << g.fullname << std::endl;
//	std::cout << "Handicap : " << g.handicap << std::endl;
//}