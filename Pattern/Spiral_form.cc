/*
     Write a program to print matrix in spiral form.
     for eg:
               input:  3 3  //rows and column
                       1 2 3
                       4 5 6
                       7 8 9
              output:  1 2 3 6 9 8 7 5
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin >> t;
     while(t--){
          int n, m, i, j, k;
          cin >> n >> m;
          int a[n][m];
          for(i = 0; i < n; i++){
               for(j = 0; j < m; j++){
                    cin >> a[i][j];
               }
          }
          for(int k = 0; k <= n/2; k++){
               j = k;
               while(j < m - k){
                    cout << a[k][j] << " ";
                    j++;
               }
               i = k + 1;
               while(i < n - k){
                    cout << a[i][m - 1 - k] << " ";
                    i++;
               }
               j = m - 2 - k;
               while(j >= k){
                    cout << a[n - 1 - k][j] << " ";
                    j--;
               }
               i = n - 2 - k;
               while(i > k){
                    cout << a[i][k] << " ";
                    i--;
               }
          }
          cout << endl;
     }
     return 0;
}
