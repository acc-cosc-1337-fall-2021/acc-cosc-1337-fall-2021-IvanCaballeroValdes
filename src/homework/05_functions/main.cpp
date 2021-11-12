#include<iostream>
using namespace std;
/*
use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
int main() 
{
	int choice = 0;
	do
	{
		cout<<"Menu"<<endl;
		cout<<"1. get_gc_content"<<endl;
		cout<<"2. get_dna_complement"<<endl;
		cout<<"Enter choice: ";
		cin>>choice;
		
	} while ( choice != 3);
	
	return 0;
}