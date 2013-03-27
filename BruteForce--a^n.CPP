#include<iostream>
using namespace std;
int main()
{
  int k=1;
  int a,n;
  cout<<"input a and n : "<<endl;
  cin>>a>>n;
  for(int i=1;i<=n;i++)
    {
      k=k*a;
    }
  cout<<"The result of "<<a<<"^"<<n<<" is:"<<k<<endl;
  return 0;
}
