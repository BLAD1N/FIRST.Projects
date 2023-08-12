#include <iostream>
#include "MathLibrary.h"

using namespace std; 

int main()
{
    setlocale(LC_ALL, "ru"); 
    double a;
    int b;

    cout << "Введите два числа через Enter : "; 
    cin >> a; 
    cin >> b; 
   
    cout << "Сумма : " << MathLibrary::Arithmetic::Add(a, b) << endl;
    cout << "Разность : " << MathLibrary::Arithmetic::Subtract(a, b) << endl;
    cout << "Умножение : " << MathLibrary::Arithmetic::Multiply(a, b) << endl;
    cout << "Деление : " << MathLibrary::Arithmetic::Divide(a, b) << endl;

    return 0; 
}