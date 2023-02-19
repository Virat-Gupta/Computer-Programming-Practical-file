#include <stdio.h>

int main() {
    float radius, perimeter, area, volume;
    const float PI = 3.14159;
    
    printf("Enter the radius of the circle/sphere: ");
    scanf("%f", &radius);
    
    perimeter = 2 * PI * radius;
    area = PI * radius * radius;
    volume = 4.0 / 3.0 * PI * radius * radius * radius;
    
    printf("Perimeter of the circle/sphere is: %.2f\n", perimeter);
    printf("Area of the circle/sphere is: %.2f\n", area);
    printf("Volume of the sphere is: %.2f \n", volume);
    
    return 0;
}



