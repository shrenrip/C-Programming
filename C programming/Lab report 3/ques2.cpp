#include <stdio.h>

#define PI 3.1415
#define product(a,b) a*b
#define sum(a,b) a+b
#define difference(a,b) a-b

int main() {
    int a=8,b=4;
    float product = PI*product(a,b); 
    float sum = PI*sum(a,b);
    float difference = PI*difference(a,b);
    printf("The product is: %f\n",product);
    printf("The sum is: %f\n",sum);
    printf("The difference is: %f\n",difference);
    printf("By: Nripesh Shrestha");
}