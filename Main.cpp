// не забываем подключить sfml или закоментировать строки 7-13, 370-390 и 752

#include <iostream>
#include <cmath>
#include <fstream>
#include <cstring>
#include "SFML/Graphics.hpp"


#pragma comment(lib,"sfml-graphics-d")
#pragma comment(lib, "sfml-window-d")
#pragma comment(lib, "sfml-system-d")
using namespace sf;

#define SCALE 20

using namespace std;

void one_one()
{
	cout << "Андрей";
}

void one_two()
{
	double x = 0;
	double y = 0;
	cin >> x;
	cin >> y;
	cout << "сумма: " << x + y << "\nразность: " << x - y << "\nпроизведение: " << x * y;
	if (y != 0)
	{
		cout << "\nчастное: " << x / y;
	}
}

void one_three()
{
	double x = 0;
	double y = 0;
	cin >> x;
	cin >> y;
	cout << 0 - (y / x);
}

void one_four()
{
	int a;
	int b;
	int c;
	int D;
	cin >> a;
	cin >> b;
	cin >> c;
	D = (b * b) + (4 * a * c);
	if (D < 0)
	{
		cout << "нет корней";
	}
	else if (D = 0)
	{
		double x1 = (-b) / (2 * a);
		cout << x1;
	}
	else
	{
		double x1 = (-b + sqrt(D)) / (2 * a);
		double x2 = (-b - sqrt(D)) / (2 * a);
		cout << x1 << "\n" << x2;
	}
}



void one_five()
{
	int lamp;
	int stor;
	int day;
	cin >> lamp;
	cin >> stor;
	cin >> day;
	if (lamp == 1 or (day == 1 and stor == 1))
	{
		cout << "светло";
	}
	else
	{
		cout << "темно";
	}
}

void two_one()
{
	double high = 0;
	double R = 0;
	double r = 0;
	double l = 0;

	cin >> high;
	cin >> R;
	cin >> r;
	cin >> l;
	cout << (high * (R * R + R * r + r * r) * 3.14) / 3 << "\n";
	cout << 3.14 * (R * R + (R + r) * l + (r * r));
}

void two_two()
{
	double x = 0;
	double a = 0;
	cin >> x;
	cin >> a;
	if (abs(x) < 1)
	{
		cout << a * log(x);
	}
	else
	{
		if (a - (x * x) > 0)
		{
			cout << (sqrt(a - (x * x)));
		}
	}
}

void two_three()
{
	double x;
	double y;
	double b;
	cin >> x;
	cin >> y;
	cin >> b;
	if (!((b - y) < 0) and (b - x) < 0)
	{
		cout << log(b - y) * sqrt(b - x);
	}
}

void two_four()
{
	int ass;
	cin >> ass;
	int pussi = ass + 10;
	while (ass < pussi)
	{
		ass++;
		cout << ass << "\n";
	}
}

void two_five()
{
	for (double x = -4; x <= 4; x += 0.5)
	{
		cout << ((x * x) - 2 * x + 2) / (x - 1) << "\n";
	}
}

void three_one()
{
	int n;
	double m, S, p, r, R;
	cin >> S;
	cin >> n;
	cin >> p;
	r = p / 100;
	R = pow((1 + r), n);
	m = (S * r * R) / (12 * R - 1);
}



void three_two()
{
	int n;
	double m = 0, S, p = 0, r, R, m0;
	cin >> S;
	cin >> n;
	cin >> m0;
	while (m0 > m)
	{
		r = p / 100;
		R = pow((1 + r), n);
		m = (S * r * R) / (12 * R - 1);
		if (m0 > m)
		{
			p += 0.001;
		}
		else
		{
			cout << "Процент: " << p;
		}
	}
}

void three_three()
{
	char buff[20];
	ofstream filewo1("filewo.txt");
	if (!filewo1.is_open())
	{
		cout << "Ошибка в чтении файла" << '\n';
	}
	filewo1 << "Запись в файле" << '\n';
	filewo1.close();
	ifstream filewo2("filewo.txt");
	filewo2.getline(buff, 20);
	cout << buff << '\n';
	filewo2.close();
}

void three_four()
{
	char buff[30];
	ofstream filexd("xddd.txt");
	if (!filexd.is_open())
	{
		cout << "Ошибка в чтении файла" << '\n';
	}
	filexd << "13drfgthy5ujkl,mn3jbh9fdsw2ed" << '\n';
	filexd.close();
	ifstream filexdd("xddd.txt");
	filexdd.getline(buff, 30);
	for (int i = 1; i <= 30; i++)
	{
		if (buff[i] >= 48 and buff[i] <= 57)
		{
			cout << buff[i];
		}
	}
	filexdd.close();
}

