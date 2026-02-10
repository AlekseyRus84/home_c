

#include <stdio.h>
int main(int argc, char **argv)
{
    int a;
    scanf("%d", &a);
    
    if (a < 3) {
        printf("winter");
    } else if (2 < a && a < 6) {
        printf("spring");
    } else if (5 < a && a < 9) {
        printf("summer");
    } else if (8 < a && a < 12) {
        printf("autumn");
    } else {
        printf("winter");
    }
    
    return 0;
}
