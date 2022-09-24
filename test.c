#include <stdio.h>
#include <stdlib.h>

int main() {
int current = 1;
int last = 0;
int fibNums[46];

// Generate array of fibonacci numbers

for (int i=0; i<46; i++) {
    int placeholder = current;
    
    fibNums[i] = current;

    current += last;
    last = placeholder;
}


// Get num from user
int userNum;
printf("Enter your number: ");
scanf("%d", &userNum);


// distance to userNum
int idx = 0;

while (fibNums[idx] < userNum) {
    idx++;
}

int closest = (fibNums[idx] - userNum) < (userNum - fibNums[idx-1]) ? fibNums[idx]:fibNums[idx-1];

printf("The closest Fibonacci number to %d is %d.\n", userNum, closest);



return 0;
}