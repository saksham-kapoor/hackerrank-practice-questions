/*

string pangrams(string s) {
    set<char> my_chars;
    for(int i=0; i<s.size(); i++){
        if(s[i] >= 65 && s[i] <= 90){
            s[i] += 32;
            my_chars.insert(s[i]);
        } else if(s[i] >= 97 && s[i] <= 122){
            my_chars.insert(s[i]);
        }
    }
    if(my_chars.size() == 26){
        return "pangram";
    } else {
        return "not pangram";
    }
}

*/