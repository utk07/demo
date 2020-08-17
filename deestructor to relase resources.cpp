#include <iostream>
#include <string>

using namespace std;

class HumanBeings{
	private :
		string *name;
		int *age;
		
	public :
		HumanBeings(string iname, int iage){
			name = new string;
			age = new int;
			
			
		*name = iname;
		*age = iage;
	}
		
		void display() {
			cout<<"my name is "<<*name<<". i am "<<*age<<"yeras old."<<endl;
			
		}
			
		~HumanBeings(){
			delete name;
			delete age;
			
				cout<<"you are relesed "<<endl;
				
			
		}	
		
};
int main(){
	HumanBeings *utk = new HumanBeings("utkrista",20);
	utk->display();
	delete utk;
	return 0;
	
}
