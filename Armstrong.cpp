#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	setlocale(0, "");
	int n = 0;
	cout << "ЧИСЛА АРМСТРОНГА" << endl << endl;
	while (true)
	{
		cout << "Укажите n в пределах от 1 до 10 (0 для выхода)\n-> ";
		cin >> n;
		if ((n > 10) || (n < 0))
		{
			cout << "Введены некорректные данные" << endl;
		}
		else if (n == 0)
		{
			cout << "Выход" << endl;
			return 0;
		}
		else
		{
			vector<int> output;
			for (int num = pow(10, n - 1); num < pow(10, n); num++)
			{
				int number = num;
				int summ = 0;
				for (int i = 0; i < n; i++)
				{
					summ += pow(number % 10, n);
					number = number / 10;
				}
				if (num == summ)
				{
					output.push_back(num);
				}
			}
			if (output.size() != 0)
			{
				cout << "Для n = " << n << " числами Армстронга являются\n-> ";
				for (int i = 0; i < output.size(); i++)
				{
					cout << output[i] << " ";
				}
			}
			else
			{
				cout << "Для n = " << n << " нет числел Армстронга";
			}
			cout << endl;
		}
	}
}
