#include<iostream>

using namespace std;

class o{
	
	public:
		
		void fun(){
			
			cout<<"Hello friends"<<endl;
		}
};

class p : public o{
	
	public:
		
		void fun(){
			
			cout<<"good morning";
		}
};

main(){
	
	p obj;
	
	obj.o::fun();
	obj.p::fun();
}
