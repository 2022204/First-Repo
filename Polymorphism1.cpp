#include<iostream>
using namespace std;
class Base
{
    public:
    int Base_x;
    void show()
    {
        cout<<"Base X: "<<Base_x<<endl;
    }
};
class Derived : public Base
{
    public:
    int D_x;
    void show()
    {
        cout<<"Derived X: "<<D_x<<endl;
    }
};
int main()
{
    Derived dobj;
    Base * bptr = & dobj;
    bptr->Base_x = 2;
    bptr->show();
    cout<<endl;
    Derived * dptr = &dobj;
    dptr->D_x = 3;
    dptr->show();
}