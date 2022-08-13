//leetcode problems
#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int i=0;
        vector<int> r;

        while(m--){
            r.push_back(nums1[i++]);
        }

        i=0;

        while(n--){
            r.push_back(nums2[i++]);
        }


        nums1 = r;
        r.clear();
        
        sort(nums1.begin(), nums1.end());
    }
};


int main()
{
    vector<int> v = {-2,1,-3,4,-1,2,1,-5,4};
    vector<int> v1 = {1, 3, 3, 5, 5};
    vector<int> r;

    Solution s1;

    s1.merge(v, 9, v1, 5);

    for(int i=0; i<v.size(); i++)
        cout << v[i] << " ";


}
