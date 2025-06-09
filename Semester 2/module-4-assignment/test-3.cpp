#include<bits/stdc++.h> 
using namespace std;

int main() {
    string text;
     
    while (getline(cin, text)) {
        string letters;
        int len = text.size();
        for (int i = 0; i < len; ++i) {
            char c = text[i]; 
            if (c != ' ') {
                letters += c;  
            }
        } 
        sort(letters.begin(), letters.end()); 
        cout << letters << endl;
    }
    return 0;
}



// https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-for-dsa-a-batch-07/challenges/monkey-1-2/copy-from/1392634698