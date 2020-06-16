/*

int makingAnagrams(string s1, string s2) {
    int min_deletions = 0;
    vector<int> freq1(26,0), freq2(26,0);
    int length1 = s1.size(), length2 = s2.size();
    for(int i=0; i<length1; i++){
        freq1[s1[i] - 'a']++;
    }
    for(int i=0; i<length2; i++){
        freq2[s2[i] - 'a']++;
    }

    for(int i=0; i<26; i++){
        int count1 = freq1[i];
        int count2 = freq2[i];
        int diff = (count1 > count2) ? count1 - count2 : count2 - count1;
        min_deletions += diff;
    }
    return min_deletions;
}


*/