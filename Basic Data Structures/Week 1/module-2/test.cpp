#include<bits/stdc++.h>
using namespace std;

int main(){
    // !
    // vector<int> v; // type 1
    // vector<int> v(5,0); // type 2
    // vector<int> v(5,0); // type 3
    // vector<int> v2(v); // type 4

    // int a[4] = {1,2,3,4}; // type 5-
    // vector<int> v(a,a+4); // type 5-

    // vector<int> v = {1,2,3,4}; // type 6
    // cout << v.size() << endl; // type 6

    vector<int> v;
    v.pop_back();
    v.push_back(10);
    v.insert(v.begin()+2,100);
    v.capacity();
    v.resize(3);
    v.clear();
    v.max_size();
    v.empty();
    v.erase(v.begin() + 2, v.begin() + 4);   // delte value;
    replace(v.begin()+2, v.end()-1,2,100); // repleace 2 with 100
    find(v.begin(), v.end(), 10);

    cout << v[3] << endl;
    cout << v[v.size()-1] << endl;
    cout << v.back() << endl;
    cout << v.front() << endl;


    //     auto it = find(v.begin(), v.end(), 10);
    // if(it==v.end()){
    //     cout << "not found" << endl;
    // }

    // for (int i = 0;i<v.size();i++){
    //     cout << v[i] << endl;
        
    // };

    // for(int x: v){
    //     cout << x << endl;
    // }

    for (auto i = v.begin(); i < v.end(); i++){
        cout << *i << endl;
    }

        return 0;
}