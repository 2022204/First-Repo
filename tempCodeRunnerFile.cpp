typedef struct human
{
string asd;
int age;
string job;
}h;
int main()
{
    h has={"hasan",19,"Student"};
    h *ptr=&has;
    cout<<ptr->asd<<"\t"<<ptr->age<<"\t"<<ptr->job<<"\n";
}


union identification
{
    char asd;
    int rollno;
};
int main()
{
    identification s1;
    s1.asd='s';
    cout<<s1.asd<<endl;
    s1.rollno=222;
    cout<<s1.rollno<<endl;
    cout<<"asd "<<s1.asd<<endl;
}