#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

bool verifyPrime(int n){
    if(n == 0 || n == 1)
        return false;
    for(int i=2; i<n; i++) {
        if(n%i==0)
            return false;
    }

    return true;
}

int main()
{
  int T, no;
  cin>>T;
  while(T--)
  {
    cin>>no;
    if (verifyPrime(no))
      cout<<"PRIME"<<endl; 
    else 
      cout<<"NOT PRIME"<<endl; 
  }
  return 0;
}