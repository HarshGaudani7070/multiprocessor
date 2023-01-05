#include<iostream>

using namespace std;

class Data{
	
	public:
		
		void fun(int i){
			
			cout<<"Your value for i : "<<i<<endl<<endl;
		}
		
		void fun(int i , int q){
			
			cout<<"Your value for i : "<<i<<endl;
			cout<<"Your vlaue for q : "<<q<<endl;
		}
}; 

main(){
	
	Data obj;
	
	int i,q;
	
	i = 10;
	q = 20;
	
	obj.fun(i);
	obj.fun(i,q);
	
} 
