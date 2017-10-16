#include <iostream>
#include <string> //library for string functions

using namespace std;
int main(){
	int vowels=0;
	string v = "";
	
	cout<<"The Vowel Checker Program"<<endl;
	cout<<"Enter a word or sentence"<<endl;
	getline (cin,v);
	for (int i=0; i<v.length();i++){
		if(v[i]=='a'||v[i]=='e'||v[i]=='i'||v[i]=='o'||v[i]=='u'||v[i]=='A'||v[i]=='E'||v[i]=='I'||v[i]=='O'||v[i]=='U')
			vowels = vowels + 1;
			
		
	}
	cout<<"Vowels :"<<vowels<<endl;
		return 0;
	
}
