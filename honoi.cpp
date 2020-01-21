#include <iostream>
using namespace std;

int hanoi(int disk, int start, int end, int mid)		
{
	int a = 0;
	if (disk != 0)
	{
		
		a += hanoi(disk - 1, start, mid, end);
		cout << start << " -> " << end << endl;
		a += hanoi(disk - 1, mid, end, start);
		a++;
	}
	return a;
}

//int main()
//{
//	setlocale(LC_ALL, "rus");
//	int a = 1, b = 3, c = 2, kolvo_disk;
//	cout << "Количество дисков:" << endl;
//	cin >> kolvo_disk;
//	cout << "Количество операций: " << hanoi(kolvo_disk, a, b, c) << endl;
//	return 0;
//}