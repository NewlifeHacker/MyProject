//
//  Factorial.c
//  ACMPtasks
//
//  Created by Алексей Крутов on 20/12/2018.
//  Copyright © 2018 Алексей Крутов. All rights reserved.
#include <stdio.h>

#define n 4

int check(int x, int lvl)
{
    if (lvl == n-1)
        return (x == 4 || x == 6 ? 3 : 2);
    switch (x)
    {
        case 1: return check(8, lvl+1)+check(6, lvl+1);
        case 2: return check(7, lvl+1)+check(9, lvl+1);
        case 3: return check(4, lvl+1)+check(8, lvl+1);
        case 4: return check(3, lvl+1)+check(9, lvl+1)+check(0, lvl+1);
        case 6: return check(1, lvl+1)+check(7, lvl+1)+check(0, lvl+1);
        case 7: return check(2, lvl+1)+check(6, lvl+1);
        case 8: return check(1, lvl+1)+check(3, lvl+1);
        case 9: return check(4, lvl+1)+check(2, lvl+1);
        case 0: return check(4, lvl+1)+check(6, lvl+1);
    }
    return <#expression#>
}

int main(int argc, char *argv[])
{
    printf("%d\n", check(0, 1));
    return 0;
}
