#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>nums = {1,3,2,4,5,6,3,5,7};
    for(int i = 0; i < nums.size();i++)
    {
        for(int j = i; j < nums.size();j++)
        {
            if(nums[i] > nums[j])
            {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
    for(auto i : nums)
    {
        cout<<i<<"\t";
    }
    cout<<endl;
}