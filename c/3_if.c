#include<stdio.h>
int main(){
    int marks;
    scanf("%d",&marks);
    if (marks>=80){
        printf("Excelent marks: %d",marks);
    }
    else if (marks>=60){
        printf("Very Good marks: %d",marks);
    }
    else if (marks>=35){
        printf("Good marks: %d",marks);
    }else{
        printf("Fail marks: %d",marks);
    }
}