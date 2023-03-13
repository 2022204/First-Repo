#include<iostream>
using namespace std;
class Numbers
{
    int x,y;
    friend class calculator;
    public:
    Numbers(int a, int b)
    {
        x = a;
        y = b;
    }
};
class calculator
{
    public:
    void add(Numbers a)
    {
        cout<<a.x+a.y<<endl;
    }
};

int main()
{
    Numbers a(9,10);
    calculator b;
    b.add(a);
}