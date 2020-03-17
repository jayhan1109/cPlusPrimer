//#include "Q6.h"
//
//Move::Move(double a, double b) {
//	x = a;
//	y = b;
//}
//
//void Move::showmove() const {
//	std::cout << "x: " << x << ", y: " << y << std::endl;
//}
//
//Move Move::add(const Move& m) const {
//	Move move = m;
//	move.x = m.x + this->x;
//	move.y = m.y + this->y;
//
//	return move;
//}
//
//void Move::reset(double a, double b) {
//	this->x = a;
//	this->y = b;
//}