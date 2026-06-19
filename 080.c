
#include <stdio.h>

int  calculate_distance(float u, float a, float t) {
    float distance = u * t + 0.5 * a * t * t;
    printf("Distance traveled after %.2f seconds: %.2f meters\n", t, distance);
}

int main() {
    float u, a, t;
    int choice;

    do {
        printf("Enter  (u) in m/s: ");
        scanf("%f", &u);

        printf("Enter (a) in m/s^2: ");
        scanf("%f", &a);

        printf(" (t) in seconds: ");
        scanf("%f", &t);
        calculate_distance(u, a, t);
        
    
    } while(choice == 1); 
return 0;
}

