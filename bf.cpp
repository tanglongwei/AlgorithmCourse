#include<iostream>
#include<string.h>
using namespace std;
int bf(char s[],char t[])
{
    int i=0,j=0;
    while((i<strlen(s))&&(j<strlen(t)))
    {
        if(s[i]==t[j]){i++;j++;}
        else{
        i=i-j+1; j=0;
        }
    }
    if(j>=strlen(t))
    return(i-j);
    else
     return 0;

}
int main(){
  char s[]="ababcabccabccacbab";      //source string
  char t[]="abccac";     //destination string
  cout<<"In the index of "<<bf(s,t)<<" matched successful";
  return 0;
}
