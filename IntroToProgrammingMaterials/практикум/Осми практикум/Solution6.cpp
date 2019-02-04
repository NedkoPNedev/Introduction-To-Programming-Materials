#include <iostream>
using namespace std;

int main()
{
	char inCons[50], inCons2[50];
	cin.getline(inCons, 50,';');
	cin.clear();
	cin.getline(inCons2,50, ';');
	int len1 = strlen(inCons);
	int len2 = strlen(inCons2);
	for (int i = 0; i < len1; i++)
	{
		if (inCons[i] == inCons2[0])
		{
			bool equal = true;
			for (int j = 0; j < len2; j++)
			{
				if (inCons[i + j] != inCons2[j])
				{
					equal = false;
				}
			}
			if (equal)
			{
				for (int j = 0; j < len2; j++)
				{
					inCons[i + j] = ' ';
				}
				while (inCons[0] == ' ')
				{
					for (int v = i; v < len1 - 1; v++)
					{
						inCons[v] = inCons[v + 1];
					}
					inCons[len1 - 1] = ' ';
					len1--;
				}

			}
		}
	}

	for (int i = 0; i < len1; i++)
	{
		cout << inCons[i];
	}
	cout << endl;
	return 0;
}

