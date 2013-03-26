#include<iostream>
using namespace std;

int Partition(int r[],int first,int end)  //书上的
{
  int i=first,j=end;
  while(i<j)
    {
      while(i<j && r[i]<r[j]) j--;
      if(i<j){
	int temp;
	temp=r[i];
	r[i]=r[j];
	r[j]=temp;
      }
      while(i<j && r[i]<=r[j]) i++;
      if(i<j){
	int temp;
	temp=r[i];
	r[i]=r[j];
	r[j]=temp;
	j--;      
      }
    }
  return i;
}

void QuickSort(int r[],int first,int end)
{
  int pivot;
  if(first<end){
    pivot=Partition(r,first,end);
    QuickSort(r,first,pivot-1);
    QuickSort(r,pivot+1,end);
  }
}

int main()
{
  int r[]={23,13,49,6,31,19,28};
  QuickSort(r,0,6);
  for(int i=0;i<7;i++)
    {
      cout<<r[i]<<" ";
    }


  return 0;
}
