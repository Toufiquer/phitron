#include <bits/stdc++.h>
using namespace std;
int main(){
    // ! create
    // vector <int> arr;
    // vector <int> arr(5); // int arr[5]
    // vector <int> arr(5,2); // int arr[5] = {2,2,2,2,2}
    // vector <int> arr({1,2,3,4,5,6});
    vector <int> arr = {0,1,2,3,4,5,6,7,8,9,10};
    // vector<int> arr2 = arr;
    // vector <int> arr2 = {4, 5, 6};

    // ! Add
    // arr.push_back(44); // add element to last-element

    // arr.begin();
    // arr.end();

    // arr.insert(arr.begin(), 2, 7); // arr.insert(position, times ,value); // begin() first/0 index // 7 will add 2 times
    // arr.insert(arr.begin(), 7); // arr.insert(position, value); // begin() first/0 index
    // arr.insert(arr.begin() + 2 , 7); // arr.insert(position, value); // here 2 is index
    // arr.insert(arr.end(), 7); // arr.insert(position, value); // end() last index
    // arr.insert(arr.end()-1, 7); // arr.insert(position, value); // end() before last index

    // ! Read
    // cout <<arr[2] << endl; // output the index no 2
    // cout << arr.front();
    // cout << arr.back();

    // for(auto i: arr){ // ! print all element
    //     cout << i << " ";
    // }

    // for(int i=0;i<arr.size();i++){ // ! print all element with index
    //     cout << i << " " << arr[i] << endl;
    // }

    // int *d = arr.data(); // it will create a new arr;

    // ! Update
    // arr[2] = 66;
    // arr.swap(arr2); 

    // ! Delete
    // arr.pop_back(); // delete last element
    // arr.erase(arr.begin()); // delete first element
    // arr.erase(arr.end()); // delete last element
    // arr.clear(); // delete all element of vertor
    arr.erase(arr.begin() + 2, arr.end() - 1); // arr.erase(startIndex, endIndex);
    // arr ->> 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
    // del ->>       2, 3, 4, 5, 6, 7, 8, 9

    for(auto i: arr){ // ! print all element
        cout << i << " ";
    }

    return 0;
}