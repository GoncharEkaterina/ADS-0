// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    while (a != b) {
        if (a > b) {
            return a = a - b;
        }
        else {
            return b = b - a;
        }
    }
}
