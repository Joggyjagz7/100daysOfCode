#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;
int main(){
	float totalunit= 0,totalCourses,totalScore=0,unit;
	char grade[10];
	cout<<"WELCOME TO THE GRADED POINT AVERAGE CALCULATOR"<<endl;
	cout<<"How many courses did you offer this semester?"<<endl;
	cin>>totalCourses;
	
	for ( int i = 0;i<totalCourses;i++){
	 cout<<"Course "<<i+1<<"grade: "<<endl;
	 cin>>grade[0];
	 
	 	unit > 0;
	 	cout<<"Courses"<<i+1<<" unit"<<endl;
	 	cin>>unit;
	 	if(unit < 1)
	 	cout<<"Unit must be greater than zero"<<endl;
	
	 totalunit += unit;
	 
	 //Conditional structure for grading system
	 if (grade[0]== 'A'|| grade[0]=='a'){
	 	totalScore += (unit * 5);
	 }
	 else if (grade[0]=='B'|| grade[0]=='b'){
	 	totalScore += (unit * 4);
	 }
	 else if (grade[0]=='C'|| grade[0]=='c'){
	 	totalScore += (unit * 3);
	}
	else if (grade[0]=='D'|| grade[0]=='d'){
	 	totalScore += (unit * 2);
	}
	else if (grade[0]=='E'|| grade[0]=='e'){
	 	totalScore += (unit * 1);
	 }
	else if (grade[0]=='F'|| grade[0]=='f'){
	 	totalScore += (unit * 0);
	}
	}
	float gp = totalScore/totalunit;
	cout<<"Your GPA is "<< setprecision(3) <<showpoint<< gp <<endl;
}
