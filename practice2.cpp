#include<iostream>
#include<math.h>
using namespace std;
class point
{
    public:
    double x,y;
    friend double distance(point a, point b);
    point(double x1,double y1)
    {
        x=x1;
        y=y1;
    }
    void output()
    {
        cout<<"point is ( "<<x<<" , "<<y<<" )"<<endl;
    }
};
double distance(point a, point b)
{
    double distx,disty;
    double dist;
    distx=a.x-b.x;
    disty=a.y-b.y;
    dist=sqrt((distx*distx)+(disty*disty));
    return dist;
}
int main()
{
    point a(0,0);
    point b(3,4);
    cout<<distance(a,b);
    return 0;
}