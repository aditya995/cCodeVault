/*
g++ variables.c
a.exe
*/
#include<stdio.h>

int main(){


    ////**              Variables and their min max values              **////
    //  1bit (0 or 1)
    //  1 byte = 8 bit /*smallest unit*/
    //  1 byte = 2^8 = 256
    //  storage size 1 byte 2^8 => posssible int [values unsigned(0-255)] [signed(2^7-1)(-127,0,127)]
    //  storage size 2 byte 2^16 => posssible int [values unsigned(0-65535)] [signed(2^15-1)(-32767,0,32767)]
    //  storage size 4 byte 2^32 => posssible int [values unsigned(0-4294967295)] [signed(2^31-1)(-2147483647,0,2147483647)]
    //  storage size 8 byte 2^64 => posssible int [values unsigned(0-18446744073709551615)] [signed(2^63-1)(-9223372036854775807,0,9223372036854775807)]

    //  storage size 16 byte 2^128 => posssible int [values unsigned(0-340282366920938463463374607431768211455)]
    //  [signed(2^127-1)(-170141183460469231731687303715884105727,0,170141183460469231731687303715884105727)]

    /// Integer
    short int si = -32767;
    printf("|size %d| short int -> si = %hd \n", sizeof(si), si);
    int i = -2147483647;
    printf("|size %d|int -> i = %d\n",sizeof(i), i);
    unsigned int ui = 4294967295;
    printf("|size %d|unsigned int -> ui = %u\n",sizeof(ui), ui);
    long int li = -2147483647;
    printf("|size %d|long int -> li = %ld \n", sizeof(li), li);
    unsigned long int uli = 4294967295;
    printf("|size %d|unsigned long int -> uli = %lu \n", sizeof(uli), uli);
    long long int lli = -9223372036854775807;
    printf("|size %d|long long int lli = %lld \n", sizeof(lli) , lli);
    unsigned long long int ulli = 18446744073709551615;
    printf("|size %d|unsigned long long int ulli = %llu \n", sizeof(ulli), ulli);

    ///Float    // is not much accurate at the decimal places
    float fb = 999997.86;
    // (accurate upto 7 digit with or without decimal point)
    printf("\n|size %d| Float -> fb = %f\n",sizeof(fb), fb);

    ///double
    double d = 922337203685477.5807;
    // (accurate upto 16 digit with or without decimal point)
    printf("\n|size %d|double d = %lf \n", sizeof(d), d);
    long double ld = 170141183460469231731687303715884105727;
    // (accurate upto 7 digit with or without decimal point)
    printf("|size %d|long double ld = %llf \n", sizeof(ld), ld);// does not work properly !!!!!****

    ///char
    char c = '5', cc = 55;
    printf("\n|size %d|char c = %c %d \n", sizeof(c), c, c);
    printf("|size %d|char c = %c %d \n", sizeof(cc), cc, cc);
    signed char sc = '4', scc = -52;
    printf("|size %d|signed char sc = %c %d \n", sizeof(sc), sc, sc);
    printf("|size %d|signed char scc = \"%c\" %d \n", sizeof(scc), scc, scc);
    unsigned char uc = '5', ucc = 235;
    printf("|size %d|unsigned char uc = %c %d \n", sizeof(uc), uc, uc);
    printf("|size %d|unsigned char ucc = '%c' %d \n", sizeof(ucc), ucc, ucc);
    return 0;
}
