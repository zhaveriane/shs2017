//Sales tax

//Solution
//
//Ignore this:
#include <iostream>
using namespace std;
#define println(x) do { cout << x << endl; } while (0) 
#define print(x) do { cout << x; } while (0) 


int main() {
    if (salesTax(100.0, .1) == 10.0){
        println("Passed test 1!");
    } else {
        print("Test 1 failed: returned ");
        print(salesTax(100, .1));
        println(" instead of 10.0");
    }
    
    if (salesTax(16, .25) == 4.0){
        println("Passed test 2!");
    } else {
        print("Test 2 failed: returned ");
        print(salesTax(16, .25));
        println(" instead of 4.0");
    }
    
    return 0;
}

//
//   Calculate Sales Tax:
//

float salesTax(float saleTotal, float taxRate){
    return saleTotal*taxRate;
}


//Addition and multiplication

//Ignore this:
#include <iostream>
using namespace std;
#define println(x) do { cout << x << endl; } while (0) 
#define print(x) do { cout << x; } while (0) 

int main() {
    if (add(5, 2) == 7){
        println("Passed test 1!");
    } else {
        print("Test 1 failed: returned ");
        print(add(5, 2));
        println(" instead of 7");
    }

    if (add(10, 32) == 42){
        println("Passed test 2!");
    } else {
        print("Test 2 failed: returned ");
        print(add(10, 32));
        println(" instead of 42");
    }
    
    if (multiply(5, 2) == 10){
        println("Passed test 3!");
    } else {
        print("Test 3 failed: returned ");
        print(add(5, 2));
        println(" instead of 10");
    }

    if (multiply(10, 32) == 320){
        println("Passed test 4!");
    } else {
        print("Test 4 failed: returned ");
        print(add(10, 32));
        println(" instead of 320");
    }
    
    return 0;
}

int add(int a, int b){
    // code here
}

int multiply(int a, int b){
    // code here
}


//Arrays

//Ignore this:
#include <iostream>
using namespace std;
#define println(x) do { cout << x << endl; } while (0) 
#define print(x) do { cout << x; } while (0) 


int main() {
    if (getFirstArray() == 5){
        println("Passed test 1!");
    } else {
        print("Test 1 failed: returned ");
        print(getFirstArray());
        println(" instead of 5");
    }
    
    return 0;
}

// Get the first number in an array
int getFirstArray(){
    int arr[3] = {5, 10, 15};

    // code here
}

//If Statement

//Ignore this:
#include <iostream>
using namespace std;
#define println(x) do { cout << x << endl; } while (0) 
#define print(x) do { cout << x; } while (0) 


int main() {
    if (isold(500)){
        println("Passed test 1!");
    } else {
        print("Test 1 failed: returned ");
        print(isold(500));
        println(" instead of true");
    }

    if (isold(5)){
        println("Passed test 2!");
    } else {
        print("Test 2 failed: returned ");
        print(isold(5));
        println(" instead of false");
    }
    
    return 0;
}

// Return whether or not a person is old
// A person is old if he is older than 80
bool isOld(int age){
    // code here
}

//Fibbo

//
//Ignore this:
#include <iostream>
using namespace std;
#define println(x) do { cout << x << endl; } while (0) 
#define print(x) do { cout << x; } while (0) 


int main() {
    if (fibbonacci(2) == 1){
        println("Passed test 1!");
    } else {
        print("Test 1 failed: returned ");
        print(fibbonacci(0));
        println(" instead of 1");
    }
    
    if (fibbonacci(1) == 1){
        println("Passed test 2!");
    } else {
        print("Test 2 failed: returned ");
        print(fibbonacci(1));
        println(" instead of 1");
    }

    if (fibbonacci(10) == 55){
        println("Passed test 3!");
    } else {
        print("Test 3 failed: returned ");
        print(fibbonacci(10));
        println(" instead of 55");
    }
    
    return 0;
}


//   Challenge:
//   Calculate the nth fibbonacci number:
//

int fibbonacci(int n){
    if ((n == 1) || (n == 2)){
        return 1;
    } else {
        return fibbonacci(n-1) + fibbonacci(n-2);
    }

}

//Factorial

//
//Ignore this:
#include <iostream>
using namespace std;
#define println(x) do { cout << x << endl; } while (0) 
#define print(x) do { cout << x; } while (0) 


int main() {
    if (factorial(0) == 1){
        println("Passed test 1!");
    } else {
        print("Test 1 failed: returned ");
        print(factorial(0));
        println(" instead of 1");
    }
    
    if (factorial(1) == 1){
        println("Passed test 2!");
    } else {
        print("Test 2 failed: returned ");
        print(factorial(1));
        println(" instead of 1");
    }

    if (factorial(5) == 120){
        println("Passed test 3!");
    } else {
        print("Test 3 failed: returned ");
        print(factorial(5));
        println(" instead of 130");
    }

    if (factorial(10) == 3628800){
        println("Passed test 4!");
    } else {
        print("Test 4 failed: returned ");
        print(factorial(10));
        println(" instead of 3628800");
    }
    
    return 0;
}


