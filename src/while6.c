#include <stdio.h>
int main(){
    int i , j;

i = 1;
j = 0;

while( i <= 10){
    while( j <= 10){
        printf("%d x %d = %d\n",i,j,(i*j)); 
        j++;
    }
    j=0;
    printf("\n");
    i++;

}
return 0;
}