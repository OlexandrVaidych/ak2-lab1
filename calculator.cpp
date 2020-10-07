#include "calculator.h"

int Calculator::Add (double a, double b)
{
    return a + b;
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b;
}

int Calculator::Div1 (double a, double b)
{
    return a / b;
}

int Calculator::Div2 (double a, double b)
{
    return b / a;
}

int Calculator::Square (double a)
{
    return a**2;
}


