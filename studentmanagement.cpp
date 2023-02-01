#include<iostream>
#include<string.h>
using namespace std;
class student
{
string name;
public :
int marks;
string regno;
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
    int average;
    bool enrolled=false;
    student high;
    void search(string regist,int numS)
    {
        for(int i=0;i<numS;i++)
        {
            if(regist==students[i].regno)
            {
                enrolled=true;
            }
        }
    }
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
    void outhigh()
    {
        high.output();
    }
    void order(int numS)
    {
        for(int i=0;i<numS;i++)
        {
            for(int j=i;j<numS;j++)
            {
                student temp;
                if(students[i].marks<students[j].marks)
                {
                    temp=students[i];
                    students[i]=students[j];
                    students[j]=temp;
                }
            }
        }
    }
};
int main()
{
   int numStudents;
   int numcourses;
   int totalstudents=0;
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
    totalstudents=totalstudents+numStudents;
    int sum=0;
    double aver;
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
        sum=sum+mar;
        stud[j].setstudent(nam,mar,reg);
        cours[i].addstudent(stud[j],numStudents);
        cout<<"\n";
    }
    cours[i].order(numStudents);
    int index;
    for(int k=0;k<numStudents;k++)
    {
        int highest=stud[k].marks;
         index=k;
        if(highest<stud[k].marks)
        {
            highest=stud[k].marks;
            index=k;
        }
    }
    cours[i].high=stud[index];
    aver=sum/numStudents;
    cours[i].average=aver;
   }
   cout<<"\tHere is the result"<<endl;
   for(int i=0;i<numcourses;i++)
   {
    cout<<"\t\tCOURSE: "<<cors[i]<<"\n";
    cout<<"\tNumber of students enrolled: "<<cours[i].number<<endl;
    cout<<"\tStudent details \n";
    cours[i].printinfo();
    cout<<"\n\tthe average of this course is "<<cours[i].average;
    cout<<"\n\tthe student with the highest marks "<<endl;
    cours[i].outhigh();
    cout<<endl<<endl;
   }
   cout<<"Enter the registration number of student u want to find the courses enrolled: ";
   string registration;
   cin>>registration;
   for(int i=0;i<numcourses;i++)
   {
    cours[i].search(registration,cours[i].number);
   }
   cout<<"Courses enrolled"<<endl;
   for(int i=0;i<numcourses;i++)
   {
    if(cours[i].enrolled==true)
    {
        cout<<cors[i]<<"\t";
    }
   }
}