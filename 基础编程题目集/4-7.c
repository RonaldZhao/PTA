int IsTheNumber(const int N) {
    int n, t;
    t = (int)sqrt(N);
    n = t * t;
    if (n == N) {
        int num[10] = {0};
        int i;
        while (n > 0) {
            for (i = 0; i <= 9; i++) {
                if (n % 10 == i) {
                    num[i] += 1;
                    if (num[i] == 2) {
                        return 1;
                    }
                }
            }
            n = n / 10;
        }
        return 0;
    }
    return 0;
}