#include <iostream>
using namespace std;

void sumzn() {
	int n, c = 0;
	cout << "������� �����\n -> ";
	cin >> n;
	if (((n * n) % 10) == 3) {
		c++;
	}
	n = n * n;
	while (n != 0) {
		if (n % 10 == 3) {
			c++;
		}
		n = n / 10;
	}
	if (c > 0) {
		cout << "��, ����� 3 ������������ � �������� ����� " << c << " ��� " << endl;
	}
	else {
		cout << "��������, �� ����� 3 �� ����������� � ������� ������ �����..." << endl;
	}
}

//int main()
//{
//	setlocale(0, "rus");
//	string zaciklivanie;
//	while (true) {
//		system("cls");
//		sumzn();
//		cout << "��������� ��������� ��� ���?\n (�� - �������� ��� ������)\n (��� - �������� \"0\")\n";
//		cin >> zaciklivanie;
//		if (zaciklivanie == "0") break;
//	}
//	return 0;
//}