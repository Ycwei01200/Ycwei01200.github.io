#include <stdio.h>
#define C 299792458LL

int main() {
    printf("1 Light-second(LS) is %lld metres.\n", C);
    printf("1 Light-minute(LM) is %lld metres.\n", C * 60LL);
    printf("1 Light-hour(LH) is %lld metres.\n", C * 60LL * 60LL);
    printf("1 Light-day(LD) is %lld metres.\n", C * 60LL * 60LL * 24LL);
    printf("1 Light-week(LW) is %lld metres.\n", C * 60LL * 60LL * 24LL * 7LL);
    printf("1 Light-year(LY) is %lld metres.\n", C * 60LL * 60LL * 24LL * 365LL);
    return 0;
}
