#include <cstdlib>
#include <ctime>
#include <iostream>
#define MIN 1
#define MAX 50

 int generate();
 int compare(int a, int b);
 int getInput();
 
/* steps 1- the program generates a random no(range of 1-100), 
2- user inputs  a number
3- program compares the user input with program random no
4-program tells the user if its too high , or too low or correct*/
using namespace std;

int main(){
	cout<<"WELCOME TO RANDOM GENERATOR GAME"<<endl;
	int seed = generate();
	int guess = getInput();
	int cmp = compare(seed,guess);
	while(cmp > 0){
		if(cmp == 2)
			cout<<"Your guess is less. Try again!"<<endl;
		else
			cout<<"Your guess is high. Try again!"<<endl;
		guess = getInput();
		cmp = compare(seed,guess);
	}
	cout<<"Your guess is correct. Goodbye!";
	return 0;
}

int generate(){
	int randomNo;
	srand((unsigned)time(0));
	for (int i=0;i<100;i++){
		randomNo = (rand()% 100 + 1);
	}
	return randomNo; 
}

int getInput(){
 	int userGuess;
	 cout<<"Guess the number:";
	 cin>> userGuess;
	 
	 return userGuess;
 }
 
int compare(int randomNo, int userGuess){
	if(randomNo > userGuess)
		return 2; // user guess is less
	else if(randomNo < userGuess)
		return 1; // user guess is greater
	else
		return 0; // equal
}
