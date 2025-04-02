int power(int number, int power)
{
    int result = 1;
    
    if (power < 0) {
        return 0;
    }

    if (power >= 0) {
        for (int i = 0; i < power; i++) {
            result *= number; // Calculate power of the number
        }
        return result;
    }
}

