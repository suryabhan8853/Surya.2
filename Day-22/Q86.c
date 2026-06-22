#include<stdio.h>
int main(){
    char str[50];
    int i,count = 1;
    printf("Enter a sentance : \n");
    gets(str);
    for(i=0;str[i] != '\0';i++){
        if(str[i] == ' ')
        count++;
    }
    printf("Number of words in sentence is %d",count);
    return 0;
}