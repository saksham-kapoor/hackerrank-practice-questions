/*

int beautifulBinaryString(string b) {
    int min_moves = 0;
    int length = b.size();
    for(int i=1; i < length - 1; i++){
        char prev = b[i-1];
        char next = b[i+1];
        char curr = b[i];
        if(prev == '0' && curr == '1' && next == '0'){
            b[i+1] = '1';
            min_moves++;
        }
    }
    return min_moves;
}

*/