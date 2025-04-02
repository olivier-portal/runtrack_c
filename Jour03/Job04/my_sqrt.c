int my_sqrt(int number) {
    if (number <= 0) {
        return -1; // Error
    }

    if (number > 0) {
        for (int i = 0; i < number; i++) {
            if (i * i == number) {
                return i;
            }
        }
    }
    return -1; // Error
}