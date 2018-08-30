//Program using conditions
/*
  Program to calculate Profit or Loss
*/

//Insert Library
#include<iostream>
using namespace std;

//Include main function
int main() {

	//Declare variables
	int cp,sp,p,l;

	//Ask user to input values
	cout << "The cost price of item is " << endl;
	cin >> cp;
	cout << "The selling price of item is " << endl;
	cin >> sp;

	//Check and calculate if Profit or Loss
	if(cp>sp) {
		l=cp-sp;
		cout << "You suffered a loss of Rupees " << l << " /-" << endl;
		}

	else {
		p=sp-cp;
		cout << "You gained a profit of Rupees " << p << " /-" << endl;
		}
//Return value to main function
return 18;
}
