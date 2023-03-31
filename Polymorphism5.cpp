#include<iostream>
using namespace std;
typedef class A
{
    int x,y,z;
    public:
        A(){}
        A(int a, int b,int c)
        {
            x = a;
            y = b;
            z = c;
        }
        void display()
        {
            cout<<"X: "<<x<<endl;
            cout<<"Y: "<<y<<endl;
            cout<<"Z: "<<z<<endl;
            cout<<endl;
        }
        void operator ++()
        {
            x++;
            y++;
            z++;
        }
}unary;
int main()
{ 
    unary a(3,4,5);
    a.display();
    
    ++a;
    a.display();
    return 0;
}