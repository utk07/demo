#include <iostream>
using namespace std;

class HumanBeings{
	public :
		HumanBeings(){
			cout<<"constructor called"<<endl;
			
		}
		
		~HumanBeings(){
			cout<<"destructor called"<<endl;
			
		}
};
int main(){
	HumanBeings *utk;
	utk = new HumanBeings();
	delete utk;
	return 0;
}
