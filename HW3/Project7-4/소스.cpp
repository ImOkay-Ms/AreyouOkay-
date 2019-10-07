#include<iostream>
using namespace std;

class HotDogStand
{
public:
	HotDogStand(int ID, int number1, int number2, int number3);	//������ �����ε�
	HotDogStand(int ID);
	HotDogStand(); 
	void JustSold();	//�ǸŽ� ���Լ�ȣ��
	int GetID();	//id�ҷ�����
	int GetSoldNumber(int num);	//stand�� �ǸŰ��� �ҷ�����
	int GettotalSoldNumber(int num);	//�� �ǸŰ��� �ҷ�����

private:
	int stand_ID_number;	//stand id
	int numberOfsold_Hotdog1;	//stand �� �ǸŰ���
	int numberOfsold_Hotdog2;
	int numberOfsold_Hotdog3;
	static int totalsold_Hotdog1;	//�� �ǸŰ���
	static int totalsold_Hotdog2;
	static int totalsold_Hotdog3;
};

int HotDogStand::totalsold_Hotdog1 = 0;
int HotDogStand::totalsold_Hotdog2 = 0;
int HotDogStand::totalsold_Hotdog3 = 0;

HotDogStand::HotDogStand(int ID, int number1, int number2, int number3)/* : stand_ID_number(ID), numberOfsold_Hotdog(number)*/
{
	stand_ID_number = ID;
	numberOfsold_Hotdog1 = number1;
	numberOfsold_Hotdog2 = number2;
	numberOfsold_Hotdog3 = number3;
	totalsold_Hotdog1 = 0;
	totalsold_Hotdog2 = 0;
	totalsold_Hotdog3 = 0;
}
HotDogStand::HotDogStand(int ID)/* : stand_ID_number(ID),numberOfsold_Hotdog(0)*/
{
	stand_ID_number = ID;
	numberOfsold_Hotdog1 = 0;
	numberOfsold_Hotdog2 = 0;
	numberOfsold_Hotdog3 = 0;
	totalsold_Hotdog1 = 0;
	totalsold_Hotdog2 = 0;
	totalsold_Hotdog3 = 0;
}
HotDogStand::HotDogStand()/* : stand_ID_number(0), numberOfsold_Hotdog(0)*/
{
	stand_ID_number = 0;
	numberOfsold_Hotdog1 = 0;
	numberOfsold_Hotdog2 = 0;
	numberOfsold_Hotdog3 = 0;
	totalsold_Hotdog1 = 0;
	totalsold_Hotdog2 = 0;
	totalsold_Hotdog3 = 0;
}

void HotDogStand::JustSold()
{
	int num;
	cout << "1,2,3 �� �ϳ��� �ֵ��׸� �����Ͻÿ�:";
	cin >> num;
	if (num == 1) {
		numberOfsold_Hotdog1++;
		totalsold_Hotdog1++;
	}
	else if (num == 2) {
		numberOfsold_Hotdog2++;
		totalsold_Hotdog2++;
	}
	else if (num == 3){
		numberOfsold_Hotdog3++;
		totalsold_Hotdog3++;
	}
	else cout << "wrong number input";
}

int HotDogStand::GetID()
{
	return stand_ID_number;
}

int HotDogStand::GetSoldNumber(int num)
{
	if (num == 1) {
		return numberOfsold_Hotdog1;
	}
	else if (num == 2) {
		return numberOfsold_Hotdog2;
	}
	else if (num == 3) {
		return numberOfsold_Hotdog3;
	}
	else cout << "wrong number input";
}

int HotDogStand::GettotalSoldNumber(int num)
{
	if (num == 1) {
		return totalsold_Hotdog1;
	}
	else if (num == 2) {
		return totalsold_Hotdog2;
	}
	else if (num == 3) {
		return totalsold_Hotdog3;
	}
	else if (num == 4) {
		return totalsold_Hotdog1 + totalsold_Hotdog2 + totalsold_Hotdog3;
	}
	else cout << "wrong number input";
}

int main()
{
	HotDogStand stand1(1,0,0,0), stand2(2,0,0,0), stand3(3,0,0,0);
	stand1.JustSold();
	stand1.JustSold();
	stand1.JustSold();
	stand2.JustSold();
	stand2.JustSold();
	stand2.JustSold();
	stand3.JustSold();
	stand3.JustSold();
	stand3.JustSold();


	cout << "stand ID:" << stand1.GetID() << "	hotdog1 �ǸŰ���:" << stand1.GetSoldNumber(1) << "	hotdog2 �ǸŰ���:" << stand1.GetSoldNumber(2) << "	hotdog3 �ǸŰ���:" << stand1.GetSoldNumber(3) << endl;
	cout << "stand ID:" << stand2.GetID() << "	hotdog1 �ǸŰ���:" << stand2.GetSoldNumber(1) << "	hotdog2 �ǸŰ���:" << stand2.GetSoldNumber(2) << "	hotdog3 �ǸŰ���:" << stand2.GetSoldNumber(3) << endl;
	cout << "stand ID:" << stand3.GetID() << "	hotdog1 �ǸŰ���:" << stand3.GetSoldNumber(1) << "	hotdog2 �ǸŰ���:" << stand3.GetSoldNumber(2) << "	hotdog3 �ǸŰ���:" << stand3.GetSoldNumber(3) << endl;

	cout << "hotdog1 �� �ǸŰ���:" << stand3.GettotalSoldNumber(1) << endl;
	cout << "hotdog2 �� �ǸŰ���:" << stand3.GettotalSoldNumber(2) << endl;
	cout << "hotdog3 �� �ǸŰ���:" << stand3.GettotalSoldNumber(3) << endl;
	cout << "�� �ǸŰ���:" << stand3.GettotalSoldNumber(4) << endl;

	return 0;
}
