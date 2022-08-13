//leetcode problems
#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
        vector<int> r;
        unordered_map<int, int> m;

        for(int i=0; i<nums.size(); i++){

            if(m.find(target-nums[i]) != m.end()){
                r.push_back(i);
                r.push_back(m[target-nums[i]]);

                return r;
            }
            
            m[nums[i]] = i;
        }

        return r;
    }
};


int main()
{
    vector<int> v = {-2,1,-3,4,-1,2,1,-5,4};
    vector<int> v1;

    Solution s1;

    v1 = s1.twoSum(v, 3);

    for(int i=0; i<v1.size(); i++)
        cout << v1[i] << " ";


}
