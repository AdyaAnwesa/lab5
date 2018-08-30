//Program using conditions
/*
  Program to input month number and print number of days in that month
*/

//Insert Library
#include<iostream>
using namespace std;

//Include main function
int main() {

	//Declare variables
	int n;

	//Ask user to input values
	cout << "The month number is " << endl;
	cin >> n;

	//Check number of Days
	if(n>12) {
		cout << "Invalid Input" << endl;
		}

	else {
		//Print Number of Days in that month
		if(n==2) {
			cout<< "Number of days in this month is 28" << endl; 
			}
		else if(n==4 || n== 6 || n== 9 || n==11){ //using or operator
			cout<< "Number of days in this month is 30" << endl;
			}
		else {
			cout<< "Number of days in this month is 31" << endl;
			}
		}
//Return value to main function
return 12;
}
