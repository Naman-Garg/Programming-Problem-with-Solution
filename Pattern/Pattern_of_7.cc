/*
     Write a program to print following pattern.
     for eg:
               input:  4
               output: 7
                       14 15
                       28 29 30 31
                       56 57 58 59 60 61 62 63

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin >> t;
     while(t--){
          int n;
          cin >> n;
          int sum = 7, k = 0;
          for(int i = 0; i < n; i++){
                k = 0;
               for(int j = 1; j <= pow(2,i); j++){
                    if(j == 1){
                         sum = 7 * pow(2, i);
                    }
                    cout << sum + k << " ";
                    k++;
               }
               cout << endl;
          }
     }
     return 0;
}
