//for complete problem refer to coding ninjas platform

#include <cstring>
bool isPalindrome(char str[],int si,int ei)
{
    if(si==ei)
    {
        return true;
    }
    if(str[si]!=str[ei])
    {
        return false;
    }
    if(si<ei+1)
    {
        return isPalindrome(str,si+1,ei-1);
    }
    return true;
}
bool isPalindrome(char str[])
{
    int ei=strlen(str)-1;
    return isPalindrome(str,0,ei);
}
