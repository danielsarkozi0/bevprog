#include "std_lib_facilities.h"

int main()
{
	double num1 = 0, sum = 0;
	string mertekegyseg;
	vector<double> ertekek;

	while(cin >> num1 >> mertekegyseg)
	{
		cout << "\n\n";
		if (mertekegyseg != "cm" && mertekegyseg != "m" && mertekegyseg != "ft" && mertekegyseg != "in")
		{
			cout << "Enter a different unit(cm,m,ft,in)" << endl;
		}
		if (mertekegyseg=="cm")
		{
			cout << num1/100 << "m" << endl;
			ertekek.push_back(num1/100);
		}
		if (mertekegyseg=="m")
		{
			cout << num1 << "m" << endl;
			ertekek.push_back(num1);
		}
		if (mertekegyseg=="ft")
		{
			cout << num1*0.3048 << "m" << endl;
			ertekek.push_back(num1*0.3048);
		}
		if (mertekegyseg=="in")
		{
			cout << num1*0.0254 << "m" << endl;
			ertekek.push_back(num1*0.0254);
		}

		//min
		sort(ertekek);
		cout << "Smallest value: " << ertekek[0] << "m\n";
		cout << "Largest value: " << ertekek[(ertekek.size()-1)] << "m\n";

		//count
		cout << "Number of values entered:" << ertekek.size() << endl;

		//avg
		for(double ertek : ertekek) sum += ertek;
		cout << "Average: " << (sum/ertekek.size()) << "m\n";

		cout << "Entered values: ";
		for(int i = 0; i< ertekek.size(); ++i)
		{
			cout << ertekek[i] << " ";
		}
		cout << "end of loop" << endl;

	}
	return 0;
}