#include<bits/stdc++.h>
using namespace std;
void Insertion_sort(int a[], int n)
{
     int j, temp = 0;
     for(int i = 1; i < n; i++){
          temp = a[i];
          j = i - 1;
          while(j >= 0 && a[j] > temp){
               a[j+1] = a[j];
               j = j - 1;
          }
          a[j+1] = temp;
     }
}
int main()
{
     int t;
     cin >> t;
     while(t--){
          int n, temp, j;
          cin >> n;
          int a[n];
          for(int i = 0; i < n; i++){
               cin >> a[i];
          }
          Insertion_sort(a, n);
          for(int i = 0; i < n; i++){
               cout << a[i] << " ";
          }
          cout << endl;
     }
     return 0;
}
