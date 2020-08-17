#include <iostream>
#include <string>

using namespace std;

class HumanBeings{
	private :
		int age;
		string name;
	public :
	HumanBeings(){
		age=0;
		name="no name";
		cout<<"hello wellcome to my programming"<<endl;
	}
		
	void display(){
		cout<<age<<endl<<name;
	}
	
};
int main(){
	HumanBeings utk;
	utk.display();
	return 0;
}
