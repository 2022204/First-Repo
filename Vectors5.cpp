#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>nums1 = {1,2,3,4,3,2,1,4,5,6,6,4,5,3};
    vector<int>nums2 = {3,4,5,6,6,7,4,3,3,2,4,5,6,0};
    int size1 = nums1.size();
    int size2 = nums2.size();
    vector<int>result(0);
    for(int i = 0; i < size1;i++)
    {
        result.push_back(nums1[i] * nums2[i]);
    }
    for(auto i : result)
    {
        cout<<i<<"\t";
    }
    cout<<endl;
}