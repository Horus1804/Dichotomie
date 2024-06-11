#include <iostream>
#include <vector>

using namespace std;

int main()
{

	vector<int> tabDicho = { 5,51,62,84,92,152,156,184,185,194 };

	int debut = 0;
	int fin = tabDicho.size() - 1;
	int milieu;
	int valueToSearch = 185;

	bool found = false;
	while (!found && debut <= fin)
	{
		milieu = (debut + fin) / 2;
		if (valueToSearch == tabDicho[milieu])
		{
			found = true;
		}
		else
		{
			if (valueToSearch > tabDicho[milieu])
			{
				debut = milieu +1;
			}
			else
			{
				fin = milieu - 1;
			}
		}
	}
	if (found)
	{
		cout << "Trouver  a l'index " << milieu << endl;
	}
	else
	{
		cout << "Pas Trouver" << endl;
	}

	return 0;
}
