
#include<iostream>
#include<algorithm>
using namespace std;
struct Job
{
int id,profit,deadline;

};

bool compare(Job a,Job b)
{
return a.profit > b.profit;
}

void jobSequence(Job arr[],int n)
{
sort(arr,arr+n,compare);
int result[n];
bool slot[n];


for(int i=0;i<n;i++)
slot[i] = false;


for(int i=0;i<n;i++)
    {       
    
    for(int j=min(n,arr[i].deadline)-1;j>=0;j--)
    {
        if(slot[j] == false)
        {
            
        result[j] = i;
        slot[j] = true;
        break;
        
        }
    }
        
}
cout<<"Job Sequence with Deadline: ";

for(int i=0;i<n;i++)
if(slot[i])
cout<<arr[result[i]].id<<" ";

}

int main()
{
Job arr[] = {{1,60,3},{2,100,1},{3,20,1},{4,40,2}};
int n = sizeof(arr)/sizeof(arr[0]);
cout<<"size = "<<n;
jobSequence(arr,n);
return 0;
}
