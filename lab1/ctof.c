#include <stdio.h>
main()
{
    int celsius,fahr;
    int lower,upper,step;

    lower = 0;
    upper = 100;
    step = 5;

    celsius = lower;
    printf ("celsius-fahr table\n")
    while (celsius <= upper)
    {fahr = celsius*9/5 + 32;
    prinft("%d\t%d\n", celsius,fahr);
    celsius = celsius + step;
        /* code */
    }
    
}