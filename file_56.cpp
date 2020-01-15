#include <iostream>
#include <vector>

using namespace std;

int main() {
	setlocale(0, "rus");

	int n, m, a, sum = 0;

	cout << "Введите размерность массива \n -> ";
	cin >> n >> m;
	vector <int> ans(m);
	cout << "приступим к заполнению массива, введите числа в строку\n -> ";


	vector < vector<int> > v;

	for (int i = 0; i < n; ++i) {
		vector<int> row;
		for (int j = 0; j < m; ++j) {
			int item;
			cin >> item;
			row.push_back(item);
		}
		v.push_back(row);
	}


	cout << "Массив ->" << endl;
	for (int i = 0; i < v.size(); ++i) {
		for (int j = 0; j < v[i].size(); ++j)
			cout << v[i][j] << '\t';
		cout << endl;
	}



	for (int i = 0; i < m; i++)
	{
		sum = 0;
		for (int j = 0; j < n; j++)
		{
			sum = sum + v[j][i];
		}
		ans[i] = sum;
	}
	for (int i = 0; i < m; i++) 
	{
		cout << " Сумма " << i + 1 << " столбца = " << ans[i] << endl;
	}


	system("pause");
	return 0;
}
