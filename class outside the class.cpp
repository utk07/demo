#include <iostream>
#include <string>
using namespace std;

 class HumanBeings{
 	public :
 		string name ="No Name";
 		void intro();
 		
 };
 void HumanBeings :: intro(){
 	cout<<HumanBeings :: name <<endl;
 	
 }
 int main(){
 	HumanBeings utk;
 	utk.name="utkrista";
 	utk.intro();
 	HumanBeings *ut = new HumanBeings;
 	ut->name="utkri";
 	ut->intro();
 	return 0;
 	
 }
