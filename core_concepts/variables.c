/*
g++ variables.c
a.exe
*/
#include<stdio.h>

int main(){
    int ia, ib, ic;
    long la;
    long long lla;
    long long int llia;
    unsigned long long ulla;
    unsigned long long int ullia;
    float fa, fb;
    double da, db;
    char ca, cb;

    ia = ib = ic = 78;
    printf("|size %d| Integer -> ia = %d ib = %d ic = %d\n",sizeof(ia), ia, ib, ic);
    la = 15;
    lla = 15;
    llia = 15;
    ulla = 15;
    ullia = 15;
    printf("|size %d| Long a -> la = %ld \n|size %d| Long Long a = %lld \n|size %d| Long Long Integer ia = %lld \n|size %d| Unsigned Long Long a = %llu \n|size %d| Unsigned Long Long Integer a = %llu \n", sizeof(la), la, sizeof(lla), lla, sizeof(llia) , llia, sizeof(ulla), ulla, sizeof(ullia), ullia);
    fa = fb = 8.38;
    printf("|size %d| Float -> fa = %f fb = %f\n",sizeof(fa), fa, fb);
    da = db = 88.2615;
    printf("|size %d| Double -> da = %f db = %f\n",sizeof(da), da, db);
    ca = cb = 'a';
    printf("|size %d| char -> ca = %c cb = %c\n", sizeof(ca), ca, cb);
    return 0;
}