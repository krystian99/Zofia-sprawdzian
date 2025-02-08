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

	// sortowanie
	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			if (tab[i] > tab[j])
				swap(tab[i], tab[j]);
		}

	}

	// wyswietl

	for (int i = 0; i < n; ++i)
	{
		cout << tab[i] << " ";
	}


	return 0;
}