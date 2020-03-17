//#include <iostream>
//#include "stock00.h"
//
//Stock::Stock() {
//	std::cout << "Default constructor called"<<std::endl;
//	company = "No Name";
//	shares = 0;
//	share_val = 0.0;
//	total_val = 0.0;
//}
//
//Stock::Stock(const std::string& co, long n, double pr) {
//	std::cout << "Constructor called which uses " << co << std::endl;
//	company = co;
//	if (n < 0) {
//		std::cout << "Since stock can't be negative, " << company << " shares are 0.";
//		shares = 0;
//	}
//	else {
//		shares = n;
//	}
//	share_val = pr;
//	set_tot();
//}
//
//Stock::~Stock() {
//	std::cout << "GoodBye, " << company << "!\n";
//}
//
//void Stock::buy(long num, double price) {
//	if (num < 0) {
//		std::cout << "we can't not buy negative stocks, the process terminated.\n";
//	}
//	else {
//		shares += num;
//		share_val = price;
//		set_tot();
//	}
//}
//
//void Stock::sell(long num, double price) {
//	using std::cout;
//	if (num < 0) {
//		cout << "we can't not sell negative stocks, the process terminated.\n";
//	}
//	else if (num > shares) {
//		cout << "we can't not sell stocks more than you have.\n";
//	}
//	else {
//		shares -= num;
//		share_val = price;
//		set_tot();
//	}
//}
//
//void Stock::update(double price) {
//	share_val = price;
//	set_tot();
//}
//
//void Stock::show() const{
//	using std::cout;
//	using std::ios_base;
//
//	// set format to #.###
//	ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
//	std::streamsize prec = cout.precision(3);
//
//	cout << "Company: " << company << " Stocks: " << shares << std::endl;
//	cout << " price: $" << share_val;
//	
//	// set format to #.##
//	cout.precision(2);
//	cout << " total: $" << total_val << std::endl;
//
//	// set format to original
//	cout.setf(orig, ios_base::floatfield);
//	cout.precision(prec);
//}
//
//const Stock& Stock::topval(const Stock& s) const {
//	if (s.total_val > total_val) {
//		return s;
//	}
//	else {
//		return *this;
//	}
//}