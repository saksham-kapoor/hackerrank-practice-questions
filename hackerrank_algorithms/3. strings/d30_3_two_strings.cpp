/*

string twoStrings(string s1, string s2) {
    bitset<26> b1(0), b2(0);
    int length1 = s1.size(), length2 = s2.size();
    for(int i=0; i<length1; i++){
        int my_char = s1[i] - 'a'; // 0 to 25
        bitset<26> b3(0);
        b3 = 1 << my_char;
        b1 = b1 | b3;        
    }
    for(int i=0; i<length2; i++){
        int my_char = s2[i] - 'a'; // 0 to 25
        bitset<26> b3(0);
        b3 = 1 << my_char;
        b2 = b2 | b3;        
    }
    b1 = b1 & b2;
    int common = b1.count();
    if(common == 0){
        return "NO";
    } else {
        return "YES";
    }
}

*/