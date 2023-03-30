#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream file("csvfile1.csv" , ios::app);
    if(file.is_open() == false)
    {
        cout<<"Couldn't Open the file"<<endl;
        return 1;
    }
    string name, regno;
    double marks1, marks2, marks3, mids, finals, opt;
    while (true)
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Reg No(2022-204 format): ";
        cin >> regno;
        cout << "Enter Marks for Quiz 1: ";
        cin >> marks1;
        cout << "Enter Marks for Quiz 2: ";
        cin >> marks2;
        cout << "Enter Marks for Quiz 3: ";
        cin >> marks3;
        cout << "Enter Mids Marks: ";
        cin >> mids;
        cout << "Enter Final Marks: ";
        cin >> finals;
        file<<name<<","<<regno<<","<<marks1<<","<<marks2<<","<<marks3<<","<<mids<<","<<finals<<endl;
        cout << "Do you want to continue\n(1)Yes\t(2)No\n";
        cin >> opt;
        if (opt != 1)
        {
            break;
        }
    }
    file.close();

    ifstream files("csvfile1.csv");
    if(files.is_open() == false)
    {
        cout<<"Couldn't Open the file"<<endl;
        return 1;
    }
    string st;
    while(getline(files,st))
    {
        cout<<st<<endl;

    }
    file.close();
    return 0;
}