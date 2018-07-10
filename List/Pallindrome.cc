/*
     Write a program to check whether a list is a pallindrome or not.
     for eg:
               input: 1 2 3 2 1
               output: pallindrome
               input: 1 2 3 4 5
               output: Not pallindrome
*/

#include<bits/stdc++.h>
using namespace std;
void pallindrome(list < int > list2)
{
     int flag = 0;
     int size = list2.size();
     list <int> :: iterator itb;
     list <int> :: iterator itl;
     itb = list2.begin();
     itl = list2.end();
     itl--;
     int i = 0;
     int j = list2.size() - 1;
     while(i <= j){
          if(*itb != *itl){
               flag = 1;
               break;
          }
          else{
               itb++;
               itl--;
               i++;
               j--;
          }
     }
     if(flag == 1)
          cout << "Not pallindrome" << endl;
     else
          cout << "pallindrome" << endl;

}
int main()
{
     int t;
     cin >> t;
     while (t--) {
          int n, element;
          cin >> n;
          list < int > list1;
          for(int i = 0; i < n; i++){
               cin >> element;
               list1.push_back(element);
          }
          pallindrome(list1);
     }
     return 0;
}
