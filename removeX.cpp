//for complete problem refer to coding ninjas platform

void removeX(char *str)
{
    if(str[0]=='\0')
    {
        return;
    }
    if(str[0]=='x')
    {
        int i=1;
        for(;str[i]!='\0';i++)
        {
            str[i-1]=str[i];
        }
        str[i-1]=str[i];
        removeX(str);
    }else
    {
        removeX(str+1);
    }
}
