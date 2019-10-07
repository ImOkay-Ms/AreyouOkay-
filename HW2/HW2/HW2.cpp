#include<iostream>
using namespace std;

class CounterType	//�繰�� ���µ� ���
{
public:
	void Setcounter(unsigned int count);	//Mutator �Լ�
	void increaseCount();	//�����Լ�
	void decreaseCount();	//�����Լ�	
	void printCount();	//����Լ�
	int Countprogram(unsigned int count);	//1�Է½� counter1���� 2�Է½� counter 1 ����	�ٸ����� �Է½� ����

private:
	unsigned int counter;	//�繰�� ���� �ʿ�
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
