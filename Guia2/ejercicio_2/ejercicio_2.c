/*2) Ídem para un tipo enumerativo status_t compuesto por los símbolos ERROR y OK.*/

#include <stdio.h>

int main()
{
    typedef enum {ERROR, OK} status_t;

    status_t status = ERROR;

    switch (status)
    {
    case ERROR:
        printf("%s","La variable status tiene valor ERROR \n");
        break;
    case OK:
        printf("%s","La variable status tiene valor OK \n");
        break;
    default:
        break;
    }


    return 1;
}