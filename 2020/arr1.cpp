#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int inputNumber (int* input); 
int primeFactors (int input);

int main (void) {

int input;

while ( 1 ) {
    inputNumber (&input);
    primeFactors (input);
}
return 0;
}

int inputNumber (int* input){
    printf("\nInput a positive integer : ");
    scanf("%d", input);

    if(*input == 0){
    printf("\n End of program");
    exit(0); 
    }
    return 0;
}

int primeFactors (int input){
    int cnt = 0, i = 3, cnt_sum;

    printf("%d = ", input);

    if(input > 1){
        while ( input % 2 == 0){
        input/=2;
        cnt++;
		}
        if(cnt == 1){
            printf("%d",2);}
        else if( cnt > 0 && cnt != 1){
            printf("%d^%d * ",2,cnt);
        }
        cnt_sum += cnt;
        for (i=3; i <= sqrt(input); i = i+2){
            cnt = 0;
            while(input % i == 0){
                cnt++;
                input /= i;
            }
            if(cnt == 1){
                printf("%d",i);
            }
            else if( cnt > 0 && cnt != 1){
                printf("%d^%d ",i,cnt);
            }
            cnt_sum += cnt;
        }
        if(cnt_sum > 1){
            printf("\nIt is a composite number !\n");
        }
        else{
            printf("%d\nIt is a prime number !\n",input);
        }
    }
    else{
        printf("\nIt is an invalid number !\n");
    }
}
