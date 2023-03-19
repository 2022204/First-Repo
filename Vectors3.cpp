#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cout << "Vectors\n";
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = nums.size();
    vector<int>result(0);
    for(int i = 0 ; i < size; i ++)
    {
        int sum = 0;
        for(int j = 0; j <= i ; j++)
        {
            sum = sum + nums[j];
        }
        result.push_back(sum);
    }
    for(auto i : result)
    {
        cout<<i<<"\t";
    }
    cout<<endl;
    return 0;
}