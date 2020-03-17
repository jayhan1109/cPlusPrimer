//#include <iostream>
//#include "stock00.h"
//
//const int STKS = 4;
//
//int main() {
//	/*{
//		using std::cout;
//		cout << "Use constructor to create objects.\n";
//		Stock stock1("NanoSmart", 12, 20.0);
//		stock1.show();
//		Stock stock2 = Stock("Boffo Objects", 2, 2.0);
//		stock2.show();
//
//		cout << "Replace stock2 to stock1.\n";
//		stock2 = stock1;
//		cout << "Print stock1 and stock2.\n";
//		stock1.show();
//		stock2.show();
//
//		cout << "Use constructor to renew objects.\n";
//		stock1 = Stock("Nifty Foods", 10, 50.0);
//		cout << "Renewed stock1:\n";
//		stock1.show();
//		cout << "Exit Program.\n";
//	}*/
//
//	Stock stocks[STKS] = {
//		Stock("NanoSmart",12,20.0),
//		Stock("Boffo Objects", 200, 2.0),
//		Stock("Monolithic Obelisks", 130, 3.25),
//		Stock("Fleep Enterprises", 60, 6.5)
//	};
//	std::cout << "Stock Lists:\n";
//	int st;
//	for (st = 0; st < STKS; st++) {
//		stocks[st].show();
//	}
//	const Stock* top = &stocks[0];
//	for (st = 1; st < STKS; st++)
//		top = &(top->topval(stocks[st]));
//
//	std::cout << "\nHighest stock value: \n";
//	top->show();
//	return 0;
//}