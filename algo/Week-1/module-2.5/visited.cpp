// check the node visited or not 
// is it possible to go the targeted node
#include <bits/stdc++.h>
using namespace std;

vector<int> nodeL[1000];
int vesited[1000] ={0};

int main(){
    int n, e;
    cin >> n >> e;
    
    while(e--){
        int a, b;
        cin >> a >> b;
        nodeL[b].push_back(a);
        nodeL[a].push_back(b);
    }

    int sorce, focus;
    cin >> sorce >> focus;
    if(nodeL[sorce][focus] == 1 || nodeL[focus][sorce] == 1){
      cout << "Yes";
    }else{
      cout << "No";
    }
    return 0;
}