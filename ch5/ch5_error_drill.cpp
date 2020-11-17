#include "std_lib_facilities.h"
int main()
	try {
        int x = 2; double d = 5/(x-2); if (d==2*x+0.5) cout <<
"Success!\n";
		keep_window_open();
		return 0;
	}
	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		keep_window_open();
		return 1;
	}
	catch (...) {
		cerr << "Oops: unknown exception!\n";
		keep_window_open();
		return 2;
}

/*
1. Cout << "Success!\n";           >>>>> Nagy C-vel kezdődik a cout
2. cout << "Success!\n;            >>>>> Nincs " a \n után
3. cout << "Success" << !\n"       >>>>> A ! rossz helyen van
4. cout << success << '\n';        >>>>> Nincs ""-ben a succes
5. string res = 7; vector<int> v(10); v[5] = res; cout <<    >>>>> nem string hanem int-nek kéne lennie a res változónak
"Success!\n";
6. vector<int> v(10); v(5) = 7; if (v(5)!=7) cout << "Success!\n";  >>>>> Nem v(5) hanem v[5] 2x is
7. if (cond) cout << "Success!\n"; else cout << "Fail!\n";  >>>>> A cond nevű változó nincs deklarálva
8. bool c = false; if (c) cout << "Success!\n"; else cout <<  >>>>> Helyes
"Fail!\n";    
9. string s = "ape"; boo c = "fool"<s; if (c) cout <<  >>>>> Nem boo hanem bool
"Success!\n";
10. string s = "ape"; if (s=="fool") cout << "Success!\n";  >>>>> Helyes
11. string s = "ape"; if (s=="fool") cout < "Success!\n";  >>>> Kiiratásnál csak egy < van, pedig 2 << kell
12. string s = "ape"; if (s+"fool") cout < "Success!\n"; >>>>> Kiiratásnál csak egy < van, pedig 2 << kell + if headerbe nem lehet stringet összefűzni, mert egy bool értéket kellene kapni
13. vector<char> v(5); for (int i=0; 0<v.size(); ++i) ; cout <<  >>>>> Helyes
"Success!\n";
14. vector<char> v(5); for (int i=0; i<=v.size(); ++i) ; cout <<  >>>>> Helyes
"Success!\n";
15. string s = "Success!\n"; for (int i=0; i<6; ++i) cout << s[i];  >>>>> Helyes
16. if (true) then cout << "Success!\n"; else cout << "Fail!\n";  >>>>> A then szó nem kell
17. int x = 2000; char c = x; if (c==2000) cout << "Success!\n";  >>>>> Helyes
18. string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i];  >>>>> Helyes
19. vector v(5); for (int i=0; i<=v.size(); ++i) ; cout <<  >>>>> Hiányzik a vector típusa
"Success!\n";
20. int i=0; int j = 9; while (i<10) ++j; if (j<i) cout <<   >>>>> Helyes
"Success!\n";
21. int x = 2; double d = 5/(x–2); if (d==2*x+0.5) cout <<  >>>>> Helytelen "-" karakter
"Success!\n";
*/