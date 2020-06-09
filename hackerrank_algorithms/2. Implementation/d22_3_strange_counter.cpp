/*

long strangeCounter(long t) {
    long count;
    long n = ceil(log2((long double)t/(long double)3 + 1) - 1);  
    long count_head = 3 * pow(2, n);
    long t_head = count_head - 2;
    long rem = t - t_head;

    count = count_head - rem;

    return count;
}

*/