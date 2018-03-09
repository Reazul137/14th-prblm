#include<stdio.h>
int main()
{
    int distance;
    float fuel, result;

    printf("Input total distance in kilometer : ");
    scanf("%d",&distance);

    printf("Input total spent fuel in letter : ");
    scanf("%f",&fuel);

    result = distance / fuel;
    printf("your input total distance is %d kilometer, input total spent fuel is %f letter and Average consumption %f km/l",distance, fuel, result);

    return 0;
}
