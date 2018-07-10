/*
     Write a program to print diagonal.
     for eg:
               input:  3 3  //rows and column
                       1 2 3
                       4 5 6
                       7 8 9
              output: 7 4 8 1 5 9 2 6 3
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
          k = n - 1;
          while(k >= 0){
               i = k, j = 0;
               while(i < n && j < n){
                    cout << a[i][j] << " " ;
                    i++;
                    j++;
               }
               k--;
          }
          k = 0;
          while(k < m){
               i = 0, j = k + 1;
               while(i < n - k && j < m){
                    cout << a[i][j] << " ";
                    i++;
                    j++;
               }
               k++;
          }
          cout << endl;
     }
     return 0;
}
