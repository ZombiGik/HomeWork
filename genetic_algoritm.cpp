	#include <iostream>
	#include <cstdlib>
	#include <ctime>

	#define generations 3
	#define individuals 10

	#define random_stats 0
	#define max_start_stats 100

	#define mutation 30

	struct animal
	{
		int father = 0;
		int mother = 0;
		int health;
		int health_mut;
		int strength;
		int strenght_mut;
		int speed;
		int speed_mut;
	};

	using namespace std;
	int main()
	{
		srand(time(0));
		setlocale(0, "");
		animal population[generations][individuals];
		for (int j = 0; j < individuals; j++)
		{
			if (random_stats)
			{
				population[generations - 1][j].health = rand() % (max_start_stats + 1);
				population[generations - 1][j].strength = rand() % (max_start_stats + 1);
				population[generations - 1][j].speed = rand() % (max_start_stats + 1);
			}
			else
			{
				population[generations - 1][j].health = max_start_stats;
				population[generations - 1][j].strength = max_start_stats;
				population[generations - 1][j].speed = max_start_stats;
			}
			cout << "\n-------------------------------------" << endl;
			if (population[generations - 1][j].health <= 0)
			{
				population[generations - 1][j].health = 0;
				cout << "СУЩЕСТВО МЕРТВО!!!" << endl;
			}
			if (population[generations - 1][j].strength <= 0)
			{
				population[generations - 1][j].strength = 0;
				cout << "СУЩЕСТВО БЕЗСИЛЬНО!!!" << endl;
			}
			if (population[generations - 1][j].speed <= 0)
			{
				population[generations - 1][j].speed = 0;
				cout << "СУЩЕСТВО ОБЕЗДВИЖЕНО!!!" << endl;
			}
			cout << "\nИНДЕКС: " << j << "\n\nздоровье: " << population[generations - 1][j].health << "\nсила: " << population[generations - 1][j].strength << "\nскорость: " << population[generations - 1][j].speed << endl;
		}
		cout << "==========================================================================" << endl;
		int skip = 0;
		int child = 1;
		int dead;
		int middle_of_mutation = 0;
		int middle_of_stat = 0;
		int ind_of_max = 0;
		int mid_of_max = 0;
		int ind_of_min = 0;
		int mid_of_min = 0;
		int mid_of_all = 0;
		while (true)
		{
			mid_of_all = 0;
			for (int i = 0; i < generations; i++)
			{
				dead = 0;
				mid_of_all = 0;
				if (abs(skip) == 0)
				{
					cout << "Сколько пройти поколений: ";
					cin >> skip;
				}
				if (skip != 0)
				{
					skip = abs(skip) - 1;
				}
				for (int j = 0; j < individuals; j++)
				{
					population[i][j].father = rand() % individuals;
					population[i][j].mother = rand() % individuals;
					population[i][j].health_mut = (rand() % (mutation * 2 + 1)) - mutation;
					population[i][j].strenght_mut = (rand() % (mutation * 2 + 1)) - mutation;
					population[i][j].speed_mut = (rand() % (mutation * 2 + 1)) - mutation;
					if (i == 0)
					{
						while (population[generations - 1][population[i][j].father].health == 0)
						{
							population[i][j].father = rand() % individuals;
						}
						while (population[generations - 1][population[i][j].mother].health == 0)
						{
							population[i][j].mother = rand() % individuals;
						}
						population[i][j].health = (population[generations - 1][population[i][j].father].health + population[generations - 1][population[i][j].mother].health) / 2 + population[i][j].health_mut;
						population[i][j].strength = (population[generations - 1][population[i][j].father].strength + population[generations - 1][population[i][j].mother].strength) / 2 + population[i][j].strenght_mut;
						population[i][j].speed = (population[generations - 1][population[i][j].father].speed + population[generations - 1][population[i][j].mother].speed) / 2 + population[i][j].speed_mut;
					}
					else
					{
						while (population[i - 1][population[i][j].father].health == 0)
						{
							population[i][j].father = rand() % individuals;
						}
						while (population[i - 1][population[i][j].mother].health == 0)
						{
							population[i][j].mother = rand() % individuals;
						}
						population[i][j].health = (population[i - 1][population[i][j].father].health + population[i - 1][population[i][j].mother].health) / 2 + population[i][j].health_mut;
						population[i][j].strength = (population[i - 1][population[i][j].father].strength + population[i - 1][population[i][j].mother].strength) / 2 + population[i][j].strenght_mut;
						population[i][j].speed = (population[i - 1][population[i][j].father].speed + population[i - 1][population[i][j].mother].speed) / 2 + population[i][j].speed_mut;
					}
					if (j == 0)
					{
						mid_of_max = (population[i][j].health + population[i][j].strength + population[i][j].speed) / 3;
						mid_of_min = (population[i][j].health + population[i][j].strength + population[i][j].speed) / 3;
					}
					cout << "\n-------------------------------------\nпоколение: " << child << endl;
					if (population[i][j].health <= 0)
					{
						population[i][j].health = 0;
						cout << "СУЩЕСТВО МЕРТВО!!!" << endl;
					}
					if (population[i][j].strength <= 0)
					{
						population[i][j].strength = 0;
						cout << "СУЩЕСТВО БЕЗСИЛЬНО!!!" << endl;
					}
					if (population[i][j].speed <= 0)
					{
						population[i][j].speed = 0;
						cout << "СУЩЕСТВО ОБЕЗДВИЖЕНО!!!" << endl;
					}
					middle_of_stat = (population[i][j].health + population[i][j].strength + population[i][j].speed) / 3;
					if (population[i][j].health != 0)
					{
						middle_of_mutation = (population[i][j].health_mut + population[i][j].strenght_mut + population[i][j].speed_mut) / 3;
						mid_of_all += middle_of_stat;
						if (middle_of_stat > mid_of_max)
						{
							mid_of_max = middle_of_stat;
							ind_of_max = j;
						}
						else if (middle_of_stat < mid_of_min)
						{
							mid_of_min = middle_of_stat;
							ind_of_min = j;
						}
					}
					else
					{
						middle_of_mutation = 0;
						dead++;
					}
					cout << "\nИНДЕКС: " << j << "\n\nотец: " << population[i][j].father << "\nмать: " << population[i][j].mother << "\n\nмутация здоровья: " << population[i][j].health_mut << "\nмутация силы: " << population[i][j].strenght_mut << "\nмутация скорости: " << population[i][j].speed_mut << "\nсреднее значение мутации: " << middle_of_mutation << "\n\nздоровье: " << population[i][j].health << "\nсила: " << population[i][j].strength << "\nскорость: " << population[i][j].speed << "\nсреднее значение параметров: " << middle_of_stat << endl;
				}
				cout << "\n==========================================================================\nпокодение: " << child << "\n\nИНДЕКС СУЩЕСТВА С САМЫМИ ВЫСОКИМИ СРЕДНИМИ ХАРАКТЕРИСТИКАМИ: " << ind_of_max << "\nсреднии характеристики существа: " << mid_of_max << "\n\nИНДЕКС СУЩЕСТВА С САМЫМИ НИЗКИМИ СРЕДНИМИ ХАРАКТЕРИСТИКАМИ: " << ind_of_min << "\nсреднии характеристики существа: " << mid_of_min << "\n\nсреднии характеристики поколения: " << (mid_of_all) / (individuals - dead) << "\n\nмёртвых в поколении: " << dead << "\n==========================================================================" << endl;
				child++;
			}
		}
	}
