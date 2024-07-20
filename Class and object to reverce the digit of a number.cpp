#include<iostream>
using namespace std;
class number  {  
	 private:
      int num;
      public:
      void setVal(int N)
	{num=N;} 
		void reverse () {
		   int rev= 0, digit, copy = num;
		while (copy> 0) {
		   digit=copy%10 ;  
			rev= rev*10 + digit;  
			copy = copy/10;
       }
		cout << "\nReverse = " << rev;
  		 }
      };
        
int main() {
	number val; int N;
	cout << "Enter value : " ;
	cin >> N;  
 	val . setVal(N) ;  
	val.reverse() ;  
return 0;
}
