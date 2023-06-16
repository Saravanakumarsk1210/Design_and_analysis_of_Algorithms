#include<bits/stdc++.h> 
using namespace std; 

int main()
{
 int a,b,k,p;
 cout<<"T(n) = aT(n/b) + f(n)\n";
 cout<<"Enter T(n) = aT(n/b) + (n^k*(log n)^p) \n"<<"a,b,k,p"<<"\n"; 
 cin>>a>>b>>k>>p;
 int x = pow(b,k);
 float y = (log(a) / log(b));
 if(a>x)
 {
  cout<<"Case 1:\nT(n) = O(n^"<<y<<")\n";
 }
 else if(a==x)
 {
  if(p<-1)
    cout<<"Case 2c:"<<"\nT(n) = O(n^"<<y<<")\n"; 
  else if(p==-1)
    cout<<"Case 2b:\nT(n) = O(n^"<<y<<"(log n)^2)\n"; 
  else if(p>-1)
    cout<<"Case 2a:\nT(n) = O(n^"<<y<<"(log n)^"<<(p+1)<<")\n";
 }
 else
 {
  if(p>=0)
    cout<<"Case 3a:\nT(n) = O(n^"<<k<<"(log n)^"<<p<<")\n"; 
  else if(p<0)
    cout<<"Case 3b:\nT(n) = O(n^"<<k<<")\n";
 }
 return 0;
}
