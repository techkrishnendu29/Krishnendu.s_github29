











#include <iostream>
using namespace std;
class number {
			private:
             int x, y;
      		 public:
      		 	
     		 void input (int a, int b){
			   x=a;y=b ;
	}         
          	 void add(){
			  cout << "\nSum = " << x+y; 
      } 
}; 

int main(){
	number val; int a, b;        
	cout << "Enter two values: ";   
	cin >> a >> b;                
 	val.input(a, b);             
 	val.add();
	                    
	return 0;
  }
