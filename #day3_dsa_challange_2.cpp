//leetcode problems
#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;


class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int min_s = prices[0], max_p = 0, dif = 0;
        min(prices[0], prices[1]);

        for(int i=1; i<prices.size(); i++){

            if(min_s > prices[i])
                min_s = prices[i];
            

            if(max_p < prices[i] - min_s)
                 max_p = prices[i] - min_s;
            
            
        }

        return max_p;

        
    }
};

int main()
{
    vector<int> v = {7,1,5,3,6,4};
    vector<int> v1 = {7,6,4,3,1};
    vector<int> r;

    Solution s1;
    cout << s1.maxProfit(v) << endl;


    //for(int i=0; i<r.size(); i++)
      //  cout << r[i] << "->";




}



/* ----------- TLE ---------------                  ;(

//leetcode problems
#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;


class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int dif = 0;

        for(int i=0; i<prices.size()-1; i++){
            for(int j=i+1; j<prices.size(); j++){
                if((prices[j] - prices[i]) > dif)
                    dif = prices[j] - prices[i];

            }
        }

        return dif;
        
    }
};

int main()
{
    vector<int> v = {7,1,5,3,6,4};
    vector<int> v1 = {7,6,4,3,1};
    vector<int> r;

    Solution s1;
    cout << s1.maxProfit(v1) << endl;


    //for(int i=0; i<r.size(); i++)
      //  cout << r[i] << "->";




} */
