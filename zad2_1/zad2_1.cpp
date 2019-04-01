#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class DoNumbers
{

public:

	DoNumbers(string);
	string doWrite;
};

string Zeros(int first, int second) //class DoZerosComma {};
{
	int l = first - second; //licznik
	string how_much = "";
	for (int i = 0; i < l; i++)
	{
		how_much += '0';
	}
	return how_much;
}
DoNumbers::DoNumbers(string text) //class DoZeros {};
{
	int next = 0;
	string Show_answer = "";
	bool comma = false;
	int ni = text.length();
	for (int i = 0; i < ni; i++)
	{
		if (text[i] >= '0' && text[i] <= '9')
		{
			Show_answer += text[i];
			if (comma == true)
			{
				next++;
			}
		}
		else if (text[i] == '.')
		{
			comma = true;
		}
		else if (text[i] == 'B')
		{
			if (comma == false)
			{
				Show_answer += Zeros(9, 0);
			}
			else
			{
				Show_answer += Zeros(9, next);
			}
		}
		else if (text[i] == 'M')
		{
			if (comma == false)
			{
				Show_answer += Zeros(6, 0);
			}
			else
			{
				Show_answer += Zeros(6, next);
			}
		}
		else if (text[i] == 'T')
		{
			if (comma == false)
			{
				Show_answer += Zeros(12, 0);
			}
			else
			{
				Show_answer += Zeros(6, next);
			}
		}
	}
	doWrite=Show_answer;
}

int main()
{
	DoNumbers answer1("4M");
	cout << answer1.doWrite << std::endl;
	DoNumbers answer2("54T");
	cout << answer2.doWrite << std::endl;
	DoNumbers answer3("5.434B");
	cout << answer3.doWrite << std::endl;
	/*std::cout << ConvertFromSymbolic("4M") << std::endl;
	std::cout << ConvertFromSymbolic("54T") << std::endl;
	std::cout << ConvertFromSymbolic(" 5.434B") << std::endl;*/
	system("pause");
}
