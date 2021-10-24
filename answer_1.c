#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int p = 50; //random
const int N = 1e5+3, m = 1e9+7;

long long calculate_hash(char s[]){
    int *powers;
    powers = (int *)malloc(N * sizeof(int));
    powers[0] = 1;
    for (int i = 1 ; i < N; i++)
    {
        powers[i]=(powers[i-1]*p)%m;
    }
    long long hash = 0; 
    for (int i = 0; i < strlen(s); i++)
    {
        hash = (hash + (s[i] - 'a' + 1)*powers[i]) % m; 
    }
    return hash;
    
}

int main(){
    
    char input[100];
    printf("Enter a string\n");
    gets(input);
    printf("Here is the unique hash value\n");
    printf("%lld",calculate_hash(input));
    return 0;
}