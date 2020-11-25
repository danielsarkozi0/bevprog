#include "../std_lib_facilities.h"

ostream& print_array10(ostream& os, int* a)
{
	for (int i = 0; i < 10; ++i) os << a[i] << endl;
    return os;
}
ostream& print_array(ostream& os, int* a, int n)
{
	for (int i = 0; i < n; ++i) os << a[i] << endl;
	return os;
}

ostream& print_vector(ostream& os, vector<int> a, int n)
{
	for (int i = 0; i < n; ++i) os << a[i] << endl;
	return os;
}


int main()
try {
	int* ia10 = new int[10];
	for(int i = 0; i < 10; ++i) ia10[i] = 100+i;
	print_array10(cout, ia10);

	int* ia1 = new int[11];
	for(int i = 0; i < 11; ++i) ia11[i] = 100+i;
	print_array10(cout, ia11);

	int* ia20 = new int[20];
	for(int i = 0; i < 20; ++i) ia20[i] = 100+i;
	print_array(cout, ia20);

	//Vektorok

	vector<int> vp10(10);
	vector<int> vp11(11);
	vector<int> vp20(20);
	for (int x = 0 ; x < 10; x++)
        vp10[x] = x+100 ; 
    for (int x = 0 ; x < 11; x++)
        vp11[x] = x+100 ; 
    for (int x = 0 ; x < 20; x++)
        vp20[x] = x+100 ; 

    print_vector(cout,vp10,10);
    print_vector(cout,vp11,11);
    print_vector(cout,vp20,20);

	delete[] ia10;
	delete[] ia11;
	delete[] ia20;
	return 0;

} catch (exception& e){
	cout << e.what() << endl;
	return 1;
}
