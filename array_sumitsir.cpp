#include <iostream>

using namespace std;

int main()
{
    const int numStudents = 10;
    int marks[numStudents];
    int i=0;

    for (i=0; i < numStudents; i++)
    {
        cout<<"Enter Marks For Roll No "<<i+1<<": ";
        cin>>marks[i];
    }
    cout<<"\nEntered marks for students:\n";

    for (int i=0; i<numStudents; i++) 
    {
        cout <<"Student "<<i+1<<": "<<marks[i]<<"\n";

    }
    cout << "\nMin Element = "
         << *min_element(marks, marks + numStudents);

    cout << "\nMax Element = "
         << *max_element(marks, marks + numStudents);


    return 0;

}