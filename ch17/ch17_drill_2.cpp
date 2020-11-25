#include "../std_lib_facilities.h"

ostream& print_array(ostream& os, int* a, int n)
{
	for (int i = 0; i < n; ++i) os << a[i] << endl;
	return os;
}
int main()
try {
	int a = 7;
	int* p1 = &a;

	cout << "Value of p1: " << p1 << endl 
	<< "Pointed at a: " << *p1 << endl; 

	int* p2 = new int[7];
	for (int i = 0; i < 7; ++i) p2[i] = i*i;

	cout << "Value of p2: " << p2 << endl;
	for (int i = 0; i < 7; ++i) cout << p2[i] << ' ';

	int* p3 = p2;
	p2 = p1;
	p2 = p3;

	cout << "\nValue of p1: " << p1 << endl 
	<< "Pointed at: " << *p1 << endl; 
	cout << "Value of p2: " << p2 << endl 
	<< "Pointed at: " << *p2 << endl; 

	delete[] p2;

	p1 = new int [10] {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
	p2 = new int [10];

	for(int i = 0; i < 10; ++i) p1[i] = p2[i];

	//Vektorok

	vector<int> vp1 {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
    vector<int> vp2 (10);

    vp2=vp1;

    for(int i = 0; i < 10; ++i) cout << vp2[i] << endl;

	return 0;

} catch (exception& e){
	cout << e.what() << endl;
	return 1;
}
