#include<bits/stdc++.h>

using namespace std;

int main(){
    // list<int> lName; // empty list
    list<int> lName(10,3); // total 10 element, each element value is 3
    list<int> l2 = {1, 2, 3, 4, 5};

    int a[] = {6, 7, 8};
    list<int> la(a, a + 3);

    vector<int> v = {11, 12, 13};
    list<int> lv(v.begin(), v.end());

    cout << lv.size() << endl;
    lv.insert(next(lv.begin(), 2), 300);
    lv.insert(next(lv.begin(), 2), l2.begin(),l2.end());
    // cout << lName.size() << endl; // return size
    // cout << *lName.begin() << endl; // return first element
    // cout << *lName.end() << endl; // return last element

    // for (auto it = lName.begin(); it != lName.end();it++){
    //     cout << *it << endl;
    // }

    // for(auto val:lName){
    //     cout << val << endl;
    // }

    // for(auto it: l2){
    //     cout << it << endl;
    // }


    // for(auto it: la){
    //     cout << it << endl;
    // }
        return 0;
}


