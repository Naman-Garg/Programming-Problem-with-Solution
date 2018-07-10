/*
     Write a program find middle element in a list.
     for eg:-
               input: 1 2 3 4 5
               output: 3
               input: 1 2 3 4 5 6
               output: 3 4

*/

#include<bits/stdc++.h>
using namespace std;
void middle(list <int> list2)
{
     int middle1 = 0,i=0;
     int size = list2.size();
     list <int> :: iterator it;
     if (size % 2 != 0){
          middle1 = size / 2;
          for(it = list2.begin(),i=0; i!=middle1; it++,i++);
                    cout << *it << endl << endl;
          }
     else{
          middle1 = size / 2;
          for(it = list2.begin(),i=0; i!=middle1; it++,i++);
                    cout << *it << endl;
          it++;
          cout << *it << endl << endl;
     }
}
int main()
{
     int t;
     cin >> t;
     while(t--){
          int element;
          char ch = 'y';
          list <int> list1;
          while(ch == 'y'){
               cin >> element;
               list1.push_back(element);
               cin >> ch;
          }
          middle(list1);
     }
     return 0;
}
