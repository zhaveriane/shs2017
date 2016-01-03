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
    //Write code here
}


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
        println("Passed test 2!");
    } else {
        print("Test 2 failed: returned ");
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

