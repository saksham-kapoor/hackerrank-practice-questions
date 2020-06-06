/*

int howManyGames(int p, int d, int m, int s) {
    int num_games = 0;
    while(s>=0){
        if(num_games == 0){
            s-=p;
            num_games++;
        } else {
            int old_price = p - d*num_games;
            if(old_price <= m){
                s-=m;
                num_games++;
            } else {
                s-= old_price;
                num_games++;
            }
        }
    }
    return num_games - 1;
}

*/