//Program using Loops
/*
  Program to Print Sum of all natural numbers upto n
*/

//Insert Library
#include<iostream>
using namespace std;

//Include main function
int main() {

	//Declare variables
	int n; int i=1; int s=0;

	//Ask user to input values
	cout << "Enter required number of terms " << endl;
	cin >> n;

	//Printing sum of all natural numbers upto n
	while(i<=n){
	 s=s+i;
	i++;
	}
	cout<<"Sum of all natural numbers upto "<<n<< " is = " <<s << endl;

//Return value to main function
return 27;
}
