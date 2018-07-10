/*
     Write a program to print floyd traingle.
     for eg:
               input:  4
               output: 1
                       2 3
                       4 5 6
                       7 8 9 10
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin >> t;
     while(t--){
          int n, sum = 0;
          cin >> n;
          for(int i = 1; i <= n; i++){
               for(int j = 1; j <= i ; j++){
                    sum = sum + 1;
                    cout << sum << " ";
               }
               cout << endl;
          }
     }
     return 0;
}
