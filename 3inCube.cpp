#include <iostream>
using namespace std;

void sumzn() {
	int n, c = 0;
	cout << "¬ведите число\n -> ";
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
		cout << "ƒа, число 3 присутствует в квадрате числа " << c << " раз " << endl;
	}
	else {
		cout << "»звините, но число 3 не присутсвует в квдрате вашего числа..." << endl;
	}
}

//int main()
//{
//	setlocale(0, "rus");
//	string zaciklivanie;
//	while (true) {
//		system("cls");
//		sumzn();
//		cout << "¬ыполнить программу еще раз?\n (да - напишите что угодно)\n (нет - напишите \"0\")\n";
//		cin >> zaciklivanie;
//		if (zaciklivanie == "0") break;
//	}
//	return 0;
//}