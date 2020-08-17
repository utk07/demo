#include <iostream>
using namespace std;

class HumanBeings{
	public :
		string name;
		void intro(){
		cout<<"My Name is "<<name<<endl;
		}
		
};
int main()
{
	HumanBeings utk;
	utk.name ="utkrista";
	utk.intro();
	
	HumanBeings *ut = new HumanBeings;
	ut->name ="utkri";
	ut->intro();
	return 0;
	
}
