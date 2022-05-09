#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palavrasecreta[20];

    palavrasecreta[0]= "M";
    palavrasecreta[1]= "E";
    palavrasecreta[2]= "L";
    palavrasecreta[3]= "A";
    palavrasecreta[4]= "N";
    palavrasecreta[5]= "C";
    palavrasecreta[6]= "I";
    palavrasecreta[7]= "A";
    palavrasecreta[8]= '\0';

    sprintf(palavrasecreta,"MELANCIA");
    printf("%s",palavrasecreta);
    return 0;
}
