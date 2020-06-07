/*

int flatlandSpaceStations(int n, vector<int> c) {
    // n = no. of cities | if n = 5, cities = 0,1,2,3,4
    // c = locations of space stations
    int m = c.size(); // num of space stations
    sort(c.begin(), c.end()); //O(nlogn)
    int max_distance = 0;
    vector<int> subs(0);
    
    if(n == m) {
        return 0;
    } else if(m == 1){
        return (c[0] > n - 1 - c[m-1]) ? c[0] : n -1 - c[m-1];
    } else if( n == 1 ){
        return 1;
    }
    
    for(int i=1; i<m; i++){
        int sub = (c[i] - c[i-1])/2;
        subs.push_back(sub);
    } //O(m)

    max_distance = *max_element(subs.begin(), subs.end()); //O(m)
    
    if( max_distance >= c[0] && max_distance >= n - 1 - c[m-1] ){
        return max_distance;
    } else {
        int max_distance1 = c[0];
        int max_distance2 = n -1 - c[m-1];
        max_distance = (max_distance1 > max_distance2) ? max_distance1 : max_distance2;
    }
    return max_distance;
}

*/