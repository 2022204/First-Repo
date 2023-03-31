#include<iostream>
using namespace std;
typedef class A
{
    double x, y;
    public:
    A(){}
    A(double a, double b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        
        cout<<"X: "<<x<<endl;
        cout<<"Y: "<<y<<endl<<endl;
    }
    A operator + (A B)
    {
        A temp;
        temp.x = x + B.x;
        temp.y = y + B.y;
        return temp;
    }
    A operator - (A B)
    {
        A temp;
        temp.x = x - B.x;
        temp.y = y - B.y;
        return temp;
    }
    A operator * (A B)
    {
        A temp;
        temp.x = x * B.x;
        temp.y = y * B.y;
        return temp;
    }
}Test;

int main()
{
    cout<<"Polymorphism\n";
    cout<<"Operator Overloading\n";
    Test a(20,30);
    cout<<"A"<<endl;
    a.display();

    Test b(30,45);
    cout<<"B"<<endl;
    b.display();

    Test c = a + b;
    cout<<"C = A+B"<<endl;
    c.display();

    Test d = a + b + c;
    cout<<"D = A+B+C"<<endl;
    d.display();

    Test e = d + b - c;
    cout<<"E = D+B-C"<<endl;
    e.display();

    Test f = a - b - c;
    cout<<"F = A-B-C"<<endl;
    f.display();
    return 0;
}