#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
#include<string.h>
#define print_arr(arr, size){\
for(int i=0;i<size;i++)\
{   \
    std::cout<<arr[i]<<" ";\
}\
std::cout<<endl;}
   
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