#include <iostream>
using namespace std;

int getValue1()
{
	while (true)
	{
		cout << "Введите целое знаковое число: ";
		register int a;
		cin >> a;

		if (cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
			cout << "Число введено неверно!\n";
		}
		else
		{
			cin.ignore(32767, '\n');
			return a;
		}
	}
}

int getValue2()
{
	while (true)
	{
		cout << "Введите целое число, обозначающее степень 2: ";
		register int b;
		cin >> b;
		if (b < 0)
		{
			cout << "Число введено неверно!\n";
		}
		else
		{
			if (cin.fail())
			{
				cin.clear();
				cin.ignore(32767, '\n');
				cout << "Число введено неверно!\n";
			}
			else
			{
				cin.ignore(32767, '\n');
				return b;
			}
		}

	}
}

int division(int number, int degree)
{
	if (number < 0)
	{
		number = -number;
		return -(number >> degree);
	}
	else
	{
		return number >> degree;
	}
}

int main()
{
	setlocale(LC_ALL, "Rus");
	
	register int number = getValue1();
	register int degree = getValue2();

	cout << "Результат вычислений: " << division(number, degree) << endl;

}