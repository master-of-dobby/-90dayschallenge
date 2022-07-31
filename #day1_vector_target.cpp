//leetcode 310722_2
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target){
        for(int i=0; i<nums.size(); i++)
            if(target == nums.at(i))
                return i;
        
           
        for(int i=0; i<nums.size(); i++)
            if((target < nums.at(i)))
                return i;
        
        
        return nums.size();
           
        
    }
};

int main()
{
    Solution s1;
    vector<int> v1 = {1,3,5,6};
    cout << s1.searchInsert(v1, 5) << endl;
    vector<int> v2 = {1,3,5,7};
    cout << s1.searchInsert(v2, 6) << endl;


    
}
