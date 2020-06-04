/*

int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2) {
    int fine;
    if(y1 == y2){
        if(m1 == m2){
            if(d1 <= d2){
                fine = 0;
            } else {
                fine = (d1 - d2)*15;
            }
        } else if(m1 < m2){
            fine = 0;
        } else {
            fine = (m1 - m2) * 500;
        }
    } else if (y1 < y2) {
        fine = 0;
    } else {
        fine = 10000;
    }
    return fine;
}


*/