#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n;
	unsigned long long factorial ;
	
	cout <<"WELCOME TO THE FACTORIAL CALCULATOR"<<endl;
	cout <<"Enter a number: "<<endl;
	cin>>n;
	
	for (int j = 1;j<=n; ++j){   /*loop for factorial*/
		factorial *= j;

	}
	cout<< "The Factorial of "<<n<<" is "<< factorial;
	return 0;
}
