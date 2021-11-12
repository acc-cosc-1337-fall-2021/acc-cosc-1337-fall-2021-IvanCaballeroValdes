//add include statements
#include<iostream>
#include<dna.h>
using namespace std;
//add function(s) code here
int factorial(int num)
{
    long double factorial = 1.0;
    
    for(int i = 1; i<= num; ++i){
            factorial *= i;
        }
    
    return factorial; 
}

int gcd(int num1, int num2)
{
     while(num1 != num2)
    {
        if(num2 > num1) 
        {
            num1 = num1 + num2; // swap the values of the variables without temp variable
            num2 = num1 - num2;
            num1 = num1 - num2;
        } 
        else 
        {
            num1 -= num2;
        }
    }
    return num1;
}