#include <iostream>

using namespace std;

int main()
{
    cout<<"Hello Rowdies";
        
    float my_marks;
    cout<<"enter marks ";
    cin>>my_marks;
    cout<<my_marks;

    char name[30];
    cout<<"enter name ";
    cin>>name;
    cout<<name;

    if(my_marks<40)
    {
        cout<<"dead";
    }
    else if(my_marks>=40 && my_marks<80){
        cout<<"alive";
    }
    else{
        cout<<"excellent";
    }


     return 0;
}