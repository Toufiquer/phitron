#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;
    cin.ignore(); 

    while (t--) {
        string sentence;
        getline(cin, sentence);

        stringstream ss(sentence);
        string word;
        map<string, int> wordCounts;
        int maxCount = 0;
        string mostFrequentWord;

        while (ss >> word) {
            wordCounts[word]++;
            if (wordCounts[word] > maxCount) {
                maxCount = wordCounts[word];
                mostFrequentWord = word;
            }
        }

        cout << mostFrequentWord << " " << maxCount << endl;
    }


    return 0;
}