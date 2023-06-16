#include<iostream>
using namespace std;

int max(int a,int b)
{
     return (a>b)?a:b;
}

int main()
{

int w,weight[100],value[100],n;
cout<<"Enter no of items:";
cin>>n;

cout<<"Enter each weight and it's value:"<<endl;

for(int i=0;i<n;i++)
{
cout<<"item "<<(i+1)<<endl;
cin>>weight[i]>>value[i];
}

cout<<"Enter maximum weight:";
cin>>w;

int res[100][100];

for(int i=0;i<=n;i++)
{
    for(int j=0;j<=w;j++)
{
    if (i==0 || j==0)
res[i][j] = 0;
else if (weight[i-1] <= j)
res[i][j] = max(value[i-1] + res[i-1][j-weight[i-1]], res[i-1][j]);
else
res[i][j] = res[i-1][j];
}
}
cout<<"Maximum value for given weight:"<<res[n][w]<<endl;
}
