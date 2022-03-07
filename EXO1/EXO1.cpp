#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <time.h>
#include <math.h>
#include <stdio.h>

void minmax(int *tab, int taille,int *min, int *max) {

	for (int i = 0; i < taille; i++)
	{
			if (tab[i] < *min)
			{
				*min = tab[i];
			}
			if (tab[i] > *max)
			{
				*max = tab[i];
			}
	}

}
int main()
{
	srand(time(NULL));
	int taille = rand() % 10;
	std::cout << taille << "\n";
	int *tab = new int[taille];
	for (int i = 0; i < taille; i++)
	{
	tab[i] = rand() % 30;
	}
	int max = tab[0];
	int min = tab[0];
	minmax(tab, taille, &min, &max);
	std::cout << " le min est " << min << "\n";
	std::cout << " le max est " << max << "\n";
	return 0;


}

