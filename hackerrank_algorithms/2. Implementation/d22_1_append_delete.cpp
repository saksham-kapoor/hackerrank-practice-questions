/*

string appendAndDelete(string s, string t, int k) {
    string yes = "Yes";
    string no = "No";
    int s_length = s.size(), t_length = t.size(), common_length;
    for(common_length = 0; s[common_length] == t[common_length]; common_length++);
    int total_non_common_length = s_length + t_length - 2*common_length;
    
    if(total_non_common_length == k){
        return yes;
    } else if (total_non_common_length < k && total_non_common_length%2 == k%2){
        return yes;
    } else if(s_length + t_length < k){
        return yes;
    } else {
        return no;
    }

}

*/