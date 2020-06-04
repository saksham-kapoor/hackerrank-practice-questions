/*

int jumpingOnClouds(vector<int> c, int k) {
    int i = 0, n = c.size(), e = 100;
    
    do {
        i = (i+k)%n; // jump
        
        if(c[i] == 1){ 
            e-=3;
        } else {
            e--;
        }   
       
    } while(i!=0);
    return e;
}

*/