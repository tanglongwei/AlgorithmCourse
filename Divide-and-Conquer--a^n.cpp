#include<iostream>
#include<math.h>
using namespace std;

int exponentiation(int a,double n)
{
  if(n==1)
    return a;
  else
    return exponentiation(a,ceil(n/2))*exponentiation(a,floor(n/2));

}

int main()
{
  double n=3;
  int a=2;
  cout<<"input integer a and double n :"<<endl;
  cin>>a>>n;
  cout<<"The result of "<<a<<"^"<<n<<" is: "<<exponentiation(2,3.0)<<endl;
  return 0;
}
