/*

string encryption(string s) {
    int length = s.size();
    // return to_string(length);
    float root_length = sqrt(length);
    int min_length = floor(root_length);
    int max_length = ceil(root_length);
    int row, col;

    if(min_length * max_length < length) {
        row = col = max_length;
    } else {
        row = min_length;
        col = max_length;
    }
    // row - no. of words
    // col = length of words

    vector<string> new_string(col, "");
    for(int i=0; i<length; i++){
        new_string[i%col] += s[i]; 
    }

    string encoded_message = "";
    for(auto i:new_string) {
        encoded_message += i + " ";
    }
    return encoded_message;
}

*/