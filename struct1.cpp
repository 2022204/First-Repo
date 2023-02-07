#include<iostream>
using namespace std;
struct Address
{
string city;
int houseno;
string street;
};
struct human
{
string name;
int age;
Address addr;
};
void setaddress(human s)
{
    cout<<"Enter city: ";
    cin>>s.addr.city;
    cout<<"Enter house Number: ";
    cin>>s.addr.houseno;
    cout<<"Enter street: ";
    cin>>s.addr.street;
}
int main()
{
    cout<<"Structure"<<endl;
    human s1;
    cout<<"Enter name: ";
    cin>>s1.name;
    cout<<"Enter age: ";
    cin>>s1.age;
    setaddress(s1);
    return 0;
}