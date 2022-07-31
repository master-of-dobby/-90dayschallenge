//wcpp to find substring in a string is present or not?
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char a[] = "hello world";
    char b[] = "llo";

    char *temp;
    temp = strstr(a, b);

    if(temp)
        cout << "string is present from : " << temp[0];
    
    else
        cout << "string is not present!" << endl;
    
  

}
