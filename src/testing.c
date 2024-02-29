#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int age;
    float income;
    char *name;
} Human;


Human player1; //Global Struct

void allMyStructs(){
    player1.age = 25;
    player1.income = 100000.00;
    player1.name = "John Doe";
    // printf("Name: %s, Age: %d, Income: %.2f\n", player1.name, player1.age, player1.income);
}

void doSomething(){
    int x = 10;
    int y = 22;
    printf("Hello World!\n");
    printf("First Value: %d , Second Value: %d,  Result: %d\n", x, y, x + y);
    int newY = ++y;
    printf("%d // %d // %d \n" , newY, ++y, y);

    int dummy = 123;
    printf("Huzzah I made This {%d} false!:{%d}, and how about !!: %d \n",dummy,!dummy, !!dummy);
}

void straightUpLine(int numTimes){
    for(int i = 0; i < numTimes; i++){
        printf("------------------------------------------------\n");
    }
};

void evenOdd(int num){
    if(num == 0){
        printf("Number %d is: Neither Even nor Odd\n", num);
        return;
    }

    if(num % 2 == 0){
        printf("Number %d is: Even\n", num);
    } else {
        printf("Number %d is: Odd\n", num);
    }
}

void flowControlGrader(int num){
    if(num == 100){
        printf("You got a perfect score!\n");
    } else if(num >= 90){
        printf("You got an A!\n");
    } else if(num >= 80){
        printf("You got a B!\n");
    } else if(num >= 70){
        printf("You got a C!\n");
    } else if(num >= 60){
        printf("You got a D!\n");
    } else {
        printf("You got an F!\n");
    }
}

int returnBiggestInt(int a, int b, int c){
    if(a > b && a > c){
        return a;
    } else if(b > a && b > c){
        return b;
    } else {
        return c;
    }
}

int max(int arr[], int n){
    int max = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i]; // Update max if the current element is greater
        }
    }
    return max;
}

int main() {
    printf("Welcome to my dumb program!!\n"); // Print a welcome message
    doSomething(); // Call the doSomething function
    straightUpLine(3);
    evenOdd(10);
    evenOdd(11);
    flowControlGrader(95);
    flowControlGrader(20);
    flowControlGrader(66);


    int arr[10];
    int prepopulatedArr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    printf("Size of arr: %d\n", sizeof(arr)); // Size of arr is 40 because it is an array of 10 integers
    printf("Size of prepopulatedArr: %d\n", sizeof(prepopulatedArr)); // Size of prepopulatedArr is 60 because it is an array of 15 integers
    printf("Size of prepopulatedArr Index 0: %d\n", sizeof(prepopulatedArr[0])); // Size of prepopulatedArr Index 0 is 4 because it is an integer
    
    
    int testArr[] = { 1, 12, 32, 333, 42 };
    int length = sizeof(testArr) / sizeof(testArr[0]); // Calculate the length of the array by dividing the size of the array by the size of the first element 20bytes/4bytes = 5
    printf("The length of the array is: %d\n", length);
    printf("The biggest of 3 ints is: %d\n", returnBiggestInt(30, 20, 30));
    printf("The max of the array is: %d\n", max(testArr, length));

    allMyStructs();
    printf("Here's one of my structs: %s \n ", player1.name);


    return 0; // Return 0 to the OS to indicate success
}
