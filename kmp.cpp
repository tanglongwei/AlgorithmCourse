#include<iostream>
#include<string.h>
using namespace std;
void GetNext(char t[],int next[])
{
  next[1]=0;
  int k=0;  //j=1时的k值
  int j=1;
  while(j<strlen(t))
    {
      if(t[j]==t[k] || k==0  ) // k==0表示找不到相等的真前缀与真后缀
	{
	  next[j+1]=k+1;
	  k=next[j+1];        //记录k的值
	  j++;
	}else
	{
	k=next[k];
	}

}
}
int main()
{
  char s[]="ababcabccabccacbab";
  char d[]="abccac";
  char t[]="mabccac";  //传给GetNext的参数第一个字符是什么无所谓,GetNext函数内部从1开始计数
  int next[strlen(t)];  //存储next数组
  GetNext(t,next);      //调用GetNext
    for(int i=1;i<=strlen(t)-1;i++)    //输出next数组
    {
      cout<<next[i]<<endl;
    } 
  
  int i=0,j=0;    //i为源串索引,j为目标串索引
  while(i<strlen(s)&&j<strlen(d)) 
    {
      if(s[i]==d[j]){i++;j++;}
      else{
	int m=next[j+1];  //d中的下标从0开始,若从1开始则为第j+1项
	if(m==0){i++;}    
	else{
	  j=m-1;         //滑动到目标串的第m项
      }
    }
    }
  
      if(j==strlen(d))  //说明退出时目标串已比较完
	{
	  cout<<"matched successful at position "<<i-strlen(d)<<endl;
	}
      else{
	cout<<"matched unsuccessful"<<endl;
      }
  return 0;
    }
