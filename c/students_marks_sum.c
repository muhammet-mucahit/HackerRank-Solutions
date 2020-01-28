//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
    int i, sum = 0;
    
    for(i = (gender == 'b' ? 0 : 1); i < number_of_students; i += 2) {
        sum += marks[i];
    }
    
    return sum;
}

