#include<iostream>
using namespace std;
class Student
{
    protected:
    int roll_no;
    public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number()
    {
        cout<<"Roll No: "<<roll_no<<endl;
    }
};
class Test : virtual public Student
{
    protected:
    float maths,physics;
    public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks()
    {
        cout<<"Math: "<<maths<<endl
            <<"Physics: "<<physics<<endl;
    }
};
class Sports : virtual public Student
{
    protected:
    float score;
    public:
    void set_score(float sc)
    {
        score =sc;
    }
    void print_score()
    {
        cout<<"Score: "<<score<<endl;
    }
};
class Result : public Sports, public Test
{
    private:
        float total;
    public:
        void display()
        {
            total = maths + physics + score;
            print_number();
            print_marks();
            print_score();
            cout<<"Total: "<<total<<endl; 
        }
        void set_value()
        {
            float a,b;
            cout<<"Enter Roll No: ";
            cin>>a;
            set_number(a);
            cout<<"Enter Marks in Math: ";
            cin>>a;
            cout<<"Enter Marks in physics: ";
            cin>>b;
            set_marks(a,b);
            cout<<"Enter Score in Sports: ";
            cin>>a;
            set_score(a);
        }
};
int main()
{
    cout<<"Virtual Base Class"<<endl;
    Result hasan;
    hasan.set_value();
    hasan.display();
    return 0;
}