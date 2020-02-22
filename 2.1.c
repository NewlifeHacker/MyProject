#include <stdio.h>
#include <limits.h>

int main()
{
    printf("char min %d \n ", CHAR_MIN );
    printf("char max %d \n ", CHAR_MAX );

    printf("short min %d \n ", SHRT_MIN );
    printf("short max %d \n ", SHRT_MAX );

    printf("int min %d \n ", INT_MIN );
    printf("int max %d \n ", INT_MAX );

    printf("long min %d \n ", LONG_MIN );
    printf("long max %d \n ", LONG_MAX );

    printf("char unsigned %u \n ", UCHAR_MAX );
    printf("long unsigned %lu \n ", ULONG_MAX );
    printf("int unsigned %u \n ", UINT_MAX );
    printf("short unsigned %u \n ", USHRT_MAX );

        printf("Another method \n");

        char h;
        unsigned char uc;
        int max, min, i;
        for (uc = 1; uc != 0; ++uc){
            max = uc;
        };

        printf (" Unsigned char %u\n", max);
        max = 0;

        for (h =1; h > 0; ++h){
            max = h;
        };
        printf (" char max %d\n", max);

        max = 0;

        for (i=1; i>0; i++){
            max = i;
        };
        printf("int max %d\n", max );


}