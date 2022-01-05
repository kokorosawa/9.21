int romanToInt(char * s) {
    int prev = INT_MAX, curr, sum = 0;
    while (*s) {
        int curr;
        switch (*s) {
            case 'M': curr = 1000; break;
            case 'D': curr = 500; break;
            case 'C': curr = 100; break;
            case 'L': curr = 50; break;
            case 'X': curr = 10; break;
            case 'V': curr = 5; break;
            case 'I': curr = 1; break;
        }
        if (prev < curr) // check the previous digit
            sum += curr - prev * 2; // need to subtract for this digit
        else
            sum += curr;
        prev = curr;
        s++;
    }
    return sum;

