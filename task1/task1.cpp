

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int num = 15;
	int *ptr = &num;
	num = num + 10;  
    cout << *ptr << endl;//вывелось 25 т.к. ptr работает с адресом num , а не с самис его значением. После того, как num изменился- ptr изменился автоматически
	(*ptr)++; // то же самое ,что и в предыдущей строке, только при этом мы значение ptr увеличиваем на 1

    cout << num;

}

//На экран вывелись числа 25 и 26. 