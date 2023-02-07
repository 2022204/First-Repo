// #include<iostream>
// using namespace std;
// typedef struct human
// {
// string asd;
// int age;
// string job;
// }h;
// int main()
// {
//     h has={"hasan",19,"Student"};
//     h *ptr=&has;
//     cout<<ptr->asd<<"\t"<<ptr->age<<"\t"<<ptr->job<<"\n";
// }


// union identification
// {
//     char asd;
//     int rollno;
// };
// int main()
// {
//     identification s1;
//     s1.asd='s';
//     cout<<s1.asd<<endl;
//     s1.rollno=222;
//     cout<<s1.rollno<<endl;
//     cout<<"asd "<<s1.asd<<endl;
// }
// enum grade{A,B,C,D,F};
// int main()
// {
//     grade s1=A,s2=B,s3=C,s4=D,s5=F;
//     cout<<s1<<"\t";//0
//     cout<<s2<<"\t";//1
//     cout<<s3<<"\t";//2
//     cout<<s4<<"\t";//3
//     cout<<s5<<"\n";//4
//     int num;
//     cin>>num;
//     grade asd;
//     asd=(grade)num;
//     cout<<asd<<"\t";
//     if(asd==F)
//     cout<<"hi";
//     else 
//     cout<<"Hasd";
//     cout<<grade(A)<<endl;
//     return 0;
// }