#include <iostream>
#include <vector>
using namespace std;


void main()
{
	setlocale(0,"");
	int n;
	vector<int> arr;
	cout << "������� ������ �������:\n";
	cin >> n;
	cout << "������� �������� ������:\n";
	for (int i=0;i<n;i++)
	{
		int a;
		cin >> a;
		arr.push_back(a);
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}
	cout << "��������������� ������:\n";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << ' ';
	}
}
