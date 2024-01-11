#include <iostream>

using namespace std;

int add(int x, int y=5, int r=6)
{
    int z;
    z=x+y+r;
    return z;
}

int main()
{
    int a,b,r,sum;
    cout<<"Enter value of a: "<<endl;
    cin>>a;

    cout<<"Enter value of b: "<<endl;
    cin>>b;

    cout<<"Enter value of r: "<<endl;
    cin>>r;

    sum=add(a,b,r);

    cout<<"Addition is: "<<sum;

    return 0;
}