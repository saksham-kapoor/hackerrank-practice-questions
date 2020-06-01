/*

int pageCount(int n, int p) {
    int turns = 0;
    int front = 1;
    int back = n;
    if(p <= n/2){
        //front start
        while(1){
            if(front==p || front== p+1){
                break;
            }
            turns++;
            front+=2;
        }
        cout << turns;
    } else {
        //back start
        if(n % 2 == 0){
            while(1){
                if(back==p || back + 1 == p){
                    break;
                }
                turns++;
                back -= 2;
            }
        } else {
            while(1){
                if(back==p || back - 1 == p){
                    break;
                }
                turns++;
                back -= 2;
            }
        }
       
    
    }
    return turns;
}

*/