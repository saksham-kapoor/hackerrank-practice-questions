/*

int fairRations(vector<int> B) {
    int result = 0, count = 0;
    vector<int> index_values;

    for(int i=0;i<B.size(); i++){
        if(B[i] % 2 != 0){
            count++;
            index_values.push_back(i);
        }
    }

    if(count % 2 != 0){
        return -1;
    }
    
    for(int i = 1; i < index_values.size(); i+=2){
        result += (index_values[i] - index_values[i-1])*2;
    }

    return result;
}


*/