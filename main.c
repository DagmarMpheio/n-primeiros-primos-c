#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, div,i,cont,x=0;
    printf("Digite quantos numeros primos desejas: ");
    scanf("%d",&n);
    for(i=2;x<n;i++){
        cont=0;
        for(div=i;div>0;div--){
            if(i%div==0){
                cont++;
            }
        }
        if(cont==2){
            printf(" %d ",i);
            x++;
        }

    }
    return 0;
}
