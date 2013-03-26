#include<iostream>
using namespace std;

int main()
{
  int r[]={23,13,49,6,31,19,28};
  for(int i=0;i<=5;i++)
    for(int j=i+1;j<=6;j++)
      {
	if(r[j]<r[i]){
	int temp;
	temp=r[j];
	r[j]=r[i];
	r[i]=temp;
	}
      }

  for(int k=0;k<=6;k++)
    {
      cout<<r[k]<<" ";
    }
  return 0;
}
