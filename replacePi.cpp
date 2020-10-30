//for complete problem refer to coding ninjas platform


#include <cstring>
void replacePi(char str[],int start)
{
    if(str[start]=='\0')
    {
        return;
    }
    replacePi(str,start+1);
    if(str[start]=='p' && str[start+1]=='i')
    {
        int len=strlen(str);
        for(int i=len;i>=start+2;i--)
        {
            str[i+2]=str[i];
        }
        str[start]='3';
        str[start+1]='.';
        str[start+2]='1';
        str[start+3]='4';
    }
}
void replacePi(char str[])
{
    replacePi(str,0);
}
