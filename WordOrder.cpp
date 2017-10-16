#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
	std::string s;
	cout<<"WELCOME TO THE WORD ORDERING MACHINE"<<endl;
	getline (cin,s);
	std::sort(s.begin(),s.end());
	std::cout<< s <<std::endl;
}
