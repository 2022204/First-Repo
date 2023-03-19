#include<iostream>
#include<vector>
using namespace std;
int main()
{
    cout<<"Vectors"<<endl;

    vector<int>nums(0);
    int option;
    int input;
    while(true)
    {
        cout<<"Do you want to add an element\n(1)Yes\t(2)No\n";
        cin>>option;
        if(option == 1)
        {
            cout<<"Enter number(int): ";
            cin>>input;
            nums.push_back(input);
        }
        else
        {
            break;
        }
    }
    for(auto i : nums)
    {
        cout<<i<<"\t";
    }
    cout<<endl;
    for(int i = nums.size()-1; i >= 0 ; i--)
    {
        if(nums[i]%2!=0)
        {
            nums.erase(nums.begin()+i);
        }
    }
    for(auto i : nums)
    {
        cout<<i<<"\t";
    }
    cout<<endl;
    return 0;
}