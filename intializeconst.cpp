#include<iostream>
using namespace std;
class Test
{
    int a,b;
    public:
    // Test(int x, int y):a(x),b(y)
    // Test(int x, int y):a(x),b(y+a)
    // Test(int x, int y):a(x),b(2*x+y/2)
    Test(int x, int y):a(x),b(y+a)
    {
        cout<<"A: "<<a<<endl;
        cout<<"B: "<<b<<endl;
    }
};
int main()
{
    Test a(1,2);
    return 0;
}