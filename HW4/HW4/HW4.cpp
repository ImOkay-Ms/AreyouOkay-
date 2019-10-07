// hw4 make classtype operator overloading 
#include <iostream>
using namespace std;

//&의 역할: Money타입의 object를 받겠다는 뜻
class Money
{
public:
	Money(int dollar,int cent);
	Money(int dollar);
	Money();
	int Getdollar();
	int Getcent();
	void output();
	/*Money operator +(Money& amount);*/
private:
	int cent;
	int dollar;
	int allcent;
};

Money operator +(Money& amount1, Money& amount2);

int main()
{
	Money test1(5, 20), test2(3, 10), test3;
	test3 = test1+test2;
	cout << test3.Getdollar() << "dollar " << test3.Getcent() << "cent" << endl;
}

Money::Money(int input_dollar, int input_cent)
{
	dollar = input_dollar;
	cent = input_cent;
	allcent = (dollar * 100) + cent;
}
Money::Money(int input_dollar)
{
	dollar = input_dollar;
	cent = 0;
	allcent = dollar;
}
Money::Money()
{
	dollar = 0;
	cent = 0;
	allcent = 0;
}

int Money::Getdollar()
{
	return dollar;
}

int Money::Getcent()
{
	return cent;
}


//Money Money::operator+(Money & amount)
//{
//	int allcent2 = amount.Getcent + amount.Getdollar * 100;
//	int allsum = allcent + allcent2;
//	int absallsum = abs(allsum);
//	int finaldollar = absallsum / 100;
//	int finalcent = absallsum % 100;
//
//	if (allsum < 0)
//	{
//		finalcent = -finalcent;
//		finaldollar = -finaldollar;
//	}
//
//	return Money(finaldollar, finalcent);
//}

Money operator +(Money& amount1, Money& amount2)	//operator overloading 정의
{
	int allcent1 = amount1.Getcent() + amount1.Getdollar() * 100;
	int allcent2 = amount2.Getcent() + amount2.Getdollar() * 100;
	int allsum = allcent1 + allcent2;
	int absallsum = abs(allsum);
	int finaldollar = absallsum / 100;
	int finalcent = absallsum % 100;

	if (allsum < 0)
	{
		finalcent = -finalcent;
		finaldollar = -finaldollar;
	}

	return Money(finaldollar, finalcent);
}
