/*

long long taumBday(long b, long w, long bc, long wc, long z) {
    long long final_cost;
    if(bc - wc >= z){
        final_cost = w*wc + b*(wc+z);
    } else if(wc - bc >= z){
        final_cost = b*bc + w*(bc+z);
    } else {
        final_cost = b*bc + w*wc;
    }
    return final_cost;
}


*/