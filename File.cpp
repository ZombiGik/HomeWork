#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Rus");
	ifstream file_to_read;
	string path;
	string text;
	map<char, int> symbols;
	map<char, int>::iterator symbol;
	char vowel_letters[20] = { 'а','А','о','О','у','У','э','Э','ы','Ы','я','Я','ё','Ё','е','Е','ю','Ю','и','И' };
	cout << "Введите путь к файлу: ";
	cin >> path;
	file_to_read.open(path);
	if (!file_to_read.is_open())
	{
		cout << "ERROR: Ошибка чтения файла!";
		return 0;
	}
	else
	{
		cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
		while (!file_to_read.eof())
		{
			getline(file_to_read, text);
			cout << text << endl;
			for (int i = 0; i < text.size(); i++)
			{
				symbols[text[i]] += 1;
			}
		}
		cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
		cout << "ASCII\tСимвол\tКоличество" << endl;
		for (symbol = symbols.begin(); symbol != symbols.end(); symbol++)
		{
			cout << (int)symbol->first << "\t" << symbol->first << "\t" << symbol->second << endl;
		}
		cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
		int Max = 0;
		char CMax;
		for (symbol = symbols.begin(); symbol != symbols.end(); symbol++)
		{
			for (int i = 0; i < 20; i++)
			{
				if (symbol->first == vowel_letters[i])
				{
					cout << "ASCII\tСимвол\tКоличество" << endl;
					cout << (int)symbol->first << "\t" << symbol->first << "\t" << symbol->second << endl;
					if (symbol->second > Max)
					{
						Max = symbol->second;
						CMax = symbol->first;
					}
				}
			}
		}
		cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
		cout << "Буква '" << CMax << "' встреалась " << Max << " раз";
	}
	return 0;
}
