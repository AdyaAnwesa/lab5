//Program using Loops
/*
  Program to Print all natural numbers from n to 1
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
	cout <<"All natural numbers from "<< n<< " to 1 are :" << endl;

	//Printing all natural numbers
	while(i<=n){
	cout<<n<<endl;
	n--;
	}

//Return value to main function
return 23;
}
