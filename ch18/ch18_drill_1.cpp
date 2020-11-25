#include "../std_lib_facilities.h"

int ga[10] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };

void f(int arr[], int NoE)
{
	int la[10] = {};
	for(int i = 0; i < NoE; ++i) la[i] = arr[i];
	for(int i = 0; i < NoE; ++i) cout << la[i] << ' ';
	int* p = new int[NoE];
	for(int i = 0; i < NoE; ++i) p[i] = arr[i];
	cout << "\nf function's cout: ";
	for(int i = 0; i < NoE; ++i) cout << p[i] << ' ';
	cout << '\n';

	delete[] p;
}
int fact(int n)
{
    if(n > 1)
        return n * fact(n - 1);
    else
        return 1;
}

int main()
try {
	f(ga,10);
	int aa[10] = {};
	for (int i = 0; i < 10; ++i)
	{
		aa[i] = fact(i+1);
		cout << aa[i] << ' ';
	}
	cout << '\n';

	f(aa,10);

	return 0;
} catch (exception& e){
	cout << e.what() << endl;
	return 1;
}
