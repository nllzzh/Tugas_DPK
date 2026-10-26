#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char *nama1 = "ayah";
    char *nama2 = "bunda";
    char *nama3 = "kaka";
    char *nama4 = "ade";
    if (argc <5) {
        printf("Argumen program kurang\n");
        printf("tambahkan argumen seperti %s %s %s %s %s",argv[0],nama1,nama2,nama3,nama4);
        return -1;
    }
    printf("hello %s\n",argv[1]);
    printf("hello juga %s\n",argv[2]);
    printf("hai %s\n",argv[3]);
    printf("hai juga %s\n",argv[4]);
    return 0;
    
} 