void three_five()
{
	char buff[30];
	char buff1;
	ofstream filexd("x123.txt", ios_base::out | ios_base::trunc);
	if (!filexd.is_open())
	{
		cout << "Ошибка в чтении файла" << '\n';
	}
	filexd << "plmozknijbuhvygctfxrdzesawqzz" << '\n';
	filexd.close();
	ifstream filexdd("x123.txt");
	filexdd.getline(buff, 30);
	for (int i = 1; i < 30; i++)
	{
		for (int I = 1; I < 29; I++)
		{
			if (buff[I] > buff[I + 1])
			{
				buff1 = buff[I];
				buff[I] = buff[I + 1];
				buff[I + 1] = buff1;

			}
		}
	}
	for (int g = 1; g <= 30; g++)
	{
		cout << buff[g];
	}
	filexdd.close();
}

void four_one()
{
	int buff1[10];
	ofstream file1("4isla.txt", ios_base::out | ios_base::trunc);
	file1 << "94 27 49 118 228 322 1337 1488 11 666";
	file1.close();
	ifstream file2("4isla.txt");
	for (int i = 0; i < 10; i++)
	{
		file2 >> buff1[i];
		cout << buff1[i] << endl;
	}
	cout << buff1[1] + buff1[2] + buff1[3] + buff1[4] + buff1[5] + buff1[6] + buff1[7] + buff1[8] + buff1[9] + buff1[0] << '\n';
}
int znak(int x)
{
	if (x > 0)
	{
		return 1;
	}
	else if (x == 0)
	{
		return 0;
	}
	else if (x < 0)
	{
		return -1;
	}
}
void four_two()
{
	setlocale(0, "");
	int x;
	cin >> x;
	cout << znak(x);
}
int tr()
{
	int osn;
	int h;
	cin >> osn;
	cin >> h;
	int ploshad = (osn * h) / 2;
	return ploshad;
}
int pr()
{
	int a;
	int b;
	cin >> a;
	cin >> b;
	int ploshad = a * b;
	return ploshad;
}
int circle()
{
	int R;
	cin >> R;
	int ploshad = 3.14 * pow(R, 2);
	return ploshad;
}
void four_three()
{
	cout << tr();
	cout << pr();
	cout << circle();
}
void four_four()
{
	char flag[24][13];
	for (int i = 0; i < 24; i++)
	{
		for (int g = 0; g < 13; g++)
		{
			if (g % 2 != 0)
			{
				flag[i][g] = '#';
			}
			else
			{
				flag[i][g] = ' ';
			}
		}
	}
	for (int i = 0; i < 8; i++)
	{
		for (int g = 0; g < 6; g++)
		{
			flag[i][g] = '*';
		}
	}
	for (int i = 0; i < 13; i++)
	{
		for (int g = 0; g < 24; g++)
		{
			cout << flag[g][i];
		}
		cout << endl;
	}
}

void four_five()
{
	RenderWindow window(VideoMode(400, 250), "Sinusoida");
	window.clear(Color::Black);
	VertexArray points(Points, 400);
	for (double x = 0; x < 400; x++)
	{
		points[x].position = Vector2f(x, (sin((x - 200) / SCALE))*SCALE + 125);
	}
	Event event;
	while (window.isOpen())
	{
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.draw(points);
		window.display();
	}
}

void four_six()
{
	string a;
	int buff;
	int b = 0, M, D, C, L, X, V, I;
	long int t = 0;
	cin >> a;
	M = 1000;
	D = 500;
	C = 100;
	L = 50;
	X = 10;
	V = 5;
	I = 1;
	t = a.size();
	if (a[t - 1] == 'I')
	{
		b += I;
	}
	else if (a[t - 1] == 'V')
	{
		b += V;
	}
	else if (a[t - 1] == 'X')
	{
		b += X;
	}
	else if (a[t - 1] == 'L')
	{
		b += L;
	}
	else if (a[t - 1] == 'C')
	{
		b += C;
	}
	else if (a[t - 1] == 'D')
	{
		b += D;
	}
	else if (a[t - 1] == 'M')
	{
		b += M;
	}
	buff = b;

	for (int i = t - 2; i >= 0; i--)
	{
		if (a[i] == 'I')
		{
			if (I >= buff)
			{
				b += I;
			}
			else
			{
				b -= I;
			}

		}
		else if (a[i] == 'V')
		{
			if (V >= buff)
			{
				b += V;
			}
			else
			{
				b -= V;
			}
		}
		else if (a[i] == 'X')
		{
			if (X >= buff)
			{
				b += X;
			}
			else
			{
				b -= X;
			}
		}
		else if (a[i] == 'L')
		{
			if (L >= buff)
			{
				b += L;
			}
			else
			{
				b -= L;
			}
		}
		else if (a[i] == 'C')
		{
			if (C >= buff)
			{
				b += C;
			}
			else
			{
				b -= C;
			}
		}
		else if (a[i] == 'D')
		{
			if (D >= buff)
			{
				b += D;
			}
			else
			{
				b -= D;
			}
		}
		else if (a[i] == 'M')
		{
			if (M >= buff)
			{

				b += M;

			}
			else
			{
				b -= M;
			}
		}
	}
	cout << b;
}
void four_seven()
{
	int podswitch = 0;
	cout << "подпункт: ";
	cin >> podswitch;
	if (podswitch == 1)
	{
		int inputI = 3;
		int m = 37;
		int c = 64;
		int s = 0;
		for (int i = 0; i < inputI; i++)
		{
			s = (m * s + i) % c;
		}
	}
	else if (podswitch == 2)
	{
		int inputI = 13849;
		int m = 25173;
		int c = 65537;
		int s = 0;
		for (int i = 0; i < inputI; i++)
		{
			s = (m * s + i) % c;
		}
	}
	else
	{
		cout << "неверный подпункт (1 или 2)!!!";
	}
}

