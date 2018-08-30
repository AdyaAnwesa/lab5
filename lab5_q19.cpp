//Program using conditions
/*
  Program to percentage and Grade of Student
*/

//Insert Library
#include<iostream>
using namespace std;

//Include main function
int main() {

	//Declare variables
	int m1, m2, m3, m4, m5, p;

	//Ask user to input values
	cout << "The mark obtained in Physics is " << endl;
	cin >> m1;
	cout << "The mark obtained in Chemistry is " << endl;
	cin >> m2;
	cout << "The mark obtained in Biology is " << endl;
	cin >> m3;
	cout << "The mark obtained in Mathematics is " << endl;
	cin >> m4;
	cout << "The mark obtained in Computer is " << endl;
	cin >> m5;	

	//Calculate percentage
	p=(m1+m2+m3+m4+m5)/5;

	//Condition to check Grade
	if(p>=90) {
		cout << "Percentage is " << p << "% and Grade awarded is A" << endl;
		}
	else if(p>=80) {
		cout << "Percentage is " << p << "% and Grade awarded is B" << endl;
		}
	else if(p>=70) {
		cout << "Percentage is " << p << "% and Grade awarded is C" << endl;
		}
	else if(p>=40) {
		cout << "Percentage is " << p << "% and Grade awarded is E" << endl;
		}
	else {
		cout << "Percentage is " << p << "% and Grade awarded is F" << endl;
		}

//Return value to main function

return 19;
}
