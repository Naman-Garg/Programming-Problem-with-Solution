#include<bits/stdc++.h>
using namespace std;
void Selection_sort(int a[], int n)
{
     int min_index = 0;
     for(int i = 0; i < n; i++){
          min_index = i;
          for(int j = i + 1; j < n; j++){
               if(a[min_index] > a[j])
                    min_index = j;
          }
          swap(a[min_index], a[i]);
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
          Selection_sort(a, n);
          for(int i = 0; i < n; i++){
               cout << a[i] << " ";
          }
          cout << endl;
     }
     return 0;
}
