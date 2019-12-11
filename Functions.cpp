#include <iostream>
#include <fstream>
#include "Functions.h"
#include <sstream>
#include <conio.h>
#include <ctime>
using namespace std;
char ch;
int i = 0;
customer customers[10000];
bool Available(int j)
{
	if (customers[j].avail == true)
		return true;
	else return false;
}
void Line()
{
	std::cout << "___________________________________________________________________________________________";
	std::cout << std::endl;
}
void NewLine()
{
	std::cout << std::endl;
}
long GenAccNum()
{
	srand(time(NULL));
	long a = rand();
	a *= 230;
	return a;
}
void OpenAccount()
{
	system("cls");
	i = 0;
	while (Available(i) == false)
	{

		i++;
	}
	cout << i << endl;

	cout << "\tA C C O U N T  O P E N I N G";
	NewLine();
	NewLine();
	NewLine();
	std::cout << "\t\tThank You for chosing to bank with us";
	NewLine();
	NewLine();
	cout << "\t\tPlease input your first name:\t";
	string fname;
	getline(cin, fname);
	customers[i].FirstName(fname);
	string str = customers[i].FirstName();
	NewLine();
	NewLine();

	cout << "\t\tPlease input your surname:\t";
	getline(cin, fname);
	customers[i].SurName(fname);
	str += "*"; 
	str += customers[i].SurName();
	cout << str;
	NewLine();
	NewLine();
	cout << "\t\tInput your year of birth:\t";
	int num;
	cin >> num;
	customers[i].BirthYear(num);

	NewLine();
	NewLine();

	cout << "\t\tInput your month of birth1-12:\t";
	cin >> num;
	customers[i].BirthMonth(num);

	NewLine();
	NewLine();

	cout << "\t\tInput your date of birth:\t";
	cin >> num;
	customers[i].BirthDay(num);

	NewLine();
	NewLine();

	cout << "\t\tInput your nationality:\t";

	getline(cin, fname);
	cin >> fname;
	customers[i].Nationality(fname);

	NewLine();
	NewLine();
	
	cout << "\t\tInput your state of origin:\t";
	getline(cin, fname);
	cin >> fname;
	customers[i].State(fname);
	customers[i].AccountNumber(GenAccNum());
	//customers[i].AccountNumber(GenAccNum());
	customers[i].avail = false;
		//REVIEW ACCOUNT DETAILS

	system("cls");
	cout << "\tTo be sure of the data you inputed, please review and make ammends";
	NewLine();
	NewLine();
	cout << "\t\tName:\t" << customers[i].FirstName() << " " << customers[i].SurName();
	NewLine();
	NewLine();
	cout << "\t\tDate of birth:\t" << customers[i].BirthDay() << " " << customers[i].BirthMonth() << " " << customers[i].BirthYear();
	NewLine();
	NewLine();
	cout << "\t\tState of origin:\t" << customers[i].State();
	NewLine();
	NewLine();
	cout << "\t\tNationality:\t" << customers[i].Nationality();
	NewLine();
	NewLine();
	cout << "\t\tYour account number is " << customers[i].AccountNumber();
	system("pause");
	
}


void DepositCash()
{
	system("cls");
	cout << "\t\tC A S H  D E P O S I T";
	NewLine();
	NewLine();
	cout << "\t\tYour current account balance is:\t#" << customers[i].AccountBalance();
	NewLine();
	NewLine();
	cout << "\t\tHow much do you want to deposit?\t";
	float cash;
	cin >> cash;
	NewLine();
	NewLine();
	cash += customers[i].AccountBalance();
	customers[i].AccountBalance(cash);
	cout << "\t\tDeposit successful";
	NewLine();
	NewLine();
	cout << "\t\tNew balance:\t" << customers[i].AccountBalance();
	NewLine();
	NewLine();
	system("pause");
}

void WithdrawCash()
{
	//Functioms for withrawing money from account
	system("cls");
	cout << "\t\tW I T H D R A W  C A S H";
	NewLine();
	NewLine();
	while (true)
	{
		cout << "\t\tHow much do you wish to withdraw?\t";
		float cash;
		cin >> cash;
		NewLine();
		NewLine();
		if (cash > customers[i].AccountBalance())
		{
			cout << "\t\tYou have insufficient funds\n";
			continue;
		}
		else
		{
			cash = customers[i].AccountBalance() - cash;
			customers[i].AccountBalance(cash);
			cout << "\t\tWithdraw successful";
			NewLine();
			NewLine();
			system("pause");
			break;
		}
	}
}

void CheckBalance()
{
	system("cls");
	cout << "\t\tA C C O U N T  D E T A I L S";
	NewLine();
	NewLine();
	cout << "\t\tDear" << customers[i].FirstName() << " " << customers[i].SurName() << ",\n";
	cout << "\t\tYour current account balance is:\t" << customers[i].AccountBalance();
	NewLine();
	NewLine();
	cout << "\t\tThank you for banking with us\n";
	system("pause");
}



void WelcomeScreen()
{

	//Output welcome message

	std::cout << "Hey good day! What do you want to do?\n\n\n";
	Line();
	//NewLine();

	std::cout << "\t\tO P E N   A C C O U N T\t\t<O>\n\n";
	std::cout << "\t\tD E P O S I T  C A S H\t\t<D>\n";
	NewLine();
	std::cout << "\t\tW I T H D R A W  C A S H\t<W>\n";
	NewLine();
	std::cout << "\t\tV I E W  B A L A N C E\t\t<V>\n";
	NewLine();
	
	
	
}

// CLASS DEFINITION (CUSTOMER)

std::string customer::FirstName()
{
	return std::string(customerFname);
}

void customer::FirstName(std::string a)
{
	customerFname = a;
}

std::string customer::SurName()
{
	return std::string(customerSname);
}

void customer::SurName(std::string a)
{
	customerSname = a;
}

float customer::AccountBalance()
{
	return accountBalance;
}

void customer::AccountBalance(float a)
{
	accountBalance = a;
}

std::string customer::Nationality()
{
	return std::string(nationality);
}

void customer::Nationality(std::string a)
{
	nationality = a;
}

std::string customer::State()
{
	return std::string(state);
}

void customer::State(std::string a)
{
	state = a;
}

int customer::BirthYear()
{
	return birthYear;
}

void customer::BirthYear(int a)
{
	birthYear = a;
}

int customer::BirthMonth()
{
	return birthMonth;
}

void customer::BirthMonth(int a)
{
	birthMonth = a;
}

int customer::BirthDay()
{
	return birthDay;
}

void customer::BirthDay(int a)
{
	birthDay = a;
}

long customer::AccountNumber()
{
	return accountNumber;
}

void customer::AccountNumber(long a)
{
	accountNumber = a;
}

//CLASS DEFINITION COMPLETE



