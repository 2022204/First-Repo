#include<iostream>
using namespace std;
class complex
{
    public:
    double x,y;
    void setcomplex(double a, double b)
    {
        x=a;
        y=b;
    }
    void output()
    {
        if(y>=0)
        cout<<x<<"+"<<y<<"i "<<endl;
        else
        cout<<x<<y<<"i "<<endl;
    }
    friend complex add(complex q, complex w);
    friend complex sub(complex q, complex w);
    friend complex pro(complex q, complex w);
};
complex add(complex q, complex w)
{
    complex c;
    c.setcomplex((q.x+w.x),(q.y+w.y));
    return c;
}
complex sub(complex q, complex w)
{
    complex c;
    c.setcomplex((q.x-w.x),(q.y-w.y));
    return c;
}
complex pro(complex q, complex w)
{
    complex c;
    c.x=q.x*w.x-q.y*w.y;
    c.y=q.x*w.y+w.x*q.y;
    return c;
}
complex quo(complex q,complex w)
{
    complex c;
    double quo;
    quo=w.x*w.x+w.y*w.y;
    c.x=(q.x*w.x+q.y*w.y)/quo;
    c.y=((q.x*w.y*-1)+(w.x*q.y))/quo;
    cout<<c.x<<endl;
    cout<<c.y<<endl;
    return c;
}
int main()
{
    complex a1,a2;
    cout<<"Enter real part: ";
    cin>>a1.x;
    cout<<"Enter imaginery part: ";
    cin>>a1.y;
    a1.output();
    cout<<"Enter real part: ";
    cin>>a2.x;
    cout<<"Enter imaginery part: ";
    cin>>a2.y;
    a2.output();
    cout<<"Enter the operand: ";
    char opr;
    cin>>opr;
    complex ans;
    switch(opr)
    {
        case '+':
                ans=add(a1,a2);
                ans.output();
                break;
        case '-':
                ans=sub(a1,a2);
                ans.output();
                break;
        case '*':
                ans=pro(a1,a2);
                ans.output();
                break;
        case '/':
                ans=quo(a1,a2);
                ans.output();
                break;
        default:
                cout<<"invalid operation"<<endl;
            break;
    }
    return 0;
}