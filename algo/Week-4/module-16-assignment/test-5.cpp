#include <bits/stdc++.h>
using namespace std;

bool isPileOfWord( string &s1,  string &s2) {
    if (s1.length() != s2.length()) {
        return false;
    }
    
    int count[26] = {0};
    
    for (char c : s1) {
        count[c - 'a']++;
    }
    
    for (char c : s2) {
        count[c - 'a']--;
    }
    
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return false;
        }
    }
    
    return true;
}



int main(){
   int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        if (isPileOfWord(s1, s2)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}