/*

vector<int> stones(int n, int a, int b) {
    vector<int> last_values;
    n-=1;
    if(a==b){
        last_values.push_back(n*a);
        return last_values;
    }
    if(b < a){
        int temp = a;
        a = b;
        b = temp;
    }
    for(int i=0; i<=n; i++){
        int last_value = b*i + a*(n-i);
        last_values.push_back(last_value);
    }
    return last_values;
}

*/