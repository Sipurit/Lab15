#include<iostream>
using namespace std;

int a = 5;
char b = 'A';
char &c = b;
int *x = &a;
void *y = &b;
int **z = &x;

int main(){
	cout << a << " " << b << " " << c << " " << x << " " << y << " " << z << endl;
	cout << &a << " " << &b << " " << &c << " " << &x << " " << &y << " " << &z << endl;
	c = 'F';
	cout << a << " " << b << " " << c << " " << x << " " << y << " " << z << endl;
	*((char *)y) = 'W';
	cout << a << " " << b << " " << c << " " << x << " " << y << " " << z << endl;
	*x = 6;
	cout << a << " " << b << " " << c << " " << x << " " << y << " " << z << endl;
	**z = 7;
	cout << a << " " << b << " " << c << " " << x << " " << y << " " << z << endl;
	return 0;
}