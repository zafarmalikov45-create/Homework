#include <stdio.h>
int func(int a, int b){
printf("%d ", a);

if(a == b)
return a;

if(a < b)
return a + func(a + 1, b);
else
return a + func(a - 1, b);
}

void sonlar(int a, int b){
printf("%d ", a);

if(a == b)
return;

if(a < b)
sonlar(a + 1, b);
else
sonlar(a - 1, b);
}

void tartib(int n){
    if(n < 10){
        printf("%d ", n);
        return;
    }

    tartib(n / 10);
    printf("%d ", n % 10);
}


int main(){
// int a, b;

// printf("IKKTA SON KIRITING: ");
// scanf("%d%d", &a, &b);

// int sum = func(a, b);
// printf("= %d", sum);




// int a, b;
// printf("IKKTA SON KIRITING: ");
// scanf("%d%d", &a, &b);

//  sonlar(a, b);

int n;

    printf("SON KIRITING: ");
    scanf("%d", &n);

    tartib(n);

}




