/* 3/16 test cases failed :(

vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
    vector<int> values;
    int size_of_a = a.size();
    k = k % size_of_a;
    if(k!=0){
        int index = size_of_a - k;
        int temp = a[index];
        for(int i=0; i<size_of_a; i++){
            int new_index = (index - k >= 0) ? index - k : size_of_a + (index-k);
            a[index] = a[new_index];
            index = new_index;
        }
        a[0] = temp;
    } 
    
    for(auto p:queries){
        values.push_back(a[p]);
    }
    return values;
}

*/