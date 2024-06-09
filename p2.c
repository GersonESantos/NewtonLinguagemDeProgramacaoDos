#include <stdio.h>
#include <string.h>

int func(int n) {
    if (n<-5)
      return 0;
    else 
      return n+func(n-1);
    
    }
int main() {
    printf("%d",func(10));
}
    
