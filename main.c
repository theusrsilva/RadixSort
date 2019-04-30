#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main() {
    int n;
    double d;
    srand(time(NULL));
    printf("digite a quantidade de numeros que voce quer:\n");
    scanf("%d",&n);
    printf("digite a o maior digito presente:\n");
    scanf("%lf",&d);
    int v[n];
    for(int j =0;j<n;j++){
        v[j]=rand() % (int)pow(10.0,d);
    }
    for (int i=0;i<n;i++){
        printf("%d\n",v[i]);
    }
}