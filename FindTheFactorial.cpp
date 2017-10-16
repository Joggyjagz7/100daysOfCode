/* Factorial of n = 1*2*3*...*n*/
/*Factorial program using recursive functions*/
#include <iostream>
#include <cmath>

using namespace std;


unsigned long long factorial(int); /*factorial function */

int main()
{
cout<<"FIND THE FACTORIAL PROGRAM"<<endl;
 int n;
cout<<"Enter a number to find factorial: ";
cin >> n;
cout << "Factorial of " << n <<" = " << factorial(n);
}

unsigned long long factorial(int n){
	if(n < 1)
		return 1;
	return n * factorial(n-1);
}

