/*

string happyLadybugs(string b) {
    string result = "YES";
    map<char, int> counts;
    for(auto i : b){
        counts[i]++;
    } // O(n)
    if(counts['_'] == 0){
        for(long unsigned int i=0; i<b.size(); i++){
            if(i == 0 || i == b.size() - 1){
               if(counts[b[i]] == 1){
                    result = "NO";
               }
            }else if (!(b[i] == b[i-1] || b[i] == b[i+1])){
                result = "NO";
                break;
            }
        }//O(n)
    } else {
        for(auto i:b){
            if(counts[i] == 1 && i!='_'){
                result = "NO";
                break;
            }
        }//O(n)
    }
    return result;
} //O(2n) => O(n)

*/