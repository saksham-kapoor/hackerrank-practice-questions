/*

int chocolateFeast(int n, int c, int m) {
// n = initial money, c = cost of 1 chocolate, m = number of wrappers for 1 chocolate
    int chocolates_bought = n / c;
    int num_wrappers = chocolates_bought;

    while(num_wrappers >= m){
        int r = num_wrappers % m;
        int choco_traded = num_wrappers/m;
        chocolates_bought += choco_traded;
        num_wrappers = choco_traded + r;
    }
    return chocolates_bought;
}


*/