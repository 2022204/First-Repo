#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>nums = {1,2,3,4,3,2,1,4,5,6,6,4,5,3};
    int size = nums.size();
    int num;
    for(int i = 0; i < nums.size(); i++)
    {
        num = nums[i];
        for(int j = nums.size()-1; j > i;j--)
        {
            if(nums[j] == num)
            {
                nums.erase(nums.begin()+j);
            }
        }
    }
    for(auto i : nums)
    {
        cout<<i<<"\t";
    }
    cout<<endl;
    return 0;
}