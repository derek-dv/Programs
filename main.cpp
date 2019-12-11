#include <iostream>
#include "Functions.h"
#include <stdlib.h>
#include <conio.h>
#include <fstream>
extern char ch;
char chars;
using namespace std;

int main()
{
	ofstream in;
	/*for (int j = 0;j <= 10000;j++)
	{
		string str = to_string(j);
		in.open("C:\\Users\\Pure programs\\source\\repos\\Project5\\Project5\\Files\\" + str + ".txt");
		in.close();
	}*/
	while (true)
	{
		std::string s;
		getline(cin, s);
		system("cls");
		WelcomeScreen();
		char chars;
		chars = _getch();
		switch (chars)
		{
		case 'O': case 'o':
		{	OpenAccount();
			break;
		}
		case 'x' : case 'X' :
			exit(0);
			break;
		case 'd':case 'D':
			DepositCash();
			break;
		case 'w': case 'W':
			WithdrawCash();
			break;
		case 'v': case 'V':
			CheckBalance();
			break;
		default:
			std::cout << "Invalid input!";
		}
		continue;
	}
}