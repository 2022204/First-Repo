#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
int main()
{
    cout<<"File Handling 1"<<endl<<endl;

    // Writing into a file
    ofstream out("file1.txt");
    string input = "Hasan Abbas\t 204\nAzhar afif\t 304";
    out<<input;
    out.close();

    //Reading from a file
    vector<string>sentence(0);
    ifstream p("file2.txt");
    bool condition = false;
    while(condition == false)
    {
        string s;
        getline(p,s);
        sentence.push_back(s);
        if(p.eof() == true)
        {
            condition = true;
        }
    }
    for(int i = 0; i < sentence.size(); i++)
    {
        cout<<sentence[i]<<endl;
    }
    p.close();


    condition;
    ifstream q("file2.txt");
    condition = false;
    ofstream arr("file3.txt");
    string s;
    while(condition == false)
    {
        getline(q,s);
        if(s != "3rd line" && s != "5th line")
        {
            arr<<s;
            arr<<endl;
        }
        if(q.eof() == true)
        {
            condition = true;
        }
    }
    arr.close();
    q.close();
   return 0;
}