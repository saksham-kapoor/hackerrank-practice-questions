/*

int equalizeArray(vector<int> arr) {
    int length = arr.size();
    vector<int> element_count(100, 0);
    for(int i=0; i<length; i++){
        element_count[arr[i] -1]++;
    }
    int max;
    max = element_count[0];
  
    for(int i=0; i<100; i++){
        if(max < element_count[i]){
            max = element_count[i];
        }
    }
    return length-max;
}

*/