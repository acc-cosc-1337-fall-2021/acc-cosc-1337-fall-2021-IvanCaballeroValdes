//write include statements
#include<iostream>
//write using statements
using namespace std;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	int choice = 0;

	do
	{
		cout<<"Menu"<<endl;
		cout<<"1. Factorial"<<endl;
		cout<<"2. Great Common Divisor"<<endl;
		cout<<"3. Exit"<<endl;
		cout<<"Enter choice: ";
		cin>>choice;

	
	}while( choice != 3);

	
	return 0;
}