#include <iostream>
#include <algorithm>
using namespace std;
struct Job {
int id, profit;
};
bool cmp(Job a, Job b) {
return a.profit > b.profit;
}
void findJobSequence(Job arr[], int n) {
sort(arr, arr + n, cmp);
int result[n];
bool slot[n];
for (int i = 0; i < n; i++) {
slot[i] = false;
}
for (int i = 0; i < n; i++) {
for (int j = min(n, i+1) - 1; j >= 0; j--) {
if (slot[j] == false) {
result[j] = i;
slot[j] = true;
break;
}} }
for (int i = 0; i < n; i++) {
if (slot[i]) {
cout << arr[result[i]].id << " ";
} } }
int main() {
Job arr[] = {{1, 60}, {2, 100}, {3, 20}, {4, 40}};
int n = sizeof(arr)/sizeof(arr[0]);
cout<<"Job Sequence with Deadline: ";
findJobSequence(arr, n);
return 0;
}
