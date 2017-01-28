#include <iostream>
#include <iomanip>

using namespace std;

void iarr(int **arr, int a, int b);
void oarr(int **arr, int a, int b);
void delarr(int **arr, int a);

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	int n = 0, m = 0;
	cout << "¬ведите кол-во строк в массиве: ";
	cin >> n;
	cout<< endl;
	cout << "¬ведите кол-во столбцов в моссиве: ";
	cin >> m;
	cout << endl;
	int **arr = new int *[n];
	for (int i = 0; i < n; i++)
		arr[i] = new int[m];
	iarr(arr, n, m);
	oarr(arr, n, m);
	delarr(arr, n);
	system("pause");
	return NULL;
}
