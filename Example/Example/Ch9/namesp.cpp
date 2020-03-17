//#include <iostream>
//#include "namesp.h"
//
//namespace pers {
//	using std::cout;
//	using std::cin;
//	
//	void getPerson(Person& rp) {
//		cout << "Input first name: ";
//		cin >> rp.fname;
//		cout << "Input last name: ";
//		cin >> rp.lname;
//	}
//
//	void showPerson(const Person& rp) {
//		cout << rp.lname << ", " << rp.fname;
//	}
//}
//
//namespace debts {
//	void getDebt(Debt& rd) {
//		getPerson(rd.name);
//		std::cout << "Debt: ";
//		std::cin >> rd.amount;
//	}
//
//	void showDebt(const Debt& rd) {
//		showPerson(rd.name);
//		std::cout << " : $" << rd.amount << std::endl;
//	}
//
//	double sumDebts(const Debt ar[], int n) {
//		double total = 0;
//		for (int i = 0; i < n; i++) {
//			total += ar[i].amount;
//			return total;
//		}
//	}
//}