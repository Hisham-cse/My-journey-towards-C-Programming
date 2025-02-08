#include<stdio.h>
int main(){
    int choice;
    printf("Enter Your Choice (1-3)");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("You Choose: %d \n",choice);
            break;
        case 2:
            printf("You Choose: %d \n",choice);
            break;
        case 3:
            printf("You Choose: %d \n",choice);
            break;
        default:
            printf("Invalid Choice: %d \n",choice);
        

    }
}