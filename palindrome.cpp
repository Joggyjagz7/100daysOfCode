#include<iostream>
#include<cstring>
 
using namespace std;

bool isPalindrome(char n[]);

int main(){
	char n[100] = "";
	cout<<"Welcome to the Palindrome Detector!"<<endl;
	cout<<"enter '.' to exit at any time."<<endl;
	
	cout<<"Enter characters:";
	cin>>n;
	
	while(n[0] != '.'){ //Sentinel loop
		
		if(isPalindrome(n))
			cout<<n<<" is a palindrome."<<endl;
		else
			cout<<n<<" is not a palindrome."<<endl;
		
		cout<<"Enter characters:";
		cin>>n;
	}
	return 0;
	
}
		/*n = original user input, rev = reversed user input*/

bool isPalindrome(char n[]){  
	int len = strlen(n)-1; //minus 1 from strlen(string lenght) to maintain 0-index
	char rev[len+1];  //add 1 to len to maintain the string for rev
	int i = 0;
	
	while(len > -1){
		if(n[len] != ' ')
			rev[i++] = n[len--];
			/*simultanoeusly increment rev and decrement n[len], 
			so as the loop goes the 1st char in rev becomes the last in len..and on and on*/
		else
			len--;	
	}
	return (strcmp(n,rev) == 0); //string compare between n and reverse to give the boolean exp.
}
