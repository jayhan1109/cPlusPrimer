//#include <iostream>
//
//int main() {
//
//	using std::cout;
//	using std::cin;
//	using std::endl;
//
//	const int price_small_room{ 25 };
//	const int price_large_room{ 35 };
//	const double tax_rate{ 0.06 };
//	const int valid_days{ 30 };
//
//	int small_rooms{ 0 };
//	int large_rooms{ 0 };
//	int total_cost{ 0 };
//	double tax{ 0 };
//	
//	cout << "Number of small rooms: ";
//	cin >> small_rooms;
//	cout << "Number of large rooms: ";
//	cin >> large_rooms;
//	cout << "Price per small rooms: $" << price_small_room << endl;
//	cout << "Price per large rooms: $" << price_large_room << endl;
//	total_cost = small_rooms * price_small_room + large_rooms * price_large_room;
//	cout << "Cost: " << total_cost << endl;
//	tax = total_cost * tax_rate;
//	cout << "Tax: $" << tax<<endl;
//	cout << "=====================================" << endl;
//	cout << "Total estimate: $" << total_cost + tax << endl;
//	cout << "This estimate is valid for " << valid_days << " days";
//
//	return 0;
//}