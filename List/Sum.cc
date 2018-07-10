/*
     Write a program to sum all the element in a list.
     for eg:
               input: 1 2 3 4 5
               output: 15
*/

#include<bits/stdc++.h>
using namespace std;
int sum1(list < int > list2)
{
     int sum = 0;
     list < int > :: iterator it;
     for(it = list2.begin(); it != list2.end(); it++){
          sum = sum + *it;
     }
     return sum;
}
int main()
{
     int t;
     cin >> t;
     while (t--){
          int n, element;
          cin >> n;
          list < int > list1;
          for(int i = 0; i < n; i++){
               cin >> element;
               list1.push_back(element);
          }
          cout << sum1(list1) << endl;
    }
    return 0;
}
