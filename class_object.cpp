#include <iostream>
#include <string>

using namespace std;

class Student
{
    private:
    string College_Name;
    string Name;
    int Roll_Number;
    int Marks;
    
    public:
    void getData(string c, string n, int r, int m)
    {
        College_Name=c;
        Name=n;
        Roll_Number=r;
        Marks=m;
    }

    void dispData()
    {
        cout<<"College Name: "<<College_Name<<endl;
        cout<<"Name: "<<Name<<endl;
        cout<<"Roll Number: "<<Roll_Number<<endl;
        cout<<"Marks: "<<Marks<<endl;
    }

};

int main()
{
    Student s1, s2, s3, s4;
    s1.getData("ITM University","Sakshi", 33, 85);
    s1.dispData();
}
