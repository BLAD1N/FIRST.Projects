#include <iostream>
#include "MathLibrary.h"

using namespace std; 

int main() 
{
	setlocale(LC_ALL, "ru"); 

	fibonacci_init(1, 1);
	do 
	{
		cout << fibonacci_index() << ": "
			<< fibonacci_current() << endl;
	} 
	
	while (fibonacci_next());

	cout << fibonacci_index() + 1 << " Значения последовательности Фибоначчи вписываются в "
		"unsigned 64-bit integer." << endl;  
}