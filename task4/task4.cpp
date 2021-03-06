

#include <iostream>
#include <bitset>
using namespace std;

int foo2bytes2int(unsigned int a, unsigned char b)
{
	cout << a << ' ';
	a <<= 8;
	cout << a << '\n';
	return a += b;
}


int foo4bytes2int(unsigned char a, unsigned char b, unsigned char c, unsigned char d)
{
	unsigned char *data[] = { &b, &c, &d };
	size_t sz = sizeof(data) / sizeof(*data);
	unsigned int result = a;
	for (int i = 0; i < sz; ++i) result = foo2bytes2int(result, **(data + i));
	cout << endl;
	return result;
}

int getInt(char a, char b, char c, char d)
{
	union { char bytes[4]; int full; } temp = { a, b, c, d };
	return temp.full;
}

int main(int argc, char* argv[])
{
	unsigned char a(1), b(2), c(4), d(8);
	int abcd = foo4bytes2int(a, b, c, d);
	cout << int(a) << ' ';
	cout << bitset<32>(a) << endl;
	cout << int(b) << ' ';
	cout << bitset<32>(b) << endl;
	cout << int(c) << ' ';
	cout << bitset<32>(c) << endl;
	cout << int(d) << ' ';
	cout << bitset<32>(d) << endl;
	cout << abcd << ' ';
	cout << bitset<32>(abcd) << endl;


	abcd = getInt(a, b, c, d);
	cout << abcd << endl;
	cin.get();
	return 0;
}