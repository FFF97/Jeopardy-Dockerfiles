#include <stdio.h>
#include <unistd.h>

int main(){
    char buffer[16] = {0};
    setvbuf(stdout, NULL, _IOLBF, 0);
    printf("Welcome to Sniperoj!\n");
    printf("Do your kown what is it : [%p] ?\n", buffer);
    printf("Now give me your answer : \n");
    read(0, buffer, 36);
    return 0;
}
