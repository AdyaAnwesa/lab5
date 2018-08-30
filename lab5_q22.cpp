//Program using Loops
/*
  Program to Print all natural numbers upto n
*/

//Insert Library
#include<iostream>
using namespace std;

//Include main function
int main() {

	//Declare variables
	int n; int i=1;

	//Ask user to input values
	cout << "Enter required number of terms " << endl;
	cin >> n;
	cout <<"All natural numbers from 1 to "<< n<< " are :" << endl;

	//Printing all natural numbers
	while(i<=n){
	cout<<i<<endl;
	i++;
	}

//Return value to main function
return 22;
}
