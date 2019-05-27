#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;


int main ()
{
	// giai phuong trinh bac 2: ax^2+bx+c=0
	float a, b, c, d, x1, x2;
	cout << "Nhap vao phuong trinh ax^2+bx+c=0:" << endl;
	cin>> a >> b >> c;
	if (a == 0)
	{
		if (b == 0)
			cout << "ngu a, a va b khong the cung bang 0";
		else
		{
			d = -c / b;
			cout << "Phuong trinh co 1 nghiem x= " << d;
		}
	}
	else
	{
		d = b * b - 4 * a*c;
		if (d > 0)
		{
			x1 = (-b + sqrt(d)) / (2 * a);
			x2 = (-b - sqrt(d)) / (2 * a);
		}
		cout << "Phuong trinh co 2 nghiem x1=" << x1 << " x2=" << x2 << endl;
	}
	system("pause");
	return 0;
	//test git 1
	//test git 3000
	kjhkjhkj
}