#include <iostream>
#include <string>

using namespace std;

bool sprawdz(string str1)
{
	string str2;


	for (int i = 0; i < str1.size(); ++i)
	{
		if (str1[i] != ' ')
			str2.push_back(str1[i]);
	}


	int j = str2.size();

	for (int i = 0; i < str2.size() / 2; ++i)
	{
		if (str2[i] != str2[j - i - 1])
			return false;
	}

	return true;
}

int main()
{
	string str;


	getline(cin, str);

	if (sprawdz(str))
		cout << "No tak" << endl;
	else
		cout << "Nietsety nie" << endl;
	return 0;
}