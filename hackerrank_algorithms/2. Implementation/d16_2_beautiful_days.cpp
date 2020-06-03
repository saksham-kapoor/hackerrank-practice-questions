/*

int beautifulDays(int i, int j, int p) {
    int num_beatiful_days = 0;
    for(int k=i;k<=j; k++){
        int rev = 0;
        int num = k;
        int r;
        while(num != 0){
            r = num % 10;
            num /= 10;
            rev = rev*10 + r;
        }
        int diff = (k > rev)? k - rev : rev - k;
        float q = (float)diff/(float)p;
        if(q == floor(q)){
            num_beatiful_days++;
        }
    }
    return num_beatiful_days;
}

*/