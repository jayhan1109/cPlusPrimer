//#include <cmath>
//#include "vect.h"
//using std::sqrt;
//using std::sin;
//using std::cos;
//using std::atan;
//using std::atan2;
//using std::cout;
//
//namespace VECTOR {
//	// 1 Radian to Degree
//	const double Rad_to_deg = 45.0 / atan(1.0);
//
//	void Vector::set_mag() {
//		mag = sqrt(x * x + y * y);
//	}
//	void Vector::set_ang() {
//		if (x == 0.0 && y == 0.0)
//			ang = 0.0;
//		else
//			ang = atan2(y, x);
//	}
//	void Vector::set_x() {
//		x = mag * cos(ang);
//	}
//	void Vector::set_y() {
//		y = mag * sin(ang);
//	}
//	Vector::Vector() {
//		x = y = mag = ang = 0.0;
//		mode = RECT;
//	}
//	Vector::Vector(double n1, double n2, int m = RECT) {
//		mode = m;
//		if (m == RECT) {
//			x = n1;
//			y = n2;
//			set_mag();
//			set_ang();
//		}
//		else if (m == POL) {
//			mag = n1;
//			ang = n2 / Rad_to_deg;
//			set_x();
//			set_y();
//		}
//		else {
//			cout<<""
//		}
//	}
//	void Vector::reset(double n1, double n2, int m = RECT);
//	Vector::~Vector();
//	double Vector::xval() const { return x; }
//	double Vector::yval() const { return y; }
//	double Vector::magval() const { return mag; }
//	double Vector::angval() const { return ang; }
//	void Vector::polar_mode();
//	void Vector::rect_mode();
//
//	// operator overloading
//	Vector Vector::operator+(const Vector& b) const;
//	Vector Vector::operator-(const Vector& b) const;
//	Vector Vector::operator-() const;
//	Vector Vector::operator*(double n) const;
//
//	// friend function
//	friend Vector operator*(double n, const Vector& a);
//	friend std::ostream& operator<<(std::ostream& os, const Vector& v);
//}