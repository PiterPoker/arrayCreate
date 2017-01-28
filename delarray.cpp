#include <iomanip>

extern int n;
extern int m;

using namespace std;

void delarr(int **arr, int a)
{
	for (int i = 0; i < a; i++)
		delete[]arr[i];
}