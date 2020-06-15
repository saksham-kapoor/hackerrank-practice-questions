/*

string caesarCipher(string s, int k) {
    for(int i=0; i<s.size(); i++){
        int ascii_code = (int)s[i];
        if((int)s[i] >= 65 && (int)s[i] <=90){
            s[i] -= 'A';
            s[i] += k;
            s[i] %= 26;
            s[i] += 'A';
        } else if((int)s[i] >= 97 && (int)s[i] <= 122) {
            s[i] -= 'a';
            s[i] += k;
            s[i] %= 26;
            s[i] += 'a';
        }
    }
    return s;
}

*/