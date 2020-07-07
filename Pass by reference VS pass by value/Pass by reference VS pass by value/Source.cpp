#include <iostream>

using namespace std;

void Func(int* y);
int main() {

	cout << "Pointers - Pass the reference vs pass the value\n" << endl;

	int x = 5;

	Func(&x);//output 15

	cout << "The value of x is: " << x << endl;

	return 0;
}

void Func(int* y)// if we change the * to & it should be the same value
{
	*y = 15;

	cout << "The value of y is: " << *y << endl;

}