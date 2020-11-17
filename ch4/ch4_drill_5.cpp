#include "std_lib_facilities.h"

int main()
{
	double num1 = 0, num2 = 0;
	while(cin >> num1 >> num2)
	{
		if (num1>num2)
		{
			if(num1-num2 > 0.01 || num1-num2 < 100)
			{
				cout << "The number are almost equal. ";
			}
			cout << "The larger value: " << num1 << " The smaller value: " << num2 << endl;
		}
		if (num1<num2)
		{
			if(num1-num2 > 0.01 || num1-num2 < 100)
			{
				cout << "The number are almost equal. ";
			}
			cout << "The larger value: " << num2 << " The smaller value: " << num1 << endl;
		}
		if (num1==num2)
		{
			cout << "The numbers are equal" << endl;
		}
	}


	return 0;
}
