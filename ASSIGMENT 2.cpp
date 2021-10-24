#include <stdio.h>

int main() {
    long long int x, n, flag = 0;
    double y = 0;
    printf("\t\t\t\tEnter x: ");
    scanf("%ld", &x);
     printf("\n\t\t   _______________________________________\n\n ");
    printf("\t\t\t\tEnter n: ");
    scanf("%ld", &n);
    printf("\n\t\t   ________________________________________\n\n ");

    if (x < 0){
        flag = flag + 1;
    }
    if (n < 0){
        flag = (flag * 10) + 2;
    }
    if (n%2 == 0){
        flag = (flag * 10) + 3;
    }
    if (flag != 0){
        while(flag != 0){
            switch(flag%10)
            {
                case 1:
                    printf("\t\t        Error: x must be a positive integer.\n");
                    break;
                case 2:
                    printf("\t\t        Error: n must be a positive integer.\n");
                    break;
                case 3:
                    printf("\t\t        Error: n must be an odd number.\n");
            }
            flag = flag/10;
        }
    }
    else {
        long long int i, factorial, power, pLoop, fLoop, sign = 1;
        printf("\n\t\ty =");
        
        for (i = 1; i <= n; i = i + 2){
            power = 1, factorial = 1;
            for (pLoop = 0; pLoop < i; pLoop++){
                power = power * x;
            }
            for (fLoop = 1; fLoop <= i; fLoop++){
                factorial = factorial * fLoop;
            }
            y = y + (sign * (power/(double)factorial));
            if (sign == 1){
                printf("  + ");
                sign = -1;
            } else {
                printf("  - ");
                sign = 1;
            }
            printf("((x^%ld)/%ld!)", i, i);
        }
        printf("\n\n\t\t\t   ________________________________________\n\n ");
		printf(" \n\t\t\t\ty= %lf \n\n", y);
    }
    return 0;
}
