#include <iostream>
#include <vector>
using namespace std;

void ex1() {
	int A, B, C;

	cout << "Введите данные для экономической формулы\n -> ";
	cin >> A;
	cout << "\n -> ";
	cin >> B;
	cout << "\n -> ";
	cin >> C;

	cout << "\n -> " << (C - A) / B << "\nЭто максимальное колличество лопастей спиннера";
}

void ex2() {
	int M, L3, L4;

	cout << "Введите количество лопастей для спиннеров\n -> ";
	cin >> M;
	L4 = M % 3;
	L3 = (M - 4 * L4) / 3;
	if (L3 > 0) {
		cout << " Количество 3-ёх лопастных\n -> " << L3 << " \n Количество 4-ёх лопастных\n -> " << L4 << endl;
	}
	else cout << " Количество 3-ёх лопастных\n -> " << 0 << " \n Количество 4-ёх лопастных\n -> " << 0 << endl;

}

void ex3() {
	int N, M, k;
	cout << "Введите количество строк и столбцов последовательно\n -> ";
	cin >> N >> M;
	k = (N + 1) * (M + 1) * N * M / 4;

	cout << " Количество максимально возможных прямоугольников\n -> " << k << endl;
}

int checkex4(int freePL) {

	if (freePL <= 36) return ((freePL - 1) / 4);

	else return (8 - (freePL - 37) / 2);

}

int maxex4(int kupe[9] = { 0 }) {
	int max = 0;
	for (int i = 0; i < 9; i++) {
		if (kupe[i] == 6) {
			int BuffMax = 1;
			while (kupe[i + 1] == 6) {
				i++;
				BuffMax++;
			}
			if (BuffMax > max) {
				max = BuffMax;
			}
		}
	}
	return max;
}



void ex4() {

	int kol = 0, place, max = 0, emptykupe = 0;
	int kupe[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, };
	vector <int> freePL;
	cout << "Сколько свободных мест?\n -> ";
	cin >> kol;

	if (kol < 6) cout << "Ни одного купе не будет свободно.\n Причина: мест меньше 6." << endl;
	else {

		cout << endl << "Ведите свободные места\n";

		for (int i = 0; i < kol; i++) {
			cout << "-> ";
			cin >> place;
			freePL.push_back(place);
		}

		for (int i = 0; i < freePL.size(); i++) {
			kupe[checkex4(freePL[i])]++;

		}
		cout << "Свободные места в купе (схема): \n";
		for (int i = 0; i < 9; i++) {
			cout << kupe[i] << " ";
		}


		cout << endl << "Свободных купе подряд: \n -> " << maxex4(kupe) << endl;
	}
}

void ex5() {
	setlocale(LC_ALL, "Russian");
	int n, k;
	cout << "Введите количество свободных мест: ";
	cin >> n;
	cout << "Введите количество школьников: ";
	cin >> k;
	while (k != 1) {
		n = (n - k % 2) / 2;
		k /= 2;
	}
	cout << "Остаток мест слева/справа \n -> " << (n - 1) / 2 << " \n -> " << n / 2 << endl;
}
//int main() {
//	int input = 1;
//	setlocale(0, "rus");
//	cout << "Выберите программу(1-5, 0 для выхода)";
//	while (input != 0)
//	{
//		cin >> input;
//		switch (input)
//		{
//		case 1:
//			ex1();
//		case 2:
//			ex2();
//		case 3:
//			ex3();
//		case 4:
//			ex4();
//		case 5:
//			ex5();
//		}
//	}
//	system("pause");
//	return 0;
//}