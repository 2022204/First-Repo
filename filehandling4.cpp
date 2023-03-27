#include <iostream>
#include <fstream>
#include <vector>
#include <cctype>
#include <string.h>
using namespace std;
int main()
{
    cout << "File Handling" << endl
         << endl;
    string word;
    cout << "Enter the word: ";
    cin >> word;
    string p = word;
    for(int i = 0; i < word.length(); i++)
    {
        word[i] = tolower(word[i]);
    }
    ifstream file("file1.txt");
    if(!file.is_open())
    {
        cout<<"Could Not open file"<<endl;
        return 1;
    }
    int line = 1;
    vector<int> index(0);
    vector<int> lines(0);
    vector<int> num_line(0);
    int line_count = 0;
    int count = 0;
    string st;
    int length = word.length();
    bool condition = true;
    while (file.eof() == 0)
    {
        getline(file, st);
        for (int i = 0; i < st.length(); i++)
        {
            condition = true;
            for (int j = i; j < i + length; j++)
            {
                st[j] = tolower(st[j]);
                if (st[j] != word[j - i])
                {
                    condition = false;
                    break;
                }
            }
            if (condition == true)
            {
                if (i != 0)
                {
                    if (!isalpha(st[i - 1]) && !isalpha(st[i + length]))
                    {
                        line_count++;
                        count++;
                        index.push_back(i);
                        lines.push_back(line);
                    }
                }
                else
                {
                    if (!isalpha(st[i + length]))
                    {
                        line_count++;
                        count++;
                        index.push_back(i+1);
                        lines.push_back(line);
                    }
                }
                num_line.push_back(line_count);
                line_count = 0;
            }
        }
        line++;
    }
    cout << "The word \"" << p << "\" Details" << endl;
    cout << "Count: " << count << endl;
    for(int i = 0; i < lines.size();i++)
    {
        cout<<"Line: "<<lines.at(i)<<"\tIndex: "<<index.at(i)<<endl;
    }
    cout << endl;
    return 0;
}