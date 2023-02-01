#include<iostream>
#include<string.h>
using namespace std;
class student
{
int marks;
string name;
string regno;
public :
student()
{
    marks=0;
    name="";
    regno="";
}
void setstudent(string a, int b, string c)
{
    marks=b;
    name=a;
    regno=c;
}
void output()
{
    cout<<"Name: "<<name;
    cout<<"\tmarks: "<<marks;
    cout<<"\tRegNo: "<<regno;
    cout<<endl;
}
};
class course
{
    int counter;
    student students[50];
    public:
    int number;
    course()
    {
        counter=0;
    }
    void addstudent(student a,int num)
    {
        students[counter]=a;
        number=num;
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
   int numStudents;
   int numcourses;
   cout<<"Enter the number of courses the university provides: ";
   cin>>numcourses;
   string cors[numcourses];
   cout<<"Enter the courses name(like MT101 etc)"<<endl;
   for(int i=0;i<numcourses;i++)
   {
    cin>>cors[i];
   }
   course cours[numcourses];
   for(int i=0;i<numcourses;i++)
   {
    cout<<"Enter the number of students in "<<cors[i]<<": ";
    cin>>numStudents;
    student stud[numStudents];
    for(int j=0;j<numStudents;j++)
    {
        int mar;
        string nam,reg;
        cout<<"Enter the name of student "<<j+1<<": ";
        cin>>nam;
        cout<<"Enter RegNo of the student "<<j+1<<": ";
        cin>>reg;
        cout<<"Enter the marks of the student in "<<cors[i]<<": ";
        cin>>mar;
        stud[j].setstudent(nam,mar,reg);
        cours[i].addstudent(stud[j],numStudents);
        cout<<"\n";
    }
    cout<<endl<<endl;
   }
   cout<<"Here is the result"<<endl;
   for(int i=0;i<numcourses;i++)
   {
    cout<<"\t\tCOURSE: "<<cors[i]<<"\n";
    cout<<"\tNumber of students enrolled: "<<cours[i].number<<endl;
    cout<<"\tStudent details \n\n";
    cours[i].printinfo();
    cout<<endl<<endl;
   }
}