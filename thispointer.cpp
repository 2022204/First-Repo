#include<iostream>
using namespace std;
/*
"This" is a keyword which is a pointer which points to the objet which
invokes the member function
*/
class A
{
    int a;
    public:
        void setData(int a)
        {
            this->a = a;
        }
        void getData()
        {
            cout<<"The value of A is "<<this->a<<endl;
        }
};
int main()
{
    A a;
    a.setData(5);
    a.getData();
    return 0;
}