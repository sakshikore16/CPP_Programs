#include <iostream>

using namespace std;

int main()
{
    float a;
    float b;

    float sum;
    float subtraction;
    float division;
    float multiplication;

    cout<<"Enter 1st number: ";
    cin>>a;
    
    cout<<"Enter 2nd number: ";
    cin>>b;
    
    sum=a+b;
    sub=a-b;
    div=a/b;
    multiply=a*b;

    cout<<"The sum is: ";sum<<endl;
    cout<<"The subtraction is: ";subtraction<< endl;
    cout<<"The division is: ";division<<endl;
    cout<<"The multiplication is: ";multiplication<<endl;

    
    return 0;

}