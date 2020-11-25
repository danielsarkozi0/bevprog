#include "../std_lib_facilities.h"

vector<int> gv {1,2,4,8,16,32,64,128,256,512};

void f(vector<int> vec)
{
	vector<int> lv;
	lv = vec;
	cout << "1st cout:  " ;
	for (int i = 0; i < 10; ++i)
	{
		cout << lv[i] << ' ';
	}
	cout << endl << "2nd cout: ";
	vector<int> lv2 = vec;
	for (int i = 0; i < 10; ++i)
	{
		cout << lv2[i] << ' ';
	}
	cout << endl;
}
int fact(int n)
{
    if(n > 1)
        return n * fact(n - 1);
    else
        return 1;
}

int main()
{
	f(gv);
	vector<int> vv(10);
	for (int i = 0; i < 10; ++i)
	{
		vv[i] = fact(i+1);
	}
	f(vv);

	return 0;
} 
