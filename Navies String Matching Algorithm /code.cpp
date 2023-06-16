#include<iostream>
using namespace std;

int main()
{
    
int i, n, num, index,k=0;
cout<<"Enter size of array: ";
cin>>n;
int arr[n];
cout<<"Enter "<<n<<" Numbers:\n";
for(i=0; i<n; i++)
cin>>arr[i];
cout<<"\nEnter a Number to Search: ";
cin>>num;
for(i=0; i<n; i++)
{
if(arr[i]==num)
{
index = i;
k = 1;
break;
}
}
if (k=1)
cout<<"\nFound at Index = "<<index<<" and Position = "<<index+1<<endl;
else
cout<<"\nElement not found in the array";
return 0;
}
