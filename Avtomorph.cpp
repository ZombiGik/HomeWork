#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	setlocale(0, "");
	int n = 0;
	cout << "АВТОМОРФНЫЕ ЧИСЛА" << endl << endl;
	while (true)
	{
		int n, m;
		cout << "Введите диапазон для поиска автоморфных чисел (\"0 0\" для выхода) \n-> ";
		cin >> n;
		cin >> m;
		if (m == n && m == 0)
		{
			cout << "Выход" << endl;
			return 0;
		}
		else if (n > m)
		{
			cout << "Диапазон указан неверно!!!\nПервое число должно быть меньше второго" << endl;
		}
		else
		{
			vector<int> output;
			for (n ;n <=m;n++)
			{
				int num = pow(n,2);
				int x = 10;
				if (num <= m)
				{
					do
					{
						if (num % x == n)
						{
							output.push_back(n);
						}
						x = x * 10;
					} while (num % x != num);
				}
			}
			if (output.size() == 0)
			{
				cout << "Не найдено автоморфных чисел" << endl;
			}
			else
			{
				cout << "Найдено " << output.size() << " автоморфных чисел" << endl;
				for (int i = 0; i < output.size(); i++)
				{
					cout << output[i] << ", " << pow(output[i], 2) << "; ";
				}
				cout << endl;
			}
		}
	}
}
