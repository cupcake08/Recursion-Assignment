//for complete problem refer to coding ninjas platform

#include <cstring>
void pairStar(char str[],int start=0)
{
  //base case
  if(str[start]=='\0')
  {
    return;
  }
  pairStar(str,start+1);
  if(str[start]==str[start+1])
  {
    int l=strlen(str);
    //extending STRING
    str[l+1]='\0';
    int i=l-1;
    for(;i>=start+1;i--)
    {
      str[i+1]=str[i];
    }
    //entering * between
    str[start+1]='*';

  }
}
