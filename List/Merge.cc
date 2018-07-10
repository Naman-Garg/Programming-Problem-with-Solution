/*
     Write a program to merge two sorted list.
     for eg:
               input1: 1 3 5 7
               input2: 2 4 6
               output: 1 2 3 4 5 6 7
*/

#include<bits/stdc++.h>
using namespace std;
void merge(list < int > list3, list < int > list4)
{
     list < int > list5;
     list3.sort();
     list4.sort();
     int i = 0, j = 0, k, l;
     list <int> :: iterator  it1, it2;
     it1 = list3.begin();
     it2 = list4.begin();
     k = list3.size();
     l = list4.size();
     while(i < k && j < l){
          if(*it1 < *it2){
               list5.push_back(*it1);
               i++;
               it1++;
          }
          else{
               list5.push_back(*it2);
               j++;
               it2++;
          }
     }
     while(i < k){
          list5.push_back(*it1);
          i++;
          it1++;
     }
     while(j < l){
          list5.push_back(*it2);
          j++;
          it2++;
     }
     list <int> :: iterator  it;
     for(it = list5.begin(); it != list5.end(); it++){
          cout << *it << " " ;
     }
}
int main()
{
     int t;
     cin >> t;
     while(t--){
          int n1, n2, element;
          cin >> n1;
          list < int > list1;
          list < int > list2;
          for(int i = 0; i < n1; i++){
               cin >> element;
               list1.push_back(element);
          }
          cin >> n2;
          for(int i = 0; i < n2; i++){
               cin >> element;
               list2.push_back(element);
          }
          merge(list1, list2);
     }
     return 0;
}
