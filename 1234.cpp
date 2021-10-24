#include <stdio.h>

int main() {
    int x, n, flag = 0;
    float y = 0;
    printf("\t\t\t\tEnter x: ");
    scanf("%d", &x);
     printf("\n\t\t   _____________________________________\n\n ");
    printf("\t\t\t\tEnter n: ");
    scanf("%d", &n);
    printf("\n\t\t   ______________________________________\n\n ");

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
                    printf("\t\t    Error: x must be a positive integer.\n");
                    break;
                case 2:
                    printf("\t\t    Error: n must be a positive integer.\n");
                    break;
                case 3:
                    printf("\t\t    Error: n must be an odd number.\n");
            }
            flag = flag/10;
        }
    }
    else {
        int i, factorial, power, pLoop, fLoop, sign = 1;
        printf("\n\t\ty =");
        
        for (i = 1; i <= n; i = i + 2){
            power = 1, factorial = 1;
            for (pLoop = 0; pLoop < i; pLoop++){
                power = power * x;
            }
            for (fLoop = 1; fLoop <= i; fLoop++){
                factorial = factorial * fLoop;
            }
            y = y + (sign * (power/(float)factorial));
            if (sign == 1){
                printf("  + ");
                sign = -1;
            } else {
                printf("  - ");
                sign = 1;
            }
            printf("((x^%d)/%d!)", i, i);
        }
        printf("\n\n\t\t   ______________________________________\n\n ");
		printf(" \n\t\t\t\ty= %f \n\n", y);
    }
    return 0;
}
