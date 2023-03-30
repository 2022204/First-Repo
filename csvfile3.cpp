// #include<iostream>
// #include<fstream>
// using namespace std;

// int main()
// {
//     ifstream file("csvfile1.csv");
//     if(!file.is_open())
//     {
//         cout<<"Couldn't Open the file"<<endl;
//         return 1;
//     }

//     string searchName, searchRegno;
//     cout << "Enter student name or registration number to search: ";
//     cin >> searchName;

//     bool found = false;
//     string line;
//     while(getline(file,line))
//     {
//         // split the line into comma-separated values
//         stringstream ss(line);
//         string token;
//         getline(ss, token, ','); // get name
//         if (token == searchName)
//         {
//             found = true;
//             cout << "Name: " << token << endl;

//             getline(ss, token, ','); // get regno
//             cout << "Reg No: " << token << endl;

//             getline(ss, token, ','); // get marks1
//             cout << "Marks for Quiz 1: " << token << endl;

//             getline(ss, token, ','); // get marks2
//             cout << "Marks for Quiz 2: " << token << endl;

//             getline(ss, token, ','); // get marks3
//             cout << "Marks for Quiz 3: " << token << endl;

//             getline(ss, token, ','); // get mids
//             cout << "Mids Marks: " << token << endl;

//             getline(ss, token, ','); // get finals
//             cout << "Final Marks: " << token << endl;

//             break; // no need to search further
//         }

//         getline(ss, token, ','); // skip regno
//         getline(ss, token, ','); // skip marks1
//         getline(ss, token, ','); // skip marks2
//         getline(ss, token, ','); // skip marks3
//         getline(ss, token, ','); // skip mids
//         getline(ss, token, ','); // skip finals
//     }

//     if (!found)
//     {
//         cout << "Student not found" << endl;
//     }

//     file.close();
//     return 0;
// }