#include <iostream>
#include <math.h>
using namespace std;
typedef class A
{
    float x;

public:
    A() {}
    A(int a)
    {
        x = a;
    }
    float getx()
    {
        return x;
    }
    void display()
    {
        cout << "X: " << x << endl;
    }
    A operator+(A B)
    {
        A temp;
        temp.x = x + B.x;
        return temp;
    }
    A operator-(A B)
    {
        A temp;
        temp.x = x - B.x;
        return temp;
    }
    A operator*(A B)
    {
        A temp;
        temp.x = x * B.x;
        return temp;
    }
    A operator/(A b)
    {
        A temp;
        temp.x = x / b.x;
        return temp;
    }
    A operator<(A b)
    {
        A temp;
        if (x > b.x)
        {
            temp.x = x;
        }
        else
        {
            temp.x = b.x;
        }
        return temp;
    }
    void operator = (float a)
    {
        x = a;
    }
} Cal;
void Calculator_Bin(Cal *a, char b, float c)
{
    if (b == '+')
    {
        *a = *a + c;
    }
    else if (b == '-')
    {
        *a = *a - c;
    }
    else if (b == '*')
    {
        *a = *a * c;
    }
    else if (b == '/')
    {
        *a = *a / c;
    }
    else if (b == '<')
    {
        *a = *a < c;
    }
    else if (b == '>')
    {
        *a = *a < c;
    }
    else
    {
        cout << "Invalid operand" << endl;
        cout << "NO CHANGE" << endl;
    }
}
void Calculator_una(Cal *a, char c)
{
    float num;
    if(c == 's')
    {
        *a = *a * *a;
    }
    else if(c == 'r')
    {
        num = a->getx();
        *a = sqrt(num);
    }
    else if(c == 'c')
    {
        double n,d;
        cout<<"Enter Power(in terms of fraction)\n";
        cout<<"Enter numerator: ";
        cin>>n;
        cout<<"Enter Denominator: ";
        cin>>d;
        num = a->getx();
        *a = pow(num,n/d);
    }
    else
    {
        cout<<"Invalid Operator"<<endl;
        cout<<"NO CHANGE"<<endl;
    }
}
int main()
{
    cout << "Calculator" << endl;
    float num1, num2;
    int opt;
    cout << "Enter Number: ";
    cin >> num1;
    Cal ans(num1);
    cout << "Do you want to do (1)Binary\t(2) Unary" << endl;
    cin >> opt;
    int choice;
    if (opt == 1)
    {
        char c;
        while (true)
        {
            cout << num1 << endl;
            cout << "Enter Operator(+,-,*,/,<(shows greater number)): ";
            cin >> c;
            cout << "Enter Number: ";
            cin >> num2;
            Calculator_Bin(&ans, c, num2);
            cout << num1 << " " << c << " " << num2 << " = " << ans.getx() << endl;
            num1 = ans.getx();
            cout<<"Are u done here(1)Yes\t(2)No\n";
            cin>>choice;
            if(choice == 1)
            {
                break;
            }
        }
    }
    else if (opt == 2)
    {
        while(true)
        {
            char c;
            cout<<num1<<endl;
            cout<<"Enter Operand(s(square),r(Square root),c(custom power)): ";
            cin>>c;
            Calculator_una(&ans,c);
            cout<<num1<<" "<<c<<" = ";
            num1 = ans.getx();
            cout<<num1<<endl;
            cout<<"Are u done here(1)Yes\t(2)No\n";
            cin>>choice;
            if(choice == 1)
            {
                break;
            }
        }
    }
    return 0;
}
// while(true)
    // {
    //     int size;
    //     cout<<"How many number are we playing with?"<<endl;
    //     cin>>size;
    //     double ans = 0,num,opt;
    //     for(int i = 0; i < size ; i++)
    //     {
    //         cout<<"Number: ";
    //         cin>>num;
    //         cout<<"Choose from 1 of the 4 operands"<<endl;
    //         cout<<"(1)+\t(2)-\t(3)*\t(4)/"<<endl;
    //         cin>>opt;
    //         if(opt == 1)
    //         {
    //             cout<<ans<<" + "<<num<<" = ";
    //             ans  = ans + num;
    //             cout<<ans;
    //         }
    //         else if(opt == 2)
    //         {
    //             cout<<ans<<" - "<<num<<" = ";
    //             ans  = ans - num;
    //             cout<<ans;
    //         }
    //         else if(opt == 3)
    //         {
    //             cout<<ans<<" * "<<num<<" = ";
    //             ans  = ans * num;
    //             cout<<ans;
    //         }
    //         else if(opt == 4)
    //         {
    //             cout<<ans<<" / "<<num<<" = ";
    //             ans  = ans / num;
    //             cout<<ans;
    //         }
    //         else
    //         {
    //             cout<<"Invalid Option"<<endl;
    //             i--;
    //         }
    //         cout<<endl;
    //     }
    //     cout<<"Final Ans is "<<ans<<endl;
    // }