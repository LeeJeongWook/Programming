#include <stdio.h>

int main(){
    char word;

    scanf("%c", &word);

    if(word == 'k'){
        printf("����\n");
    }
    else{
        printf("��\n");
    }

    if('h' < word){
        printf("��\n");
    }
    else{
        printf("����\n");
    }

    if(word <= 'o'){
        printf("��\n");
    }
    else{
        printf("����\n");
    }

    return 0;
}