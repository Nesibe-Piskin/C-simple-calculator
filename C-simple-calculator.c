#include <stdio.h>

int main(){

    char operator;
    float num1, num2, result = 0.0f;

    printf("SIMPLE CALCULATOR APPLICATION\n");
    printf("Please enter: [number] [operator] [number]: ");
    scanf("%f %c %f", &num1, &operator, &num2);

    switch(operator)
    {
        case '+':
            result = num1 + num2;
            break;
        
        case '-':
            result = num1 - num2;
            break;

        case '*':
            result = num1 * num2;
            break;

        case '/':
            // Sıfıra bölme hatasını önlemek için bir kontrol eklenebilir
            result = num1 / num2;
            break;

        default:
            printf("Invalid operator!");
            return 1; // Hata durumunda programı sonlandırır
    }

    printf("Result: %.2f\n", result);
    return 0;
}