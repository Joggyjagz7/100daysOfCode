#include <iostream>
#include <fstream> //fstream and ofstream
#define ALPHABETS 26
using namespace std;

struct Letter_Stats{
	int count;
	char ch;
	};

int main(){
	cout<<"ANALYSIS OF OBAMA'S SPEECH"<<endl;
	cout<<"The occurrence of each letter is as follows :"<<endl;
	ifstream inputfile; //to read get file
	char ch;
	int i;
	Letter_Stats stats[ALPHABETS];
	inputfile.open("obama.txt", ios::in); //opens the obama.txt file

//initialize the array of structures

	for (i=0;i<ALPHABETS;i++){
	stats[i].count=0;
	stats[i].ch=('a' + i);
	}
	while (!inputfile.eof())  //do till file ends
	{
inputfile.get(ch);

//increment counter for appropriate character

	if('a' <= ch && ch <= 'z')

	stats[ch - 'a'].count++;

	else if('A' <= ch && ch <= 'Z')

	stats[ch - 'A'].count++;
	}

inputfile.close();

//print characters and count if it is more than 0

for(i=0;i<ALPHABETS;i++){
	if(stats[i].count>0)
	{
	cout<<"The letter "<<stats[i].ch<<" occured "<<stats[i].count<<" times "<<endl;
	}
	}
	return 0;
}

