//for complete problem refer to coding ninjas platform

#include <cstring>
int stringToInteger(char *input,int last)
{
    if(last==0)
    {
        return input[last]-48;
    }
    int smallAns=stringToInteger(input,last-1);
    int a = input[last]-48;
    return smallAns*10+a;
}
int stringToInteger(char *str)
{
    int last=strlen(str)-1;
    return stringToInteger(str,last);
}
