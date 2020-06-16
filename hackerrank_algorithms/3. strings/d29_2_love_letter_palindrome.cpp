/*

int theLoveLetterMystery(string s) {
    int min_operations = 0;
    int length = s.size();
    for(int i=0; i<length/2; i++){
        int first = s[i];
        int last = s[length - i - 1];
        int diff = (first > last) ? first - last : last - first;
        min_operations += diff;
    }
    return min_operations;
}

*/