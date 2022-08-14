//leetcode problems
#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;


class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        vector<int> r;

        vector<int>::iterator it, ls;
        //it  = r.begin();
    
        set_intersection(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(),  inserter(r, r.end()));

        //r.resize(ls - r.begin());

        //r.end() = ls;

        //for(it = r.begin(); it != ls; it++)
        //   cout << *it << "->";

        return r;
        
    }
};


int main()
{
    vector<int> v = {1, 3, 5};
    vector<int> v1 = {1, 3, 3, 5, 5};
    vector<int> r;

    Solution s1;
    r = s1.intersect(v, v1);

    for(int i=0; i<r.size(); i++)
        cout << r[i] << "->";




}
