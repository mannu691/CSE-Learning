## 1. Add Two Integers
```c
int add(int a, int b) {
    return a + b;
}
```

## 2. Print ASCII Value of a Character
```c
int getASCII(char c) {
    return (int)c;
}
```

## 3. Swap Two Numbers Using XOR
```c
void swap(int *a, int *b) {
    if (a != b) { // Avoiding unnecessary swap if both are the same
        *a = *a ^ *b;
        *b = *a ^ *b;
        *a = *a ^ *b;
    }
}
```

## 4. Find the Size of All Data Types
```c
void printSizes() {
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of char: %zu byte\n", sizeof(char)); // Fixed single byte wording
}
```

## 5. Determine If Number is Odd or Even Using Conditional Operator
```c
const char* oddOrEven(int num) {
    return (num % 2 == 0) ? "Even" : "Odd";
}
```

## 6. Find Maximum Between Three Numbers
```c
int findMax(int a, int b, int c) {
    return (int)fmax(a, fmax(b, c));
}
```

## 7. Check Whether a Character is Uppercase or Lowercase
```c
const char* checkCase(char ch) {
    return (isupper(ch)) ? "Uppercase" : (islower(ch) ? "Lowercase" : "Invalid");
}
```

## 8. Find Number of Days in Month (Considering Leap Year)
```c
int isLeapYear(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

int daysInMonth(int month, int year) {
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: return 31;
        case 4: case 6: case 9: case 11: return 30;
        case 2: return (isLeapYear(year)) ? 29 : 28;
        default: return -1; // Invalid month
    }
}
```

## 9. Simple Calculator Using Switch Case
```c
float calculator(char op, float num1, float num2) {
    switch (op) {
        case '+': return num1 + num2;
        case '-': return num1 - num2;
        case '*': return num1 * num2;
        case '/': 
            if (num2 != 0) 
                return num1 / num2; 
            else 
                printf("Error: Division by zero\n");
            return 0;
        default: 
            printf("Invalid operator\n");
            return 0;
    }
}
```

## 10. Check Whether Character is Vowel or Consonant Using Switch
```c
const char* vowelOrConsonant(char ch) {
    switch (ch) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U': return "Vowel";
        default: return "Consonant";
    }
}
```

## 11. Calculate Sum of First n Natural Numbers
```c
int sumOfNaturalNumbers(int n) {
    return n * (n + 1) / 2;
}
```

## 12. Print Table for a Given Number Using While Loop
```c
void printTable(int num) {
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}
```

## 13. Check if a Number Can be Expressed as Sum of Two Prime Numbers
```c
int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int sumOfTwoPrimes(int num) {
    for (int i = 2; i <= num / 2; i++) {
        if (isPrime(i) && isPrime(num - i)) return 1;
    }
    return 0;
}
```

## 14. Check Prime Numbers Between Two Integers Using Functions
```c
void printPrimesInRange(int start, int end) {
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) printf("%d ", i);
    }
}
```

## 17. Sum of Natural Numbers Using Recursion
```c
int recursiveSum(int n) {
    if (n < 0) return 0; // Invalid input handling
    if (n == 0) return 0;
    return n + recursiveSum(n - 1);
}
```

## 18. Find the Largest Number in an Array
```c
int findLargest(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
```

## 19. Reverse an Array
```c
void reverseArray(int arr[], int size) {
    if (size <= 1) return; // No reversal needed
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}
```

## 20. Sort Array in Ascending Order Using Bubble Sort
```c
void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int swapped = 0; // Flag to check if any swapping occurred
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (!swapped) break; // If no swap happened, array is sorted
    }
}
```
