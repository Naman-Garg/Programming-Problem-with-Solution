/*
     Write a program to print alphabet pattern.
     for eg:
               input: 5
               output: A B C D E D C B A
                       A B C D   D C B A
                       A B C       C B A
                       A B           B A
                       A               A
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
          for(int k = 0; k < n; k++){
               for(int i = 0 ; i < n - k; i++){
                    cout << char('A' + i) << " ";
               }
               for(int j = 0 ; j < 2 * k - 1; j++){
                    cout << "  ";
               }
               if(k == 0){
                    for(int i = n - k - 2; i >= 0; i--){
                         cout << char('A' + i) << " ";
                    }
               }
               else{
                    for(int i = n - k - 1; i >= 0; i--){
                         cout << char('A' + i) << " ";
                    }
               }
               cout << endl;
          }
     }
     return 0;
}
