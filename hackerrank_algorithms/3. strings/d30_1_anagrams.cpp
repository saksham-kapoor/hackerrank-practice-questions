/*

int anagram(string s) {
    int min_changes = 0;
    int length = s.size();
    if(length % 2 != 0){
        return -1;
    } else {
        vector<int> f1(26, 0), f2(26, 0);
        for(int i=0; i<length/2; i++){
            int c1 = s[i];
            int c2 = s[length - 1 - i];
            f1[c1 - 'a']++;
            f2[c2 - 'a']++;
        }
        for(int i=0; i<26; i++){
            if(f1[i] != f2[i]){
                int diff = (f1[i] > f2[i])? f1[i] - f2[i]: f2[i] - f1[i];
                min_changes += diff;
            }
        }
    }
    return min_changes/2;
}


*/