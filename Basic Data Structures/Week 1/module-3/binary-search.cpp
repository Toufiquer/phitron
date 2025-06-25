#include <bits/stdc++.h>
using namespace std;
int main(){
    // ! Binary Search
    int N, Q;
    cin >> N >> Q;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    sort(A.begin(), A.end());

    vector<int> B = A;

    int lIdx = 0;
    int rIdx = B.size()-1;

    int lVal = B[lIdx];
    int rVal = B[rIdx];
    // cout << endl;
    // cout << "l Index : " << lIdx << endl;
    // cout << "r Index : " << rIdx << endl;
    // cout << "l Val : " << lVal << endl;
    // cout << "r Val : " << rVal << endl;
    
while(B.size()>0){
    if(B.size()==1){
        if(B[0]==Q){
            cout << "Found: " << B[0] << endl;
        }else{
            cout <<"Not Founds" <<endl;
        }
        B.clear();
        break;
    }

    int midIdx = (lIdx + rIdx) / 2;
    int midVal = B[midIdx];
    
    if(midVal==Q){
        cout << "Found: " << midVal << endl;
        B.clear();
        break;
    }else{
        if(midVal>Q){
            rIdx = B.size() / 2;
            B.erase(B.end() - rIdx, B.end());
        }else{
            lIdx = B.size() / 2;
            B.erase(B.begin(), B.end() - lIdx);
        }
    }

}

    // ! fIdx binary search
    

    for (int i = 0; i < N; i++) {
        cout << A[i] << " " ;
    } 
    cout << endl;
    for (int i = 0; i < N; i++) {
        cout << B[i] << " " ;
    } 
    return 0;
}
