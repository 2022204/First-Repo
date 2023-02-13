#include "practice3.h"
#include <iostream>
using namespace std;
int main()
{
    student a;
    a.name="hasan";
    a.marks=99;
    a.regno='a';
    a.percentage=91.2;
    a.output();
    int array1[6]={1,2,3,4,5,6};
    string array2[5]={"As","sd","df","fg","gh"};
    char array3[4]={'a','v',';','['};
    double array4[5]={1,2.2,3.3,4,5.5};
    print_arr(array1,5);
    print_arr(array2,5);
    print_arr(array3,4);
    print_arr(array3,3);
    print_arr(array4,5);
    return 0;
}