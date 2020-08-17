#include <iostream>
#include <string>
using namespace std;

class HumanBeings{
	private :
		int age;
		string name;
		 
	public :
		HumanBeings(){
			cout<<"default constructor"<<endl;
			age = 0;
			name = "noname";
			
		}
		HumanBeings(int iage,string iname){
			cout<<"overloding constructor"<<endl;
			age = iage;
			name = iname;
			
		}
		void display(){
			cout<<age<<endl<<name<<endl;
		}
};
int main(){
	HumanBeings utk(20,"utkrista");
	utk.display();
	return 0;
}
