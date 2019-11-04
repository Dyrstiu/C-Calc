#include <stdio.h>
#include <string.h>

int a,b, ans;
float mod;


int addition(int a, int b);

int subtract(int a, int b);

int multiply(int a, int b);

int divide(int a, int b);

float getMod(int a, int b);

int main() {
    printf("Which of the operations below do you want to perform ? \n");
    printf("(sum, subtraction, multiplication, division, modulus)\n");
    char str[100];

    scanf("%s", str);

    int add = strcmp(str, "sum");
    int subtraction = strcmp(str, "subtraction");
    int multiplication = strcmp(str, "multiplication");
    int division = strcmp(str, "division");
    int modulus = strcmp(str, "modulus");


    printf("Enter the first number\n");
    scanf("%d",&a);

    printf("Enter the second number\n");
    scanf("%d",&b);

    if(add == 0){
        ans = addition(a,b);
        printf("Your answer is %d", ans);
    }
    if(subtraction == 0){
        ans = subtract(a,b);
        printf("Your answer is %d", ans);
    }

    if( multiplication == 0){
       ans = multiply(a,b);
       printf("Your answer is %d", ans);
    }

    if(division == 0){
        ans = divide(a,b);
        printf("Your answer is %d",ans);
    }
    if(modulus == 0){
        mod = getMod(a,b);
        printf("Your answer is %f", mod);
    }
}

float getMod(int a, int b) {
    float ans = a % b;
    return  ans;
}

int divide(int a, int b) {
    int ans = a / b;
    return ans;
}

int multiply(int a, int b) {
    int ans = a * b;
    return ans;
}

int subtract(int a, int b) {
    int ans = a-b;
    return ans;
}

int addition(int a, int b) {
    int ans = a + b;
    return ans;
}
