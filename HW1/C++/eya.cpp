#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
	string string_base;
	int size_char = sizeof(char);
	cout << "input:";
	cin >> string_base;

	int size_string;
	int loop_pointer;
	size_string = string_base.length();

	/*cout << size_string;*/
	//printf("%d\n", &(string_base));
	//printf("%d\n", (&string_base + size_char));
	//printf("%c\n", string_base[0]);
	//printf("%c\n", *(&string_base[0]));
	//printf("%c\n", *(&string_base[0] + size_char));
	char *point_end = &string_base[0] + size_char * (size_string - 1);
	string string_copy,string1, string2;
	string_copy = string_base;
	for (loop_pointer = 0; loop_pointer < size_string; loop_pointer++)
	{
		//cout << string_base;
		string1 = string_copy.substr(0, size_string-loop_pointer);

		if (string_copy[size_string - loop_pointer] == 'a'|| string_copy[size_string - loop_pointer] == 'e'
			||string_copy[size_string - loop_pointer] == 'i'|| string_copy[size_string - loop_pointer] == 'o'
			|| string_copy[size_string - loop_pointer] == 'u'|| string_copy[size_string - loop_pointer] == 'w'
			|| string_copy[size_string - loop_pointer] == 'y')
		{
			string2 = string_copy.substr(size_string - loop_pointer+1, size_string);
		}
		else
		{
			string2 = string_copy.substr(size_string - loop_pointer, size_string);
		}
		
		string_copy = string1 + string2;



		//cout << string1 << "\n" << string2 << "\n";


	}
	cout << string_copy << "\n";
	/*cout << &(&(string_base[1])) << endl;
	cout << *(&string_base + size_char);*/

}