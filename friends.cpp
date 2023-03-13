#include<iostream>
using namespace std;
class Complex
{
int x,y;
// Required by friend function
friend Complex add_complex(Complex a, Complex b);
public:
    Complex(){}
    Complex(int a, int b)
    {
        x = a;
        y = b;
    }
    void output()
    {
        cout<<x<<" + "<<y<<"i"<<endl;
    }
    // Required By outside Function
    int getA(){
        return x;
    }
    int getB()
    {
        return y;
    }

    // Inside the class function that does the same job as Friend Function
    void adder_inside(Complex a, Complex b)
    {
        x = a.x+b.x;
        y = b.y + a.y;
    }
    
    //Inside yet outside
    void add_4(Complex a, Complex b);
};

// Friend Function
Complex add_complex(Complex a, Complex b)
{
    Complex ans(a.x+b.x , a.y+b.y);
    return ans;
}

//Outside Function that does the same job as Friend function
Complex adder_outside(Complex a, Complex b)
{
    int x,y;
    x = a.getA() + b.getA();
    y = a.getB() + b.getB();
    Complex ans(x,y);
    return ans;
}

//Inside declared function
void Complex :: add_4(Complex a, Complex b)
{
    x = a.x+b.x;
    y = a.y+b.y;
}
int main()
{
    Complex a(12,13);
    a.output();
    Complex b(23,24);
    b.output();
    cout<<endl;

// Using Friend Function
    Complex ans = add_complex(a,b);
    cout<<"Using Friend Function"<<endl;
    ans.output();

// Using Object itself
    Complex ans2;
    ans2.adder_inside(a,b);
    cout<<"Using Object itself"<<endl;
    ans2.output();

// Using outside function
    Complex ans3 = adder_outside(a,b);
    cout<<"Using Simple Function Outside Object"<<endl;
    ans3.output();

// Using inside declard function
    Complex ans4;
    ans4.add_4(a,b);
    cout<<"Inside Declared Function"<<endl;
    ans4.output();
}
