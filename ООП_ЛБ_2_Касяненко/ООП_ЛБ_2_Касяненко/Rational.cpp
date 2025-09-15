#include "Rational.h"
#include<iostream>
using namespace std;

Rational Rational::Init(double q, double w, double e, double r)
{
    Rational tmp;
    tmp.a = q;
    tmp.b = w;
    tmp.c = e;
    tmp.d = r;
    return tmp;
}

void Rational::Read()
{
    cout << "a = " << endl;
    cin >> a;
    cout << "b = " << endl;
    cin >> b;
    cout << "c = " << endl;
    cin >> c;
    cout << "d = " << endl;
    cin >> d;
}

void Rational::Display()
{
    cout << "Drib #1" << endl << a << endl << "---" << endl << b << endl << endl << "Drib #2" << endl << c << endl << "---" << endl << d << " " << endl; // âõ³äí³ äàíí³
    
    cout << endl << "Plus: " << endl << AddUp << endl << "---" << endl << AddDown << endl;

    cout << endl << "Minus: " << endl << SubUp << endl << "---" << endl << SubDown << endl;

    cout << endl << "Mnoj: " << endl << MulUp << endl << "---" << endl << MulDown << endl;

    cout << endl << "Dil: " << endl << DivUp << endl << "---" << endl << DivDown << endl;
}

void Rational::Add()
{
    AddUp = (a * d) + (b * c);
    AddDown = b * d;
}

void Rational::Sub()
{
    SubUp = (a * d) - (b * c);
    SubDown = (b * d);
}

void Rational::Mul()
{
    MulUp = (a * c);
    MulDown = (b * d);
}

void Rational::Div()
{
    DivUp = (a * d);
    DivDown = (b * c);
}

void Rational::Equal()
{
    if (a / b = c / d) {
        
    }
}
