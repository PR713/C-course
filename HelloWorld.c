#include <stdio.h>
#include <stdbool.h>

int main() {

    printf("Hello!\n");
    printf("It's really amazing.\n");
    
    printf("\"Szóstka Wron\" - Leigh Bardugo\n");

    char name[] = "PoweR";
    int id = 713;

    printf("Github profile name %s%d \n", name, id);
    //f float, c char


    bool e = true;

    char f = 101; // range -128 to +127, %d or %c to convert to ASCII

    int x = 5;
    int y = 2;
    float z = (float) x / y;
    printf("%f", z);

    return 0;
}