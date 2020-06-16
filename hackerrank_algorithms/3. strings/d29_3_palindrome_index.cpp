/*

int check_p(string s){
    int length = s.size();
    int i;
    for(i=0; i<length/2; i++){
        if(s[i] != s[length - i - 1]){
            break;
        }
    }
    if(i == length/2){
        return 1;
    } else {
        return 0;
    }
}

int palindromeIndex(string s) {
    int index_removed;
    int length = s.size();
    for(int i=0; i<length/2; i++){
        int first = s[i];
        int last = s[length - i -1];
        if(first != last){
            string new_s = s;
            index_removed = length - i - 1;
            new_s.erase(index_removed, 1);
            int check = check_p(new_s);
            if(check){
                break;
            } else {
                string new_s = s;
                index_removed = i;
                new_s.erase(index_removed, 1);
                int check = check_p(new_s);
                if(check) {
                    break;
                } else {
                    return -1;
                }
            }
        }
    }
    return index_removed;
}

*/