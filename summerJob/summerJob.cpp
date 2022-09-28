// Kai Miller
// Date: 8-7-22
// Program Title: Summer Job
// Program Description: “A program that calculates the weekly wage with the spending need to tell the user how much weekly pay is leftover

#include <iostream>
#include <string>


using namespace std;

// Named constants
double TAX_PERCENT = .15;
double SHOPPING = .2;
double ENTERTAINMENT = .1;
double SAVINGS = .25;
double REMAINDER = .3;

int main()
{

	// Variable declaration
	string FName;
	string LName;
	double Payrate;
	double Hours;
	double WorkMoney;
	double Tax;
	

	//Program title and description for the user
	cout << "Title:" << endl;
	cout << "Summer Job" << endl;
	cout << "Discription:" << endl;
	cout << "A program that calculates the weekly wage with the spending need to tell the user how much weekly pay is leftover." << endl;

	// User input
	cout << "Enter user's first name." << endl;
	cin >> FName; 
	cout << "Enter user's last name." << endl;
	cin >> LName;
	cout << "Enter user's payrate." << endl;
	cin >> Payrate;
	cout << "Enter user's hours worked." << endl;
	cin >> Hours;

	// Calculations
	WorkMoney = Hours * Payrate;
	Tax = WorkMoney * TAX_PERCENT;

	// Output to the screen
	cout << "Name: " << FName << " " << LName << endl;
	cout << "Wages: " << WorkMoney << endl;
	cout << "Taxes: " << Tax << endl;
	cout << "Shopping: " << WorkMoney * SHOPPING << endl;
	cout << "Entertainment: " << WorkMoney * ENTERTAINMENT << endl;
	cout << "Savings: " << WorkMoney * SAVINGS << endl;
	cout << "Remainder: " << WorkMoney * REMAINDER << endl;

	return 0;
}