#include <iostream>
#include <string>
using namespace std;
 
 class HumanBeings{
 	private :
 		int age;
 		string name;
 		
 		
 		public :
 			
 		HumanBeings(){
 			cout<<"constructor as defult parameter "<<endl;
 			age=0;
 			name="no name";
		 }
		 HumanBeings(int iage){
 			cout<<"constructor as age parameter "<<endl;
 			age=iage;
 			name="no name";
		 }
		 HumanBeings(string iname){
 			cout<<"constructor as name parameter "<<endl;
 			age=0;
 			name=iname;
		 }
		 HumanBeings(int iage,string iname){
 			cout<<"constrctor as age and name parameter "<<endl;
 			age=iage;
 			name=iname;
		 }
		 
 };
 
 int main(){
 	HumanBeings utk;
 	HumanBeings(20);
 	HumanBeings("utkrista");
 	HumanBeings(20,"utkrista");
 	return 0;
 }
