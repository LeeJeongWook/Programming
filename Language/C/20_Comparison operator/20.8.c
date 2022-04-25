#include <stdio.h>

int main(){
    char word;

    scanf("%c", &word);

    if(word == 'k'){
        printf("°ÅÁþ\n");
    }
    else{
        printf("Âü\n");
    }

    if('h' < word){
        printf("Âü\n");
    }
    else{
        printf("°ÅÁþ\n");
    }

    if(word <= 'o'){
        printf("Âü\n");
    }
    else{
        printf("°ÅÁþ\n");
    }

    return 0;
}