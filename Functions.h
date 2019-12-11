#pragma once
#include <sstream>
void WelcomeScreen();
void Line();
void NewLine();
void OpenAccount();
void WithdrawCash();
void CheckBalance();
void DepositCash();

class customer
{
public:
	std::string FirstName();
	void FirstName(std::string a);

	std::string SurName();
	void SurName(std::string a);

	float AccountBalance();
	void AccountBalance(float a);

	std::string Nationality();
	void Nationality(std::string a);

	std::string State();
	void State(std::string a);

	int BirthYear();
	void BirthYear(int a);

	int BirthMonth();
	void BirthMonth(int a);

	int BirthDay();
	void BirthDay(int a);

	long AccountNumber();
	void AccountNumber(long a);
	bool avail = true;

private:
	float accountBalance;
	long accountNumber;
	std::string customerFname;
	std::string customerSname;
	std::string nationality;
	std::string state;
	int birthYear;
	int birthMonth;
	int birthDay;
};
