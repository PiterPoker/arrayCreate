#include <iostream>
#include <iomanip>

extern int i;
extern int j;

using namespace std;

void getarrcell(int **arr, int o,int p)
{
	int *ip= nullptr;
	ip = &o;
	cout << "Номер ячейки: " << ip<<" ";
	ip = &p;
	cout << " "<< ip<<endl;
}