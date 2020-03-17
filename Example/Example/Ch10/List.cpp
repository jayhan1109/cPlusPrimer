//#include "List.h"
//
//List::List() {
//	m_top = 0;
//}
//
//bool List::push(const Item& item) {
//	if (m_top < MAX) {
//		m_list[m_top++] = item;
//		return true;
//	}
//	else {
//		false;
//	}
//}
//bool List::pop(Item& item) {
//	if (m_top > 0) {
//		item = m_list[--m_top];
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//bool List::isFull() const {
//	return m_top == MAX;
//}
//bool List::isEmpty() const {
//	return m_top == 0;
//}
//void List::show() const {
//	std::cout << "List[ ";
//	for (Item i: m_list) {
//		std::cout << i << " ";
//	}
//	std::cout << "]\n";
//}
//void List::visit(void (*pf)(Item& item)) {
//	for (Item& i : m_list) {
//		pf(i);
//	}
//}
//
