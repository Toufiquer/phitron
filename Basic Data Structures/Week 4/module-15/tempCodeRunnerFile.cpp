    string result;

    int counter = 0;
    while(counter < s.size()){
        if(s[counter] != result[result.size()-1]){
            result += s[counter];
        }else{
            result.pop_back();
        }
    }