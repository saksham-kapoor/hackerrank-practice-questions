/*

string hackerrankInString(string s) {
    string new_str = "";
    char req_chars[] = {'h', 'a', 'c', 'k', 'e', 'r', 'r', 'a', 'n', 'k'};
    int k=0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == req_chars[k]){
            new_str += s[i];
            k++;
        }
    }

    if(new_str == "hackerrank"){
        return "YES";
    } else {
        return "NO";
    }
}

*/