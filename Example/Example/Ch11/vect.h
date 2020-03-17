//#pragma once
//#include <iostream>
//
//namespace VECTOR {
//	class Vector {
//	private:
//		static const int RECT = 0;
//		static const int POL = 1;
//		int mode;
//		double x;
//		double y;
//		double mag;
//		double ang;
//		void set_mag();
//		void set_ang();
//		void set_x();
//		void set_y();
//	public:
//		Vector();
//		Vector(double n1, double n2, int m=RECT);
//		void reset(double n1, double n2, int m = RECT);
//		~Vector();
//		double xval() const { return x; }
//		double yval() const { return y; }
//		double magval() const { return mag; }
//		double angval() const { return ang; }
//		void polar_mode();
//		void rect_mode();
//
//		// operator overloading
//		Vector operator+(const Vector& b) const;
//		Vector operator-(const Vector& b) const;
//		Vector operator-() const;
//		Vector operator*(double n) const;
//
//		// friend function
//		friend Vector operator*(double n, const Vector& a);
//		friend std::ostream& operator<<(std::ostream& os, const Vector& v);
//	};
//}