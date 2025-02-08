#include <iostream>
#include <algorithm>

using namespace std;

const int MAX = 1001;

int tab[MAX];

int main()
{
	int n;

	cin >> n;

	// wczytaj

	for (int i = 0; i < n; ++i)
	{
		cin >> tab[i];
	}

	int k;

	// sortowanie
	for (int i = 0; i < n; ++i)
	{
		k = i;

		for (int j = i + 1; j < n; ++j)
		{

			if (tab[j] < tab[k]) k = j;
		}

		swap(tab[k], tab[i]);

	}

	for (int i = 0; i < n; ++i)
	{
		k = i;

		for (int j = i + 1; j < n; ++j)
		{

			if (tab[j] < tab[k]) k = j;
		}

		swap(tab[k], tab[i]);

	}

	// wyswietl

	for (int i = 0; i < n; ++i)
	{
		cout << tab[i] << " ";
	}


	return 0;
}