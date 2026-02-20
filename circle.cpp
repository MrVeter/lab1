#include <iostream>
#include <cmath>

using namespace std;

double lenc(double r);
double sqc(double r);
double sqcs(double r, double a);

int main()
{
	double r;
	cout << "Введите радиус (см): ";
	cin >> r;
	
	if (r <= 0.)
	{
		cout << "Неверные данные!\n";
		return 1;
	}
	
	cout << "Вычислить:\n1) длину окружности?\n2) площадь круга?\n3) площадь кругового сектора?\n";
	int opt;
	cin >> opt;

	switch (opt) 
	{
		case 1:
			cout << lenc(r) << " см\n";
		break;
		case 2:
			cout <<  sqc(r) << " см^2\n";
			break; 
		case 3:
			double a;
			cout << "Введите угол сектора (град.): ";
			cin >> a;
			if (a < 0. || a > 360.)
			{
				cout << "Неверные данные!\n";
				return 1;
			}
			cout << sqcs(r, a) << " см^2\n";
			break;
		default: cout << "Неверная опция!\n";
	}

	return 0;
}

double lenc(double r)
{
	return 2. * M_PI * r;
}

double sqc(double r)
{
	return  M_PI * r * r;
}

double sqcs(double r, double a)
{
	return (M_PI * r * r * a) / 360.;
}
