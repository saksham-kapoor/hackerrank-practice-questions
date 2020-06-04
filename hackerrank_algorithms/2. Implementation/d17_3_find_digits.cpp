/*

int findDigits(int n) {
    int count = 0;
    int my_num = n;
    while(my_num != 0){
        int r = my_num % 10;
        if(r){
            if(n % r == 0){
                count++;
            }
        }
        my_num /= 10;
    }
    return count;
}


*/