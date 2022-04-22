
#pragma once
#include <iostream>
#include <string>

using namespace std;

class Point
{
private:
	double x, y;

public:
	Point();
	Point(double, double);
	Point(const Point&);
	~Point();

	double GetX() const { return x; }
	double GetY() const { return y; }
	void SetX(double value);
	void SetY(double value);

	Point& operator = (const Point&);
	operator string() const;

	friend Point operator + (Point&, Point&);
	friend Point operator - (Point&, Point&);

	friend ostream& operator << (ostream&, const Point);
	friend istream& operator >> (istream&, Point&);

	Point& operator ++();
	Point& operator --();
	Point operator ++(int);
	Point operator --(int);

	double distance();
};
