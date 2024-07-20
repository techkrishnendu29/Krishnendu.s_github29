#include<iostream> 
using namespace std;

	class student {
		private :
		int Id, Clas;
		char Name[30], Sec[10];
	public: 
	
	void setData (){
		cout << "\nEnter ID of student: "; 
		cin >>Id;
		cout << "\nEnter Name of student: "; 
		fflush(stdin);
		gets (Name);
		cout << "\nEnter Class of student: ";
 		cin >> Clas; 
		cout << "\nEnter Section of student: ";
		cin >> Sec;
}

	void display () {
		cout << "\nStudent ID:" << Id; 
		cout << "\nStudent Name: " <<Name; 
		cout << "\nStudent Class: " <<Clas;
		cout << "\nStudent Section: " << Sec; } };
		
	int main (){
		student s; 
		cout <<"\nInitialising student data: "; 
		s.setData (); 
		cout << "\nDisplaying student data: ";
		s.display (); 
		
	return 0;
	
}
