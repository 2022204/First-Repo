#include <iostream>
using namespace std;
int main()
{
    FILE *file = fopen("csvfile1.csv", "a");
    if (file == NULL)
    {
        cout << "Couldn't Open the file" << endl;
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
        fprintf(file,"%s,%s,%f,%f,%f,%f,%f\n",name.c_str(), regno.c_str(), marks1, marks2, marks3, mids, finals);
        cout << "Do you want to continue\n(1)Yes\t(2)No\n";
        cin >> opt;
        if (opt != 1)
        {
            break;
        }
    }
    fclose(file);
    
    return 0;
}