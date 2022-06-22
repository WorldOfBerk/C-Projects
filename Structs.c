/*********************************************
*Comparing Two Structured Values for Equality
*********************************************/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct{
    char *name;
    double length,
           land_weight,
           operation_weight,
           range;
    int speed,
        engine_count;
} plane_s;

int plane_equal(plane_s plane_1, plane_s plane_2)
{
    return(strcmp(plane_1.name, plane_2.name) == 0 &&
            plane_1.length == plane_2.length &&
            plane_1.land_weight == plane_2.land_weight &&
            plane_1.operation_weight == plane_2.operation_weight &&
            plane_1.range == plane_2.range &&
            plane_1.speed == plane_2.speed &&
            plane_1.engine_count == plane_2.engine_count);
}

int main()
{
    plane_s plane_1 = {"Aircraft s.1",
                        63.7, 201840.5,
                        134800.0, 5240,
                        905.0, 2,};
                        
    plane_s plane_2 = {"Aircraft s.2",
                        78.9, 245320.0,
                        144500.0, 5550,
                        880.0, 2,};

    bool equal = plane_equal(plane_1, plane_2);
    if(equal)
    {
        printf("The given planes %s / %s are MATCHED!", plane_1.name, plane_2.name);
    }
    
    else
    {
        printf("The given planes %s / %s are NOT matched!", plane_1.name, plane_2.name);
    }

    return 0;
}
