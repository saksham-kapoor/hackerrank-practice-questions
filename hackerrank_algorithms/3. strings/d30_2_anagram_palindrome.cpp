/*

string gameOfThrones(string s) {
    int length = s.size();
    map<char, int> freq;
    for(int i=0; i<length; i++){
        freq[s[i]]++;
    }
    map<char, int>::iterator it = freq.begin();
    int num_odd = 0;
    while(it != freq.end()){
        if(it->second % 2 != 0){
            num_odd++;
        }
        it++;
    }
    if(length % 2 == 0){
        if(num_odd == 0){
            return "YES";
        } else {
            return "NO";
        }
    } else {
        if(num_odd > 1){
            return "NO";
        } else {
            return "YES";
        }
    }

}

*/