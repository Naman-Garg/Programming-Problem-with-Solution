/*
     Write a program to print floyd traingle.
     for eg:
               input:  4
               output: 10 9 8 7
                       6 5 4
                       3 2
                       1
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
          for(int i = n; i > 0; i--){
               sum = sum + i;
          }
          for(int i = n; i > 0; i--){
               for(int j = 0; j < i; j++){
                    cout << sum << " ";
                    sum = sum - 1;
               }
               cout << endl;
          }
     }
     return 0;
}
