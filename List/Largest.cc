/*
     Write a program to find largest element in a list.
     for eg:
               input: 1 6 3 5 4
               output: 6
*/

#include<bits/stdc++.h>
using namespace std;
int largest(list<int> list2)
{
     int largest = list2.front();
     list <int> :: iterator it;
     for(it = list2.begin(); it != list2.end(); it++){
          if(largest < *it)
               largest = *it;
     }
     return largest;
}
int main()
{
     int t;
     cin >> t;
     while (t--){
          int n, element;
          cin >> n;
          list <int> list1;
          for(int i = 0; i < n; i++){
               cin >> element;
               list1.push_back(element);
          }
          cout << largest(list1) << endl;
    }
    return 0;
}
