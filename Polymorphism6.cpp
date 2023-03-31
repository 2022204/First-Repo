#include<iostream>
using namespace std;
typedef class A
{
    int x;
    public:
    A(){}
    A(int a)
    {
        x = a;
    }
    void display()
    {
        cout<<"X: "<<x<<endl;
    }
    A operator +(A B)
    {
        A temp;
        temp.x = x + B.x;
        return temp;
    }
    A operator -(A B)
    {
        A temp;
        temp.x = x - B.x;
        return temp;
    }
    A operator *(A B)
    {
        A temp;
        temp.x = x * B.x;
        return temp;
    }
}Cal;
int main()
{
    cout<<"Calculator"<<endl;
    while(true)
    {
        
    }
}