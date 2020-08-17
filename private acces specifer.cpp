#include <iostream>
using namespace std;
 class HumanBeings{
 	private :
 		int age;
 		int getAge(){
 		return age-5;
 }
 	public :
 		void displayAge(){
 		cout <<getAge()<<endl;
 	}
 		
 		void setage(int value){
 		age =value;
 	}
 		
 };
 int main () {
 	HumanBeings utk;
 	utk.setage(20);
 	utk.displayAge();
 	
 	return 0;
 }
