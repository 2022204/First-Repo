#include <iostream>
using namespace std;
class Test
{
    int x;

public:
    void get()
    {
        cin >> x;
    }

    void operator==(Test t2)
    {
        if (x == t2.x)
        {
            cout << "OBjects are equal" << endl;
        }
        else
        {
            cout << "THe objects are not equal" << endl;
        }
    }
};
int main()
{
    Test t1, t2;
    cout << "Enter Value for t1" << endl;
    t1.get();
    cout << "Enter Value for t2" << endl;
    t2.get();

    t1 == t2;
}
