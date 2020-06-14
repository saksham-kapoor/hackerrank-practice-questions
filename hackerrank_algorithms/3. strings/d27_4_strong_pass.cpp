/*

int minimumNumber(int n, string password) {
    int min=0;
    int lower = 0, upper = 0, digit = 0, spl = 0;
    for(char i:password){
        if((int)i >= 97 && (int)i <=122){
            lower++;
        } else if((int)i >= 65 && (int)i <=90){
            upper++;
        } else if((int)i >= 48 && (int)i <=57){
            digit++;
        } else {
            spl++;
        }
    }
    if(lower == 0){
        min++;
    } 
    if(upper == 0){
        min++;
    }
    if(digit == 0){
        min++;
    }
    if(spl == 0){
        min++;
    }
    if(n + min < 6){
        min = 6 - n;
    }
    return min;
}

*/