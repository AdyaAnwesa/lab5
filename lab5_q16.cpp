//Program using conditions
/*
  Program to check whether triangle is equilateral, isoscales or scalene
*/

//Insert Library
#include<iostream>
using namespace std;

//Include main function
int main() {

	//Declare variables
	int a1, a2, a3;

	//Ask user to input values
	cout << "The angles of triangle is " << endl;
	cin >> a1;
	cin >> a2;
	cin >> a3;

	//Check the type of triangle
if(a1+a2+a3==180){
	if(a1==a2 && a1==a3) { //using and operator
		cout << "Triangle is equilateral" << endl;
		}

	else if(a1==a2 || a1==a3 || a2==a3) { //using or operator
		cout<< "Triangle is Isoscales" << endl; 
			}
		else {
			cout<< "Triangle is scalene" << endl;
			}
}
else{
cout<<"Invalid input: Not a triangle as sum of angles is less than 180 " << endl;
}
 
//Return value to main function
return 16;
}
