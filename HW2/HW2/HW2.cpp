#include<iostream>
using namespace std;

class CounterType	//사물을 세는데 사용
{
public:
	void Setcounter(unsigned int count);	//Mutator 함수
	void increaseCount();	//증가함수
	void decreaseCount();	//감소함수	
	void printCount();	//출력함수
	int Countprogram(unsigned int count);	//1입력시 counter1증가 2입력시 counter 1 감소	다른문자 입력시 종료

private:
	unsigned int counter;	//사물을 셀때 필요
};

int main()
{
	CounterType Test;
	int input, count;

	cout << "input default value :";
	cin >> input;

	count = Test.Countprogram(input);
	
	return 0;
}

void CounterType::Setcounter(unsigned int count)
{
	counter = count;
}

void CounterType::increaseCount()
{
	counter = counter + 1;
}

void CounterType::decreaseCount()
{
	if (counter == 0)
	{
		cout << "counter is zero ";
		return;
	}
	else counter = counter - 1;
	// counter is not negative
}

void CounterType::printCount()
{
	cout << "now count is: " << counter << endl;
}

int CounterType::Countprogram(unsigned int count)
{
	Setcounter(count);
	int ccounter = counter;

	while (1) 
	{
		cout << endl << "increase is 1 , decrease is 2" << endl << "input :";
		cin >> ccounter;

		if (ccounter == 1)
		{
			increaseCount();
			printCount();
		}
		else if (ccounter == 2)
		{
			decreaseCount();
			printCount();
		}
		else break;
	}
	printCount();

	return count;
}
