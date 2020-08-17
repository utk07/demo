#include <iostream>
#include <string>
using namespace std;
class HumanBeings{
	public :
		string name;
		void introduction(){
			cout<<"my name is "<<name<<endl;
		}
		
};
int main()
{
	HumanBeings utk;
	utk.name ="maya";
	utk.introduction();
	HumanBeings ut;
	ut.name ="chaya";
	ut.introduction();
return 0;	
}
