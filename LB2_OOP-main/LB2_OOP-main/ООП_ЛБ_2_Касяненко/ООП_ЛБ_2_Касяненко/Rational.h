#pragma once
class Rational
{
private:
	double a, b, c, d, AddUp, AddDown, SubUp, SubDown, MulUp, MulDown, DivUp, DivDown;
	int check;
public:
	Rational Init(double q, double w, double e, double r);
	void Read();
	void Display();
	void Add();
	void Sub();
	void Mul();
	void Div();
	void Equal();
	bool Greter();
	void Less();
};
