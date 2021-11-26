#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	const int SIZE = 10;
    int arrint[SIZE] = {15,12,16,77,57,54,7,6,78,76};
	for (int i = 0; i < SIZE; i++)
	{
		cout << "int [" << i + 1 << "]" << " - " << arrint[i] << endl;
	}

	cout << endl;

	const short SIZE1 = 10;
	short arrshort[SIZE1] = { 20,12,16,77,57,54,7,6,78,76 };
	for (int b = 0; b < SIZE1; b++)
	{
		cout << "short [" << b + 1 << "]" << " - " << arrshort[b] << endl;
	}
	cout << endl;

	const long SIZE2 = 10;
	long  arrlong[SIZE2] = { 15,12,16,77,57,54,7,6,78,76 };
	for (int a = 0; a < SIZE2; a++)
	{
		cout << "long [" << a + 1 << "]" << " - " << arrlong[a] << endl;
	}

	cout << endl;

	const int SIZE3 = 10;
	float arrfloat[SIZE3] = { 1.5,1.2,1.6,7.7,5.7,469.999,7.1,6.3,7.8,7.6 };
	for (int c = 0; c < SIZE3; c++)
	{
		cout << "float [" << c + 1 << "]" << " - " << arrfloat[c] << endl;
	}

	cout << endl;
	 
	const int SIZE4 = 10;
	double arrdouble[SIZE4] = { 15,12,16,77,57,54,7,6,78,76 };
	for (int u = 0; u < SIZE4; u++)
	{
		cout << "double [" << u + 1 << "]" << " - " << arrdouble[u] << endl;
	}

	cout << endl;
	 
	const int SIZE5 = 10;
	char arrchar[SIZE5] = { '1','2','3','4','5','6','7','8','9','0'};
	for (int f = 0; f < SIZE5; f++)
	{
		cout << "char [" << f + 1 << "]" << " - " << arrchar[f] << endl;
	}

	cout << endl;

	const int SIZE6 = 10;
	bool arrbool[SIZE6] = { true,false,1,0,true};
	for (int l = 0; l < SIZE6; l++)
	{
		cout << "bool [" << l + 1 << "]" << " - " << arrbool[l] << endl;
	}
	
	cout << endl;









	return 0;
}