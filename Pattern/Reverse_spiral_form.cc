/*
     Write a program to print matrix in reverse spiral form.
     for eg:
               input:  3 3  //rows and column
                       1 2 3
                       4 5 6
                       7 8 9
              output:  5 4 7 8 9 6 3 2 1
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin >> t;
     while(t--){
          int n, m, i, j, k, p = 0;
          cin >> n >> m;
          int total = n * m;
          int a[n][m];
          int b[total] = {0};
          for(i = 0; i < n; i++){
               for(j = 0; j < m; j++){
                    cin >> a[i][j];
               }
          }
          p = 0;
          for(int k = 0; k <= n/2; k++){
               j = k;
               while(j < m - k){
                     b[p] = a[k][j];
                    j++;
                    p++;
               }
               i = k + 1;
               while(i < n - k){
                    b[p] = a[i][m - 1 - k];
                    i++;
                    p++;
               }
               j = m - 2 - k;
               while(j >= k){
                    b[p] = a[n - 1 - k][j];
                    j--;
                    p++;
               }
               i = n - 2 - k;
               while(i > k){
                    b[p] = a[i][k];
                    i--;
                    p++;
               }
          }
          int q = p;
          for(int q = p - 1; q >= 0; q--){
               cout << b[q] << " ";
          }
          cout << endl;
     }
     return 0;
}
