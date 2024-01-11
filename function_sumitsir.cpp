#include <iostream>

using namespace std;

int findLargest(int a, int b) 
{
    if (a > b) 
    {
        return a;
    } 
    else 
    {
        return b;
    }
}

int main() 
{
    int p, q;
    
    cout << "Enter the first number: ";
    cin >> p;
    
    cout << "Enter the second number: ";
    cin >> q;

    int largest = findLargest(p, q);

    cout<<"The largest number is: "<<largest<<endl;

    return 0;
}
