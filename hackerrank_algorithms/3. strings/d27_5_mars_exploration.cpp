/*

int marsExploration(string s) {
    int chars_changed = 0;
    int k=0;
    for(long unsigned int i=0; i<s.size(); i++){
        if(i%3==0 && i!=0){
            k++;
        }  

        if(i == 1+k*3){
            if(s[i] != 'O'){
                chars_changed++;
            } 
        } else {
            if(s[i] != 'S'){
                chars_changed++;
            }
        }
    }
    return chars_changed;
}

*/