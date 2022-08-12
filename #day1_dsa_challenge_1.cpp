//leetcode problems
#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        
        for(int i=0; i<nums.size()-1; i++)
            if(nums[i] == nums[i+1])
                return true;
        
        return false;
    }
};


int main()
{
    vector<int> v = {-2,1,-3,4,-1,2,1,-5,4};

    Solution s1;

    cout << s1.containsDuplicate(v) << endl;





  
   

}
