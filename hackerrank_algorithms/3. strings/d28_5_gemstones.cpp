/*

int gemstones(vector<string> arr) {
    int count = 0;
    vector<int> freq(26, 0);
    for(string s:arr){
        vector<int> freq_c(26, 0);
        for(int i=0; i<s.size(); i++){
            int index = s[i] - 'a'; // 0 to 25
            if(freq_c[index] == 0){
                freq[index]++;
                freq_c[index]++;
            }
        }
    }
    for(int j:freq){
        if(j == arr.size()){
            count ++;
        }
    }
    return count;
}

*/