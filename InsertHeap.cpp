#include<iostream>
using namespace std;
void InsertHeap(int r[],int k) // Already have k elements
{
  int i=k+1; //wait to be insert
  while(i!=1)// if i==1 ,the heap already have 0 element
    {
      int j=i/2;
      if(r[i]<r[j])
	break;
      else{
	int temp;
	temp=r[i];
	r[i]=r[j];
	r[j]=temp;
	i=j;
      }
    }
}

void apply(int r[],int n) 
{
  for(int i=0;i<=n-2;i++)
    {
      InsertHeap(r,i);
	}
}

int main()
{
  int r[6]={0,3,6,1,8,4};//the first element is special,index from 1,In accordance with the book
   for(int i=6;i>=1;i--)
    {
      apply(r,i);
      int temp;
      temp=r[0];
      r[0]=r[i];
      r[i]=temp;
    }
  
  apply(r,6);
  for(int i=0;i<=5;i++)
    {
      cout<<r[i]<<" "<<endl;
    }
  return 0;
}


