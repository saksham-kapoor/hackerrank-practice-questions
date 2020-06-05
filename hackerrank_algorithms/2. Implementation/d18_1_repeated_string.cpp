/*

long repeatedString(string s, long n) {
    long count = 0;
    int length = s.size();
    long num_times_repeating = n/length;
    int num_letters_remaining = n % length;
    for(int i = 0; i<length; i++){
        if(s[i] == 'a'){
            count++;
        }
    }
    count *= num_times_repeating;
    for(int i=0; i<num_letters_remaining; i++){
        if(s[i] == 'a') {
            count++;
        }
    }
    return count;
}

*/