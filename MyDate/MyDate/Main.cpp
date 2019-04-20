#include <iostream>
#include "MyDate.h"
using namespace std;

int main()
{
	MyDate d1, d2, d3;
	cout << "Input day format 'dd/mm/yyyy'\n";
	cout << "Input Day1: ";
	cin >> d1;
	cout << "---> Day1: " << d1 << " - " << d1.DayOfWeek() << endl;
	int n;
	cout << "Input n: ";
	cin >> n;
	d2 = d1 + n;
	cout << "---> Day2=Day1+n: " << d2 << " - " << d2.DayOfWeek() << endl;
	cout << "Input Day3: ";
	cin >> d3;
	cout << "---> Day3: " << d3 << " - " << d3.DayOfWeek() << endl;
	cout << "---> Distance Day1-Day3: " << d1.Distance(d3) << "day(s)" << endl;
	return 0;
}