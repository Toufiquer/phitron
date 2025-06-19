#include <bits/stdc++.h>
using namespace std; 
int main(){
    // !

    int N;
    cin >> N;

    vector<int> numbers(N);

    for(int i = 0; i < N; i++){
        cin >> numbers[i];
    }

    int counter = 0;

    for(auto i : numbers){
        // Search for the value 30
        auto it = find(numbers.begin(), numbers.end(), i+1);
    
        if (it != numbers.end()) {
            counter++;
        }  
    }

    cout << counter << endl;

    return 0;
}