#include <stdio.h>
#include <string.h>
#include <math.h>

void reverse(char str[]);
void Palindrome(char str[]);
int CountVowels(char str[]);
int sum(int n); //sum of n numbers using recursion
int factorial(int n); //using recursion to find factorial

double SD(double arr[],int N);


int lengthStr(char str[]);
int main(){
    int n;
    // scanf("%d", &n);  //input the number here. 
    char str[100];
    scanf("%[^\n]s",str);
    // puts(str);
    // reverse(str);
    // puts(str);
    // Palindrome(str);
    // int vowel = CountVowels(str);
    // printf("%d\n",vowel);

    printf("%d\n", sum(n));  // print the sum
    printf("%d\n", factorial(n)); //print the factorial
    return 0;
}

int lengthStr(char str[]){
    int l = 0;
    for(int i=0; str[i] !='\0';i++){
        l++;
    }
    return l;
}
 void reverse(char str[]){  //reverse a string
    int l = strlen(str);
    for(int i =0;i<(l/2);i++){
        char first = str[i];
        char last = str[l-1-i];
        str[l-1-i] = first;
        str[i] = last;
    }

}

void Palindrome(char str[]){
    int l = strlen(str);
    int flag = 1;
    for(int i=0; i<l/2; i++){
        if(str[i] != str[l-1-i]){
            flag = 0;
            break;
        }
    }
    if(flag == 1) printf("This is palindrome\n");
    else printf("This is not palindrome\n");
}

int CountVowels(char str[]){
    int vowel = 0;
    int i = 0;
    while(str[i] != '\0'){
        if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U'){
            vowel++;
        }
        i++;
    }

    return vowel;
}

int sum(int n){
    if(n == 1){
        return 1;
    }
    else{
        return n+ sum(n-1);
    }
}

int factorial(int n){
    int fact;
    if(n==1){
        return 1;
    }
    else{
        fact = n*factorial(n-1);
    }
    return fact;
}

double SD(double arr[],int N){
    double total=0,mean =0;
    for(int i=0; i<N;i++) total += arr[i];
    mean = total/N;

    double sum = 0;
    for(int i=0; i<N; i++){
        sum += pow(arr[i]-mean,2);
    }

    return sqrt(sum/N);
}

