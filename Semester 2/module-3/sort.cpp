#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  { 
    cin >> arr[i]; 
  }
  // sort(arr, arr + n + 1); // ! asc
  // sort([first element of arr], [last element of arr + 1])
  // it only sort before last element, so we have to add 1 to last element
  sort(arr, arr + n, greater<int>()); // ! dsc 
  for (int i = 0; i < n; i++)
  { 
    cout << arr[i] << " ";
  }

    return 0;
}