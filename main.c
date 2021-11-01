#include <stdio.h>
#include <stdlib.h>
int main(){
    unsigned int input,output=0,temp[2]={0};
    int i=1,j=0,k=0;
    while(input<0||input>65536){
        printf("plz type Ur input(1~65535)：");
        scanf("%d",&input);
    }
    while(j<10){
        while(input/i){
            temp[0]=input/i%10;
            temp[1]=temp[0];
            while(k<j){
                temp[1]*=temp[0];
            k++;}k=0;
            printf("\n");
            output+=temp[1];
        i*=10;}i=1;
        if(output==input){printf("%d",output);break;}
        output=0;
    j++;}
    printf("\n\n%d is %sPerfect-Digital-Invariant",input,output==input ? "\0":"not ");
return 0;}
