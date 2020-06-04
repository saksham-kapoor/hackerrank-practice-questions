/*

int jumpingOnClouds(vector<int> c) {
    int min_count = 0, i = 0;
    while(i != (c.size()-1)){
        if(c[i+2] != 1 && (i+2)<c.size()){
            // Safe
            i += 2;
        } else {
            i++;
        }
        min_count++;
    }
    return min_count;
}

*/