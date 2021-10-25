//add include statements
#include<iostream>
#include<dna.h>
using namespace std;
//add function(s) code here
int factorial()
{
    int num;
    long double factorial = 1.0;
    cout<<"Enter a positive intiger: ";
    cin>>num;
    if(num<0)
    cout<<"Error! Factorial of a negative number do not exist: ";
    else {
        for(int i = 1; i<= n; ++i){
            factorial *= i;
        }
        cout<<"Factorial of " <<n<< "=="<< factorial;
    }
    return 0; 
}

int gcd()
{
    int num1;
    cout<<"enter a number : ";
    cin>>num1;
    int num2;
    cout<<"enter a number : ";
    cin>>num2;
    int gcd;
    for (int i=1;i,<=num1&&i<=num2;i++) {
        if(num1%i==0 && num2%i == 0) {
            gcd=i;
        }
    }
    cout<<"the great common divisor is: "<<gcd<<endl;
    return 0;
}