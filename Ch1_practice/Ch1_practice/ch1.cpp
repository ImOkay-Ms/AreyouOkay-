#include<iostream>
using namespace std;

int main()
{
	const double RATE = 6.9;
	double deposit;

	cout << "Enter the amount of your deposit $";
	cin >> deposit;

	double newBalance;
	newBalance = deposit + deposit * (RATE / 100);
	cout << "In one year, that deposit will grow to\n"
		<< "$" << newBalance << " an amount worth waiting for .\n";


	cout << "-------------------------------------------------------------------------------------------------------------------" << endl;
	int inttype;
	double doubletype;

	inttype = 17 / 5;
	doubletype = 17 / 5;

	cout << "inttype 17/5 :" << inttype << endl;
	cout << "dobuletype 17/5:" << doubletype << endl;

	inttype = 17.0 / 5;
	doubletype = 17.0 / 5;

	cout << "inttype 17.0/5 :" << inttype << endl;
	cout << "dobuletype 17.0/5:" << doubletype << endl;

	cout << 2 / 2 / 3.0 / 4 << endl; //왼쪽부터 순서대로 계산된다.

	cout << "-------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "Type casting" << endl;
	doubletype = (double)7 / 3;
	cout << "dobuletype :" << doubletype << endl;
	doubletype = static_cast<double>(7) / 3; //두줄은 같은기능
	cout << "dobuletype :" << doubletype << endl;
	

	return 0;
}