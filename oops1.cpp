#include<iostream>
#include<string.h>
using namespace std;
class student
{
int age;
string name;
string regno;
public :
student()
{
    age=0;
    name="";
    regno="";
}
void setstudent(string a, int b, string c)
{
    age=b;
    name=a;
    regno=c;
}
void output()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"RegNo: "<<regno<<endl;
}
};
class course
{
    int counter;
    student students[50];
    public:
    course()
    {
        counter=0;
    }
    void addstudent(student a)
    {
        students[counter]=a;
        counter++;
    }
    void printinfo()
    {
        for(int i=0;i<counter;i++)
        students[i].output();
        cout<<endl;
    }
};
int main()
{
    int nums,numc;
    cout<<"Enter number of courses: ";
    cin>>numc;
    string cors[numc];
    for(int i=0;i<numc;i++)
    {
        cout<<"Enter the names of the courses: ";
        cin>>cors[i];
    }
    for(int i=0;i<numc;i++)
    {
        string courses=cors[i];
        course courses;
        cout<<"Enter number of students studying this course: ";
        cin>>nums;
        int stud[nums];
        for(int k=0;k<nums;k++)
        {
            stud[nums]=k;
        }
        cout<<"Enter the information about the students"<<endl;
        for(int j=0;j<nums;j++)
        {
            int age;
            string regno,name;
            cout<<"name: ";
            cin>>name;
            cout<<"RegNo: ";
            cin>>regno;
            cout<<"Age: ";
            cin>>age;
            int b=j;
            student b;
            b.setstudent(name,age,regno);
            courses.addstudent(b);
        }
    }
    cout<<"The final output "<<endl;
    for(int i=0;i<numc;i++)
    {
        string courses=cors[i];
        courses.printinfo();
    }
}