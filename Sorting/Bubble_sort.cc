#include<bits/stdc++.h>
using namespace std;
void Bubble_sort(int a[], int n)
{
     for(int i = 0; i < n; i++){
          for(int j = 0; j < n - i - 1; j++){
               if(a[j] > a[j+1])
                    swap(a[j], a[j+1]);
          }
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
          for(int  i = 0; i < n; i++){
               cin >> a[i];
          }
          Bubble_sort(a, n);
          for(int i = 0; i < n; i++){
               cout << a[i] << " ";
          }
          cout << endl;
     }
     return 0;
}
