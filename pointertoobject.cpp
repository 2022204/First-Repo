#include<iostream>
using namespace std;
class Complex
{
    int real,imaginary;
    public:
        void getData()
        {
            cout<<"Real: "<<real<<"\tImaginary: "<<imaginary<<endl;
        }
        void setData(int a, int b)
        {
            real = a;
            imaginary  = b;
        }
};
int main()
{
    cout<<"Pointer to Objects"<<endl;
    // Complex c1;
    // Complex *ptr = new Complex;
    // c1.setData(2,3);
    // c1.getData();

    // ptr->setData(3,5);
    // ptr->getData();
    Complex *ptr = new Complex[3];
    Complex *temp = ptr;
    for(int i = 0 ; i < 3 ; i++)
    {
        int x ,y;
        x = i;
        y = i + i;
        ptr->setData(x,y);
        ptr = ptr + 1;
    }
    ptr = temp;
    for(int  i = 0 ; i < 3 ; i++)
    {
        ptr->getData();
        ptr = ptr + 1;
    }

    return 0;
}