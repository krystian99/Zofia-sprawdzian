#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

const int MAX = 1001;

char tab[MAX];

int main()
{
	int n;

	//cin >> n;

	// wczytaj

	string str;

	cin >> str;

	int k;

	n = str.size();

	// sortowanie
	for (int i = 0; i < n; ++i)
	{
		k = i;

		for (int j = i + 1; j < n; ++j)
		{

			if (str[j] < str[k]) k = j;
		}

		swap(str[k], str[i]);

	}

	for (int i = 0; i < n; ++i)
	{
		k = i;

		for (int j = i + 1; j < n; ++j)
		{

			if (str[j] < str[k]) k = j;
		}

		swap(str[k], str[i]);

	}

	// wyswietl

	cout << str << endl;


	return 0;
}