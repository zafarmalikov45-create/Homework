#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int removeZero(int son){
    int natija = 0;
    int joy = 1;

    while(son > 0){
    int digit = son % 10;

    if(digit != 0){
    natija += digit * joy;
    joy *= 10;
        }
     son /= 10;
    }

    return natija;
}

int main(){
// char matn[256];

// printf("Matn kiriting: ");
// for(int i=0;matn[i]!='\0';i++){
// if(matn[i]=='a'||matn[i]=='e'||matn[i]=='i'||matn[i]=='o'||matn[i]=='u')
// matn[i]=toupper(text[i]);
//     }

// printf("Natija: %s\n",matn);




    // int n,x;

    // printf("Sonni  kiriting n: ");
    // scanf("%d",&n);

    // int a[n][n];

    // for(int i=0;i<n;i++){
    // for(int j=0;j<n;j++){
    // scanf("%d", a[i][j]);
    // printf("%d",a[i][j]);
    //  }
    // printf("\n");
    // }

    // printf("X sonini kiriting: ");
    // scanf("%d",&x);

    // for(int i=0;i<n;i++){
    // a[i][i]+=x;
    // a[i][n-1-i]+=x;
    // }


    // for(int i=0;i<n;i++){
    // for(int j=0;j<n;j++){
    // printf("%d",a[i][j]);
    // }
    // printf("\n");
    // }

int n;
printf("FYLGA NECHTA SON SAQLAMQCHISIZ : ");
scanf("%d", &n);
printf("%d, ta son kiritishingiz mumkin: ", n);
int sum=0;
FILE *f = fopen ("number.txt", "a");
for (int x=0; )






    // int arr[10];
     // printf("\n10 ta son kiriting: ");

    // for(int i=0;i<10;i++)
    // scanf("%d",&arr[i]);

    // int songi1=arr[8];
    // int songi2=arr[9];

    // for(int i=9;i>=2;i--)
    // arr[i]=arr[i-2];

    // arr[0]=songi1;
    // arr[1]=songi2;

    // for(int i=0;i<10;i++)
    //     printf("%d ",arr[i]);





    // int number;

    // printf("\n\nSon kiriting: ");
    // scanf("%d",&number);

    // printf("0 siz : %d\n",removeZero(number));

}


