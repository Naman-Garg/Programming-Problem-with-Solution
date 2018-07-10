/*
     Write a program to print alternate diagonal.
     for eg:
               input:  3 3  //rows and column
                       1 2 3
                       4 5 6
                       7 8 9
              output: 7 3 4 8 2 6 1 5 9
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin >> t;
     while(t--){
          int n, m, i, j, k, i1, j1;
          cin >> n >> m;
          int a[n][m];
          for(i = 0; i < n ; i++){
               for(j = 0; j < m; j++){
                    cin >> a[i][j];
               }
          }
          k = n - 1;
          while(k >= 0){
               i = k, j = 0;
               i1 = k, j1 = 0;
               while(i < n && j < m){
                    cout << a[i][j] << " ";
                    i++;
                    j++;
               }
               if(k != 0){
                    while(i1 < n &&  j1 < m){
                         cout << a[j1][i1] << " ";
                         i1++;
                         j1++;
                    }
               }
               k--;
          }
          cout << endl;
     }
     return 0;
}
