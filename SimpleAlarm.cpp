#include <iostream>
#include <ctime>
#include <string>
using namespace std;
/* user enters the time
2.time runs for particular user input
3.raise alarm when user inputs time*/
	int sec,minutes,hour;
	timer_t s;
	tm * time;

int main(){


	cout<<"Joggy's Alarm Clock"<<endl;
	cout<<"Enter the time for your alarm in this format HH:MM:SS"<<endl;
	cin>>sec>>minutes>>hour;
	time_t s = time(0);
	tm t= *localtime(&s);
	int alarm = sec:minutes:hour;
	cout<<alarm<<endl;
}
