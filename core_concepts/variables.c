/*
g++ variables.c
a.exe
*/
#include<stdio.h>

int main(){
    int a, b, c;
    long a;
    long long a;
    long long int a;
    unsigned long long a;
    unsigned long long int a = 4;
    float fa, fb;
    double da, db;
    char ca, cb;

    a = b = c = 78;
    printf("Integer -> a = %d b = %d c = %d\n", a, b, c);
    fa = fb = 8.38;
    printf("Float -> fa = %f fb = %f\n", fa, fb);
    da = db = 88.2615;
    printf("Double -> da = %f db = %f\n", da, db);
    ca = cb = 'a';
    printf("char -> ca = %c cb = %c\n", ca, cb);
    return 0;
}