void four_eight()
{
	int a[3][4] = {
	5,2,0,10,
	2,5,2,5,
	20,0,0,0 };

	double b[4][2] = {
	1.20,0.5,
	2.80,0.4,
	5.0,1.0,
	2.0,1.5
	};

	double c[3][2] = { 0,0,0,0,0,0 };
	

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			c[i][0] += a[i][j] * b[i][0];
			c[i][1] += a[i][j] * b[i][1];
		}
	}
	cout << "1)" << endl;
	int min = c[0][0] - c[0][1], max = c[0][0] - c[0][1];
	int minInd = 1, maxInd = 1;
	for (int i = 1; i < 3; i++)
	{
		if (min > c[i][0] - c[i][1])
		{
			minInd = i + 1;
		}
		if (max < c[i][0] - c[i][1])
		{
			maxInd = i + 1;
		}
	}

	

	cout << "продовец с минимальной выручкой: " << minInd << endl << "продовец с максимальной выручкой: " << maxInd << endl << "2)" << endl;
	min = c[0][1];
	max = c[0][1];
	minInd = 1;
	maxInd = 1;
	for (int i = 1; i < 3; i++)
	{
		if (min > c[i][1])
		{
			minInd = i + 1;
		}
		if (max < c[i][1])
		{
			maxInd = i + 1;
		}
	}


	cout << "продавец с минимальными комиссионными: " << minInd << endl << "продавец с максимальными комиссионными: " << maxInd << endl << "3)" << endl;
	int summ = 0;
	for (int i = 0; i < 3; i++)
	{
		summ += c[i][0] - c[i][1];
	}
	cout << "общая выручка за проданные товары: " << summ << endl << "4)" << endl;
	summ = 0;
	for (int i = 0; i < 3; i++)
	{
		summ += c[i][1];
	}
	cout << "общие комиссионные: " << summ << endl << "5)" << endl;
	summ = 0;
	for (int i = 0; i < 3; i++)
	{
		summ += c[i][0];
	}
	cout << "сумма всех прошедшик денег: " << summ << endl;
}

char simvols[32] = { '0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v' };
string toSis(int num, int Sis)
{
	string resStr = "";
	if (num < Sis)
	{
		resStr += simvols[num];
	}
	else
	{
		resStr = toSis(num / Sis, Sis) + simvols[num % Sis];
	}
	return resStr;
}

void four_9()
{
	string num;
	string result;
	int num10 = 0;
	int numSis = 0;
	int resSis;
	cout << "число: ";
	cin >> num;
	cout << "система счисления: ";
	cin >> numSis;
	cout << "новая СС: ";
	cin >> resSis;

	for (int i = num.size() - 1; i >= 0; i--)
	{
		for (int numSim = 0; numSim < numSis; numSim++)
		{
			
			if (num[i] == simvols[numSim])
			{
				num10 += numSim * pow(numSis,(num.size() - i)-1);
			}
		}
	}



	result = toSis(num10, resSis);
	cout << "результат: " << result;
}

/*------------------------------------------------------------------------------------------*/
int main()
{
	setlocale(0, "");
	int switcher = 0;
	while (true)
	{
		cout << "\nзадача: ";
		cin >> switcher;
		switch (switcher)
		{
		case 1:
			one_one();
			break;
		case 2:
			one_two();
			break;
		case 3:
			one_three();
			break;
		case 4:
			one_four();
			break;
		case 5:
			one_five();
			break;
		case 6:
			two_one();
			break;
		case 7:
			two_two();
			break;
		case 8:
			two_three();
			break;
		case 9:
			two_four();
			break;
		case 10:
			two_five();
			break;
		case 11:
			three_one();
			break;
		case 12:
			three_two();
			break;
		case 13:
			three_three();
			break;
		case 14:
			three_four();
			break;
		case 15:
			three_five();
			break;
		case 16:
			four_one();
			break;
		case 17:
			four_two();
			break;
		case 18:
			four_three();
			break;
		case 19:
			four_four();
			break;
		case 20:
			//four_five();
			break;
		case 21:
			four_six();
			break;
		case 22:
			four_seven();
			break;
		case 23:
			four_eight();
			break;
		case 24:
			four_9();
			break;
		}
	}
}
