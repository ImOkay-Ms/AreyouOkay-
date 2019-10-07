#include <iostream>
#include <malloc.h>
using namespace std;
int inputWord(char*);
void deleteVowels(char * , int size);
void deleteRedundancy(char *, int size);
void printWord(char * ,int size);

int main()
{
	char *name;
	name = (char*)malloc(sizeof(char));
	int wholeArraySize;

	wholeArraySize = inputWord(name);
	deleteRedundancy(name, wholeArraySize);
	/*deleteVowels(name, wholeArraySize);*/
	printWord(name, wholeArraySize);

	/*free(name);*/

	return 0;
}

int inputWord(char* address)
{
	int wholeArraySize = 0;

	cout << "input word:";
	cin >> address;

	while (address[wholeArraySize]!= '\0')
	{
		wholeArraySize++;
	}
	
	return wholeArraySize;
}

void deleteVowels(char *address, int size)
{
//모음삭제 = 당겨서 삭제
	int i = 0, j = 0, k;

	while (i != size)
	{
		if (address[i] == 'a' || address[i] == 'e' || address[i] == 'i' || address[i] == 'o' || address[i] == 'u' || address[i] == 'y' ||
			address[i] == 'A' || address[i] == 'E' || address[i] == 'I' || address[i] == 'O' || address[i] == 'U' || address[i] == 'Y')
		{
			k = i;
			for (j = 0; j < size-i; j++)
			{
				address[k] = address[k + 1];
				k++;
			}
		}
		else i++;
	}
	return;
}
void deleteRedundancy(char *address, int size)
{
	//모음삭제 = 당겨서 삭제
	int i = 0, j = 0, k;

	while (i != size)
	{
		if (address[i] == address[i + 1] && address[i + 1] != '\0')
		{
			k = i;
			for (j = 0; j < size - i; j++)
			{
				address[k] = address[k + 1];
				k++;
			}
		}
		else i++;
	}
	return;
}

void printWord(char * address,int wholeArraySize)
{
	int i;
	int wordArraySize = 0;
	while (address[wordArraySize] != '\0')
	{
		wordArraySize++;
	}

	cout << "after modify: ";
	for (i = 0; i < wordArraySize; i++)
	{
		cout << address[i];
	}
	cout << endl << "whole array size:" << wholeArraySize << endl;
	cout << "word array size:" << wordArraySize << endl;

}