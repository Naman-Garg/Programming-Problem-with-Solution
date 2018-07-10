/*
     Write a program to print pallindrome alphabet pattern.
     for eg:
               input: 4
               output: A B C D C B A
                         B C D C B
                          C D C
                            D
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
          for(int i = 0; i < n; i++){
               for(int j = i; j > 0; j--){
                    cout << "  ";
               }
               for(int j = i; j < n - 1; j++){
                    cout << char('A' + j) << " ";
               }
               for(int j = n; j > i; j--){
                    cout << char('A' + j - 1) << " ";
               }
               for(int j = i; j > 0; j--){
                    cout << "  ";
               }
               cout << endl;
          }
          cout << endl;
     }
     return 0;
}
