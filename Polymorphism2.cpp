#include<iostream>
using namespace std;
class Complex
{
    int real;
    int imaginary;
    public:
        Complex()
        {

        }
        Complex(int a, int b)
        {
            real = a;
            imaginary = b;
        }
        Complex operator + (Complex a)
        {
            Complex temp;
            temp.real = real  + a.real;
            temp.imaginary = imaginary  + a.imaginary;
            return temp;
        }
        Complex operator - (Complex a)
        {
            Complex temp;
            temp.real = real  - a.real;
            temp.imaginary = imaginary  - a.imaginary;
            return temp;
        }
        Complex operator * (Complex a)
        {
            Complex temp;
            temp.real = real  * a.real - imaginary * a.imaginary;
            temp.imaginary = imaginary * a.real  + a.imaginary * real;
            return temp;
        }
        Complex operator ++()
        {
            Complex temp;
            temp.real = real  + 1;
            temp.imaginary = imaginary  + 1;
            return temp;
        }
        void display()
        {
            cout<<real<<" + "<<imaginary<<"i "<<endl;
        }
        ~Complex()
        {
            cout<<"Destructor Called"<<endl;
        }
};
int main()
{
    Complex a(1,2);
    Complex b(3,4);
    Complex c = a + b;
    c.display();
    c = a - b;
    c.display();
    c = a * b;
    c.display();
    c= (++a) + (++b);
    c.display();
    return 0;
}
