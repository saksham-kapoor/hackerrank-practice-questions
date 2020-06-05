/*

int beautifulTriplets(int d, vector<int> arr) {
    int num_beautiful_triplets = 0;
    multiset<int> values(arr.begin(), arr.end()); //linear
    for(auto i:values){
        if(values.find(d+i) != values.end()){
            if(values.find(d*2 + i) != values.end()){
                num_beautiful_triplets++;
            }
        }
    }

    return num_beautiful_triplets;
}

*/