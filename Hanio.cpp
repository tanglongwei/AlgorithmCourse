#include<iostream>
using namespace std;
void move(char a,char b)
{
  cout<<a<<"---->"<<b<<endl;
}
void Hanoi(int n,char A,char B,char C)
{
  if(n==1){
    move(A,C);
  }
  else{
  Hanoi(n-1,A,C,B);
  move(A,B);
  Hanoi(n-1,B,A,C);
  }
}

int main()
{
  Hanoi(7,'A','B','C');
  return 0;
}
