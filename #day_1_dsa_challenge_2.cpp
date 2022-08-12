//leetcode problems
#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum_g = 0, sum_a = 0;


        for(int i=0; i<nums.size(); i++){
            sum_g += nums[i];

            if(sum_g > sum_a)
                sum_a = sum_g;
            
            if(sum_g < 0)
                sum_g = 0;

        }
        
        return sum_a;
        
    }
};



int main()
{
    vector<int> v = {-2,1,-3,4,-1,2,1,-5,4};

    Solution s1;

    cout << s1.maxSubArray(v) << endl;





  
   

}//leetcode problems
#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum_g = 0, sum_a = 0;


        for(int i=0; i<nums.size(); i++){
            sum_g += nums[i];

            if(sum_g > sum_a)
                sum_a = sum_g;
            
            if(sum_g < 0)
                sum_g = 0;

        }
        
        return sum_a;
        
    }
};



int main()
{
    vector<int> v = {-2,1,-3,4,-1,2,1,-5,4};

    Solution s1;

    cout << s1.maxSubArray(v) << endl;





  
   

}
