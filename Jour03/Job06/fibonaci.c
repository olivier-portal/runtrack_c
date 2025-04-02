/*
Fibonaci in algorithmes:

if n=0 or n=1 then fib(n)=1

else: a = 1, b = 2, for i = 2 while i <= n do c = a + b, a = b, b = c

---------------------------------------------
if (int n == 0 || int n == 1) {
    return 1;
}

int a = 1;
int b = 1;
int c = 0;

for (i = 2; i <= n; i++) {
    c = a + b;
    a = b;
    b = c;
}
return b;
*/

#include <stdio.h>

int fibonaci(int *n) {
    if (n == NULL) {
        return 0;
    }

    if (*n == 0 || *n == 1) {
        return 1;
    }
    
    int a = 1;
    int b = 1;
    int c = 0;
    
    for (int i = 2; i <= *n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}