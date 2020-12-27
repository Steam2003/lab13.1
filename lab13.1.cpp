#include <iostream>
#include <math.h>
#include <iomanip>
#include "dod.h"
#include "sum.h"
#include "var.h"
using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;
int main()
{
	cout << "x_p = "; cin >> x_p;
	cout << "x_k = "; cin >> x_k;
	cout << "dx = "; cin >> dx;
	cout << "e = "; cin >> e;
	cout << endl;
	x = x_p;
	cout << fixed;
	cout << "----------------------------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(15) << "sin(x)/x" << " |"
		<< setw(10) << "S" << " |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "----------------------------------------------" << endl;
	while (x <= x_k) {
		sum(); 
		cout << "|" << setw(7) << setprecision(2) << x << " |"
			<< setw(15) << setprecision(5) << sin(x) / x << " |"
			<< setw(10) << setprecision(5) << s << " |"
			<< setw(5) << n << " |"
			<< endl;
		x += dx;
	}
	cin.get();
	return 0;
}