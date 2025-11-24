#include <iostream>
#include "Rational.h"
using namespace std;

int main()
{
    /*Раціональна(нескоротна) дріб представляється парою цілих чисел(а, b), де а
    — чисельник, b - знаменник.Створити клас Rational для роботи з
    раціональними дробами.Обов'язково повинні бути реалізовані операції:
    додавання add(), (a, b) + (с, d) = (ad + bc, bd);
    ділення sub(), (a, b) - (с, d) = (ad - bc, bd);
    множення mul(), (a, b)* (с, d) = (ас, bd);
    ділення div(), (a, b) / (с, d) = (ad, bc);
    порівняння equal(), greate(), less().*/
    Rational Check;
    Check.Init(1, 2, 3, 4);
    Check.Read();
    Check.Add();
    Check.Sub();
    Check.Mul();
    Check.Div();
    Check.Equal();
    Check.Greter();
    Check.Display();

}
