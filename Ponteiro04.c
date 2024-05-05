#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    int count = 10;
    int *pt = NULL;
    pt = &count;
    setlocale(LC_ALL, "Portuguese");
    
    printf("O valor contido na variavel count é %i\n", count);
    
    printf("O endereço contido no ponteiro pt é %p\n", pt);
    
    printf("O valor contido no endereço armazenado no ponteiro *pt é %i\n", *pt);
    
    *pt = 30;
    printf("O valor contido na variavel count agora é %i\n", count);
    printf("O endereço contido no ponteiro pt agora é %p\n", pt);
    printf("O valor contido no endereço armazenado no ponteiro *pt agora é %i\n", *pt);

    return 0;
}
