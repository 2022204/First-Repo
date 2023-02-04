#include<iostream>
#include<math.h>
using namespace std;
class plane
{
    public:
    double x1,y1,x2,y2;
    double distanceX()
    {
       return x2-x1; 
    }
    double distanceY();
    double distancetotal()
    {
        double a,b;
        a=distanceX();
        b=distanceY();
        a*=a;
        b*=b;
        double dist;
        dist=a+b;
        dist=sqrt(dist);
        return dist;
    }
};
double plane::distanceY()
{
    return y2-y1;
}
int main()
{
    plane distance;
    cout<<"Enter X coordinates of point 1: ";
    cin>>distance.x1;
    cout<<"Enter y coordinates of point 1: ";
    cin>>distance.y1;
    cout<<"The point is ( "<<distance.x1<<" , "<<distance.y1<<" )"<<endl;
    cout<<"Enter x coordinates of point 2: ";
    cin>>distance.x2;
    cout<<"Enter y coordinates of point 2: ";
    cin>>distance.y2;
    cout<<"The point is ( "<<distance.x2<<" , "<<distance.y2<<" )"<<endl;
    cout<<"The distance between the points are "<<distance.distancetotal()<<endl;
    return 0;
}