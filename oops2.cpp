#include<iostream>
#include<string.h>
using namespace std;
class student
{
int age;
string name;
string regno;
public :
student ()
{
    age=0;
    name="";
    regno="";
}
student(string a,int b,string c)
{
    age=b;
    name=a;
    regno=c;
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
    course cs101;
    course mt101;
    student s1("hasan",19,"204");
    student s2("Aqeel",20,"205");
    student s3("Mehdi",21,"206");
    cs101.addstudent(s1);
    cs101.addstudent(s2);
    cs101.addstudent(s3);
    mt101.addstudent(s1);
    mt101.addstudent(s2);
    mt101.printinfo();
    cs101.printinfo();

}