#include<bits/stdc++.h>
using namespace std;
int partition(int a[], int low, int high)
{
	int pivot = high;
	int index = low;
	while(low < high){
		if(a[low] < a[pivot]){
			swap(a[low], a[index]);
			index ++;
		}
		low ++;
	}
	swap(a[index], a[high]);
	return index;
}
void quick_sort(int a[], int low, int high)
{
	if(low < high)	{
		int pivot = partition(a, low ,high);
		quick_sort(a, low, pivot - 1);
		quick_sort(a, pivot + 1, high);
	}
}
int main()
{
     int t;
     cin >> t;
     while(t--){
	     int n;
     	cin >> n;
     	int a[n];
     	for(int i = 0; i < n; i++){
     		cin >> a[i];
          }
     	quick_sort(a, 0, n-1);
     	for(int i = 0; i < n; i++){
     		cout << a[i] << " ";
          }
     	cout << endl;
     }
	return 0;
}
