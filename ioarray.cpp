#include <iostream>
#include <iomanip>

extern int n;
extern int m;

using namespace std;

void getarrcell(int **arr, int o, int p);

void iarr(int **arr, int a, int b)
{
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			cout << "Введите число " << i << " столбца " << j << " строки: ";
			cin >> arr[i][j];
			getarrcell(arr, i, j);
		}
	}
}

void oarr(int **arr, int a, int b)
{
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
			cout << setw(a) << setprecision(b) << arr[i][j] << "   ";
		cout << endl;
	}
}