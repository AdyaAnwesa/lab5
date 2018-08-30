//Program using conditions
/*
  Program to calculate Gross Salary of an employee
*/

//Insert Library
#include<iostream>
using namespace std;

//Include main function
int main() {

	//Declare variables
	int bs, hra, da, gs;

	//Ask user to input values
	cout << "Enter your Basic Salary " << endl;
	cin >> bs;

	//Checking Salary Range and calculating Gross Salary accordingly
	if(bs<=10000) {
		hra=(20*bs)/100;
		da=(80*bs)/100;
		}
	else if(bs<=20000 && bs>10000) {
		hra=(25*bs)/100;
		da=(90*bs)/100;
		}
	else {
		hra=(30*bs)/100;
		da=(95*bs)/100;
		}

		gs=bs+hra+da;
		cout << "Your Basic Salary is Rupees " << bs << endl << "Your House Rent Allowance is Rupees " << hra << endl << "Your Dearness Allowance is Rupees " << da << endl << "Your Gross Salary is Rupees " << gs  << endl;
//Return value to main function
return 20;
}
