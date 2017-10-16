#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;
 int main()
 {
 
 srand(time(NULL));//range
 int user_no;
 int comp_no;
 int high_no;
 int low_no;
 int tries = 0;
 
 	cout<<"WELCOME TO THE RANDOM NUMBER GENERATOR "<<endl;
 	 cout<<"ENter a number"<<endl;
 			cin>>user_no;
 
 	
 	do{
 		
 			comp_no = rand() % 100 + 1 ;
 			cout<<"the random number = "<<comp_no<<endl;
 			++tries;
			
 		if (comp_no){
 			cout<<"Number too high"<<endl;
 		} 
 		else if (user_no < comp_no){
 			cout<<" Number too low"<<endl;
 		}
 		else {
 		
 		cout<<"Correct number";
 		}
	} while (user_no != comp_no);	
}

