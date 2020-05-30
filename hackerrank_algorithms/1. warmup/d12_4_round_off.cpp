/*

vector<int> gradingStudents(vector<int> grades) {
    vector<int> new_grades;
    for(auto i : grades){
        if(i < 38){
            new_grades.push_back(i);
        }
        else {
            if((i + 1) % 5 == 0){
                new_grades.push_back(i + 1);
            } else if((i + 2) % 5 == 0){
                new_grades.push_back(i + 2);
            } else {
                new_grades.push_back(i);
            }
        }
    }
    return new_grades;
}

*/