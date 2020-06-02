/*

int designerPdfViewer(vector<int> h, string word) {
    int max_height = 0, index;
    for(auto i : word){
        index = (int)i - (int)'a';
        if(max_height < h[index]){
            max_height = h[index];
        }
    }
    return max_height * word.size();
}

*/