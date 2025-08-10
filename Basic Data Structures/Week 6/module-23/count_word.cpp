#include <bits/stdc++.h>
using namespace std;

 
int main(){
    // !

    string fullLine;
    getline(cin, fullLine);
    stringstream stremWord(fullLine);

    
    string word;

    map<string, int> mp;
    while (stremWord >> word)
    {
      mp[word]++;
    }
    for (auto it = mp.begin(); it != mp.end();it++){
      cout << it->first << " " << it->second << endl;
    }

      cout << " v 1.0.0.1";

    return 0;
}