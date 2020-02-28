#include <stdio.h>

int give_me_numbers(void){
    int number;

    printf("How big is your array? (Must be less than 25)\n");
    scanf("%d", &number);

    int give_me[number];


    for(int i =0;i < number; i++){
        printf("Give me number %d: ", i +1);
        scanf("%d", &give_me[i]);
    }

    for(int i = 0; i < number; i++){
        printf("%d ",give_me[i]);
    }


    return 0;
}


int main(void){
    give_me_numbers();
    return 0; 

}