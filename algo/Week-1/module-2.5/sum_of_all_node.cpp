#include <bits/stdc++.h>
using namespace std;
int main(){ 
    int result = 0;
    int n, e;
    cin >> n >> e;
    
    vector<int> nodeLst;
    while(e--){
        int a, b;
        cin >> a >> b;


        auto f = find(nodeLst.begin(), nodeLst.end(), a);
        if(f == nodeLst.end()){
            nodeLst.push_back(a);
        }
        auto fb = find(nodeLst.begin(), nodeLst.end(), b);
        if(fb == nodeLst.end()){
            nodeLst.push_back(b);
        }
    }
    for (int i = 0; i < nodeLst.size();i++){
        cout << i << " -> " << nodeLst[i] << endl;
        result += nodeLst[i];
    }
        cout << "result -> " << result;
    return 0;
}