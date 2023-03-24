#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
int main()
{
    cout<<"File Handline\n";
    // ifstream c("file1.txt");
    // string s;
    // getline(c,s);
    // cout<<s;
    // ofstream a("file1.txt");
    // cout<<"Enter your name: ";
    // string name;
    // getline(cin,name);

    // a<<"My name is " + name;

    // a.close();

    // ifstream b("file1.txt");
    // string content;
    // getline(b,content);
    // cout<<"The content of this file is: "<<content;
    // b.close();

    ofstream out;
    out.open("file1.txt");
    out<<"This is me";
    out<<"\nThis is me also";
    out<<"\nthis is not me";
    out<<"\nThis is me";
    out.close();

    ifstream in;
    string st;
    in.open("file1.txt");
    vector<string>lines(0);
    while(in.eof() == 0)
    {
        getline(in,st);
        lines.push_back(st);
    }

    for(auto c : lines)
    {
        cout<<c<<endl;
    }
    in.close();


    return 0;
}