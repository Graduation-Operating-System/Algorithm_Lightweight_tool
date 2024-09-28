#include <stdio.h>
#include <stdlib.h>
#include "headerFile/Conversion.h"
#include "headerFile/AES_128_CTR.h"
#define KEYSIZE128 16

void Start_Option(int * Algorithm, int * operatingMode, char * Key)
{
    printf("Select algorithm(1 = AES) : ");
    scanf("%d",&Algorithm);
    system("clear");
    printf("Select the operating mode(1 = ECB, 2 = CBC, 3 = CFB, 4 = OFB, 5 = CTR, 6 = GCM)");
    scanf("%d",&operatingMode);
    system("clear");
    printf("input encryption Key Value : ");
    scanf("%s",&Key);
    system("clear");
}
int main() {
    int Algorithm;
    int operatingMode;
    unsigned char Key[KEYSIZE128];
    Start_Option(&Algorithm, &operatingMode, Key);


    return 0;
}
