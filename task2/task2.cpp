
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int num2 = 134480385;
	unsigned char* ptr2 = (unsigned char*)&num2;
	cout << (int)*ptr2 << endl
		<< (int) *(ptr2 + 1) << endl
		<< (int) *(ptr2 + 2) << endl
		<< (int) *(ptr2 + 3) << endl;
}
// на экране появятся цифры 1,2,4,8