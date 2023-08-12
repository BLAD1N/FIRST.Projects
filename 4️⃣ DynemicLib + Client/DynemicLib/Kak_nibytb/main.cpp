#include <iostream>
#include <Windows.h>
using namespace std;
int main() 
{
	setlocale(LC_ALL, "ru"); 
	HINSTANCE load;
	load = LoadLibrary(L"C:\\Users\\Vlad_\\source\\repos\\D_Lib\\x64\\Debug\\D_Lib.dll");
	typedef int (*sum) (int, int);
	typedef int (*min) (int, int);
	typedef int (*mult) (int, int);
	typedef double (*div) (int, int);
	sum Sum;
	min Min;
	mult Mult;
	div Div;
	Sum = (sum)GetProcAddress(load, "Sum");
	Min = (min)GetProcAddress(load, "Min");
	Mult = (mult)GetProcAddress(load, "Mult");
	Div = (div)GetProcAddress(load, "Div");
	int a;
	int b;
	cout << "Ввеидте 2 числа через Enter : "; 
	cin >> a; 
	cin >> b; 
	std::cout << "Сумма : " << Sum(a, b) << std::endl;
	std::cout << "Разность : " << Min(a, b) << std::endl;
	std::cout << Mult(a, b) << std::endl;
	std::cout << Div(a, b) << std::endl;

	FreeLibrary(load);
}