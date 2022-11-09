#include<iostream>;//Бібліотека
using namespace std;

int main()
{
	int x, y, z;//Оголошення зміних типу int(цілі)
	cout << "input x:"; /*Виведення x на консоль*/
	cin >> x;/*Виведення в x на консоль*/
	cout << "input y:";
	cin >> y;
	z = x + y;
	cout << x << "+" << y << "=" << z << endl;
	return 0;
}
