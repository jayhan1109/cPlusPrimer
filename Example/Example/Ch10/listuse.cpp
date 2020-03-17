//#include <iostream>
//#include "list.h"
//
//void square(Item& num);
//
//int main()
//{
//	void (*func)(Item& item) = &square;
//
//	std::cout << std::boolalpha;
//	Item input;
//	List foo; 
//	std::cout << "Is initial list empty? " << foo.isEmpty();
//	std::cout << "\nIs initial list full? " << foo.isFull();
//	std::cout << "\nList contents: ";
//	foo.show();
//	std::cout << std::endl;
//	std::cout << "Enter 5 values: ";
//	for (int i = 0; i < 5; i++)
//	{
//		std::cin >> input;
//		foo.push(input);
//	}
//	std::cout << "Is initial list empty? " << foo.isEmpty();
//	std::cout << "\nIs initial list full? " << foo.isFull();
//	std::cout << "\nList contents: ";
//	foo.show();
//	std::cout << std::endl;
//	std::cout << "Values of all list items if squared: ";
//	foo.visit(func);
//	foo.show();
//	return 0;
//}
//
//void square(Item& num)
//{
//	num = num * num;
//}