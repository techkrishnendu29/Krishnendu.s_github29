include<iostream>
using namespace std;
class account {
			int acc;
			char name[30];
			float balance;
			public:
			void setData(){
				 cout <<"\nEnter account number: "; 
				cin>> acc;
				cout<<"\nEnter Name of customer: ";

					fflush(stdin);
					gets(name);
					cout << "\nEnter starting balance: "; cin>> balance;
}
			void display () const{
					cout << "\nAccount No.: "<< acc;
					cout << "\nCustomer Name: " << name;
					cout << "\nAccount balance: Rs." << balance;
}
			void deposit( float amt) {
			 balance = balance + amt;
					cout << "\nBalance after deposit Rs." << balance;
}
			float getBalance () const{

				return balance; 
		}
		
void withdraw( float amt){

			if (balance >= amt){
				balance=balance- amt;
			cout << "\nBalance after withdrawal Rs." << balance;	
			}
		else
			cout << "\nWithdrawal not possible. Balance = Rs." << balance;
		}

};

int main(){
	
		account a;
		
		a.setData();
		a.display(); 
		a.deposit (500.00);
		a.deposit (300.00);
		a.withdraw (600.00);
		a.withdraw (2000.00);
		
		return 0;
	}
