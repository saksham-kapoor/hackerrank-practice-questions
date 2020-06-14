/*

string superReducedString(string s) {
    string::iterator it = s.begin();
    stack<char> final_st;
    while(it != s.end()){
        char my_char = *it;
        if(final_st.empty()){
            final_st.push(my_char);
        } else {
            if(final_st.top() == my_char){
                final_st.pop();
            } else {
                final_st.push(my_char);
            }
        }
        it++;
    }
    if(final_st.size() == 0){
        return "Empty String";
    } else {
        string new_str = "";
        while(final_st.size() != 0){
            new_str += final_st.top();
            final_st.pop();
        }
        reverse(new_str.begin(), new_str.end());
        return new_str;
    }
    return "Empty String";
}

*/