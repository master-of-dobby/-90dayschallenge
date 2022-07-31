//wcpp for leetcode problems - easy
#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        /*
        char *p;
        int m = haystack.length();
        int n = needle.length();

        char h[m+1];
        char q[n+1];

        strcpy(h, haystack.c_str());
        strcpy(q, needle.c_str());

        p = strstr(h, q);

        int k = haystack.find(p);
        if(p)
            return k;
        else
            return -1;
        */

       int index = -1;

       index = haystack.find(needle);

       return index;
        
        
    }
};

int main()
{
    Solution s1;
    cout << s1.strStr("hello", "ll") << endl;

}
