/*

int saveThePrisoner(int n, int m, int s) {
    m = (m % n);
    int a = s + m - 1;
    
    if(a > n){
        a = a % n;
        if(a != 0){
            return a;
        } else {
            return n;
        }
    } else {
        if(!a) {
            return n;
        }
        return a;
    }
}

*/