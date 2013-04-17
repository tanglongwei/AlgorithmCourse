#include<iostream>
using namespace std;
// a rough one
int max(int a,int b,int c)
{
  cout<<a<<" "<<b<<" "<<c<<" "<<"    ";
  cout<<"max"<<  (  (  ( a>b ? a:b )>c)? (a>b ? a:b):c)<<endl;
  return  (  (  ( a>b ? a:b )>c)? (a>b ? a:b):c);
   
}

int MaxSum(int a[],int left,int right)
{
  if(left==right)
    return(a[left]);
  else
    {
      int center=(left+right)/2;
      int sum1=MaxSum(a,left,center);
      int sum2=MaxSum(a,center+1,right);
      int lefts=a[center];     //attention left can not be assigned 0 and then to compare
      for(int i=center-1;i>=0;i--)
	{
	  if(lefts+a[i]<lefts)
	    break;
	  else
	    lefts+=a[i];
	}
      int rights=a[center];
      for(int j=center+1;j<=right;j++)
	{
	  if(rights+a[j]<rights)
	    break;
	  else
	    rights+=a[j];
	}
      int sum3=lefts+rights-a[center];
      int sum=max(sum1,sum2,sum3);

      return sum;
    }

}

int main()
{
  int r[6]={-20,11,-4,13,-5,-2};
 
   int dd=MaxSum(r,0,5);

  //  cout<<"The Maximum-interval-sum is "<<dd<<" ;"<<endl;
  return 0;
}
