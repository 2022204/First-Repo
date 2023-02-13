#include<iostream>
#include<string.h>
#define print_arr(arr, size)\
for(int i=0;i<size;i++)\
{   \
    std::cout<<arr[i]<<" ";\
}\
std::cout<<endl;
#define print(a) \
{ \
    std::cout<<a<<endl;\
}
using namespace std;
int main()
{
    cout<<"Hi"<<endl;
    int array1[6]={1,2,3,4,5,6};
    string array2[5]={"As","sd","df","fg","gh"};
    char array3[4]={'a','v',';','['};
    double array4[5]={1,2.2,3.3,4,5.5};
    print_arr(array1,6);
    print_arr(array2,5);
    print_arr(array3,4);
    print_arr(array3,3);
    print_arr(array4,5);
    print("Come here\n");
    print(123);
    print('A');
    print(true);
    print(2.34);
    return 0;
}
