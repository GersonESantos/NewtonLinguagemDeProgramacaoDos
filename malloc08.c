#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    double *v;
    int i;
    v = (double*)malloc(500000000000000 * sizeof(double));

    if (v == NULL) {
        printf("Sem espaço suficiente\n");
        return 1;
    } else {
        for (i = 0; i < 500000000000000; i++) {
            v[i] = i + 1;
            printf("v[%d] = %f\n", i, v[i]);
        }
    }

    free(v);
    return 0;
}
