#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
#include<string.h>
using namespace std;
class student
{
    public:
int marks;
char regno;
float percentage;
string name;
void output()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Marks: "<<marks<<endl;
    cout<<"RegNo: "<<regno<<endl;
    cout<<"Percentage: "<<percentage<<endl;
}
};
#endif