//   
//   Calculate the factorial of n:
//

int factorial(int n){
    if ((n == 1) || (n == 0)){
        return 1;
    } else {
        return n * factorial(n-1);
    }

}

// Check for prime number

//
//Ignore this:
#include <iostream>
using namespace std;
#define println(x) do { cout << x << endl; } while (0) 
#define print(x) do { cout << x; } while (0) 


int main() {
    if (isPrime(0) == 1){
        println("Passed test 1!");
    } else {
        print("Test 1 failed: returned ");
        print(isPrime(0));
        println(" instead of 1");
    }
    
    if (isPrime(1) == 1){
        println("Passed test 2!");
    } else {
        print("Test 2 failed: returned ");
        print(isPrime(1));
        println(" instead of 1");
    }

    if (isPrime(5) == 120){
        println("Passed test 3!");
    } else {
        print("Test 3 failed: returned ");
        print(isPrime(5));
        println(" instead of 130");
    }

    if (isPrime(10) == 3628800){
        println("Passed test 4!");
    } else {
        print("Test 4 failed: returned ");
        print(isPrime(10));
        println(" instead of 3628800");
    }
    
    return 0;
}



//Ignore this:
#include <iostream>
using namespace std;
#define println(x) do { cout << x << endl; } while (0) 
#define print(x) do { cout << x; } while (0) 


int main() {
    if (!isPrime(0)){
        println("Passed test 1!");
    } else {
        print("Test 1 failed: returned ");
        print(isPrime(0));
        println(" instead of false");
    }
    
    if (!isPrime(1)){
        println("Passed test 2!");
    } else {
        print("Test 2 failed: returned ");
        print(isPrime(1));
        println(" instead of false");
    }
    
    if (isPrime(2)){
        println("Passed test 3!");
    } else {
        print("Test 3 failed: returned ");
        print(isPrime(2));
        println(" instead of true");
    }
    
    if (!isPrime(4)){
        println("Passed test 4!");
    } else {
        print("Test 4 failed: returned ");
        print(isPrime(4));
        println(" instead of false");
    }
    
    if (isPrime(5)){
        println("Passed test 5!");
    } else {
        print("Test 5 failed: returned ");
        print(isPrime(5));
        println(" instead of true");
    }
    
    if (!isPrime(100)){
        println("Passed test 6!");
    } else {
        print("Test 6 failed: returned ");
        print(isPrime(100));
        println(" instead of false");
    }
    return 0;
}


//   
//   Compute whether n is prime:
//

bool isPrime(int n){
    if (n == 0 || n == 1){
        return false;
    }

    if (n == 2) {
        return 2;
    }

    for(int i = 2; i <= n/2; i++){
        if ((n%i) == 0) {
            return false;
        }
    }
    return true;
}

//Sum of Array

//Ignore this:
#include <iostream>
using namespace std;
#define println(x) do { cout << x << endl; } while (0) 
#define print(x) do { cout << x; } while (0) 


int main() {
    int array1[5] = {1, 1, 1, 1, 1};
    if (arraySum(array1) == 5){
        println("Passed test 1!");
    } else {
        print("Test 1 failed: returned ");
        print(sum(array1));
        println(" instead of 5");
    }

    int array2[10] = {13, 130, 54, 2, 6, 8, 2, 35, -1, 10};
    if (arraySum(array2) == 331){
        println("Passed test 2!");
    } else {
        print("Test 2 failed: returned ");
        print(arraySum(array2));
        println(" instead of false");
    }
    
    return 0;
}

// Return the sum of all the numbers in an array
int arraySum(int array[]){
    // code here
}

//Palindrome

//Ignore this:
#include <iostream>
using namespace std;
#define println(x) do { cout << x << endl; } while (0) 
#define print(x) do { cout << x; } while (0) 


int main() {
    int array1[6] = {1, 2, 3, 3, 2, 1};
    if (palindrome(array1, 6)){
        println("Passed test 1!");
    } else {
        print("Test 1 failed: returned ");
        print(palindrome(array1, 6));
        println(" instead of true");
    }

    int array2[8] = {13, 15, 20, 37, 38, 20, 15, 13};
    if (!palindrome(array2, 8)){
        println("Passed test 2!");
    } else {
        print("Test 2 failed: returned ");
        print(palindrome(array2, 8));
        println(" instead of false");
    }
    
    return 0;
}

// Given an array with an even number of integers
// Return whether or not the array is the same forwards and backwards
int palindrome(int array[], int size){
    // code here
}


