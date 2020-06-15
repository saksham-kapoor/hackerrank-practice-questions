/*

string funnyString(string s) {
    int i,j;
    for(i=0,j=s.size()-1; i<s.size()-1; i++, j--){
        int diff1 = (s[i] > s[i+1])? s[i] - s[i+1] : s[i+1] - s[i];
        int diff2 = (s[j] > s[j-1])? s[j] - s[j-1] : s[j-1] - s[j];
        if(diff1 != diff2){         
            break;    
        }
    }
    if(i == s.size()-1){
        return "Funny";
    } else {
        return "Not Funny";
    }
}

*/