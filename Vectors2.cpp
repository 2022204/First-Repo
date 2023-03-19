#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cout << "Vectors\n";
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = nums.size();
    for (int i = 0; i < size; i++)
    {
        nums.push_back(nums[size - i - 1]);
    }
    for (int i = 0; i < size; i++)
    {
        nums.erase(nums.begin());
    }
    for (auto i : nums)
    {
        cout << i << "\t";
    }
    cout << endl;
}