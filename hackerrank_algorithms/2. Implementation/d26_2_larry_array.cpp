/*

string larrysArray(vector<int> a) {
    int n = a.size();
    int count=0;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i;j++){
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                count++; //Increment count after each swap
            }
        }
    }
    if(count % 2 == 0){
        return "YES";
    } else {
        return "NO";
    }
}

*/