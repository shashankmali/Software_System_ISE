/*This program finds prime number*/
#include<iostream>
using namespace std;
bool prime(int a)
{  
   for(int i=2;i<=a/2;i++)
   {   
     if(a%i==0)
     {
        return 0;
        break;
     }   
   }
   return 1;
}

int main()
{ int start,end,count=0;
   cout<<"Enter the start and the end number"<<endl;
   cin>>start>>end;
  for(int j=start;j<end;j++)
  {
    if(prime(j))
    {   count++;
        cout<<j<<endl;
    }
  }
  cout<<"There are "<<count<<" numbers of prime numbers in the given range"<<endl;
  return 0;
}
