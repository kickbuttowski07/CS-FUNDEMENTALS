#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 1, MOD = (int)(1e9 + 7);
#define ll long long
#define vll vector<ll>
#define pll pair<ll, ll>
#define mll map<ll, ll>
#define forl(i, a, b, k) for (ll i = a; i < b; i += k)
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin(), a.rend()

// QUIZ: https://www.geeksforgeeks.org/quizzes/pointers-gq/

// Types:
// 1. NULL POINTER
// The NULL Pointers are those pointers that do not point to any memory location. (default stores = 0)
// They can be created by assigning NULL value to the pointer. 
// A pointer of any type can be assigned the NULL value.

// 2.VOID POINTER
// void * type pointers cannot be de-referenced. We must type cast them before de-referencing. else (compile error) 
// The void pointers in C are the pointers of type void. 
// It means that they do not have any associated data type. 
// They are also called generic pointers as they can point to any type and can be typecasted to any type.

// 3.WILD POINTER
// The wild pointers are pointers that have not been initialized with something yet. 
// These types of C-pointers can cause problems in our programs and can eventually cause them to crash

// 4.DANGLING POINTER



// Size of pointer is depend on system not datatype (32 bit -> 4 bytes), (64 bit -> 8 bytes)

inline void solve()
{
    int var = 20;
    int *ptr = &var;
    // here ptr points to integer var where ptr stores the address value of var;
    cout << ptr << endl;                // output---> 0x61fed8 (gives the address of var)
    *ptr = 30;                          // at the address 0x61fed8 the value changes from 20 to 30;(dereferencing of pointers can be done in this way)
    cout << ptr << endl;                // output---> 0x61fed8 (value of ptr is not changed)
    cout << *ptr << " " << var << endl; // output---> 30  30 (But the value is changed from 20 to 30)
    // Double Pointer:
    int **ptr1 = &ptr;
    // Double pointer ptr1 points to single pointer ptr, ptr1 stores the address value of ptr;
    // To change the the value of var by double pointer
    cout << ptr1 << endl;                                // output---> 0x61fed4(gives the address of ptr)
    **ptr1 = 40;                                         // at value at address of value at address 0x61fed4 changes from 30 to 40
    cout << ptr1 << endl;                                // output---> 0x61fed4 (value of ptr1 is not changed)
    cout << **ptr1 << " " << *ptr << " " << var << endl; // output--->40;
    // like this way we can create triple, quadraple.....pointers;


    // Increment/Decrement
    // Addition/Subtraction of Integer
    // Subtracting Two Pointers of Same Type
    // Comparing/Assigning Two Pointers of Same Type
    // Comparing/Assigning with NULL


    // Increment, decrement, finding ith postion from curr
    int arr[5] = {1, 3, 2, 5, 4};
    int *ptr = arr;         // (&arr[0] is correct), (&arr is wrong);
    //both arr, ptr are pointers to the array
    cout << *(ptr) << endl; // 1;
    ptr++;
    cout << *(ptr) << endl; // 3 
    ptr--;
    cout << *(ptr) << endl;   // 1    arr[i];
    cout << *(ptr++) << endl; // 1  arr[i++];
    cout << *(++ptr) << endl; // 2  arr[++i];

    cout << *(ptr - 2) << endl; // 1 arr[i - 2];
    cout << *(ptr + 2) << endl; // 4 arr[i + 2];

    cout << (ptr + 2) << endl; // address of ptr + 2 * (sizeof)

    // Address finding
    int arr[5] = {1, 3, 2, 5, 4};
    int sz = sizeof(arr) / sizeof(arr[0]);
    int *ptr = arr;
    cout << ptr << endl; // address of arr or arr[0]
    cout << *ptr << endl; // value at arr[0] (dereference)

    cout << ptr + sizeof(arr[0]) * 2 << endl; // address of arr[2] 
    // similarly address of new *(ptr + i) = address of curr *(ptr) + i * (sizeof(arr[0]));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 1, MOD = (int)(1e9 + 7);
// #define int long long
#define ll long long
#define forl(i, a, b, k) for (ll i = a; i < b; i += k)
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin(), a.rend()
#define pb push_back
                                    
                                    
#define F first
#define S second
            
int add(int a, int b) {
    return a + b;
}
                                    
inline void solve() {
    // normal pointer declaration
    int *ptr2; // no precedence blocking

    int *ptr[10]; // array of 10 pointers -> ('[]' > '*') precedence
    int (*ptr1)[10]; // pointer to an array of 10 integers -> ('(*)' > '[]') precedence

    // Prototype of function pointer (neccessary to match the function signature too)
    // int (*ptr)(int, int); ->pointer to a function containing 2 int arguments and returns integer

    // assigning address of a function to a function pointer
    int (*ptr3)(int, int) = &add; // stores address
    int sum3 = (*ptr3)(2, 3); // need to dereference so use (*) careful with precedence
    int sum33 = ptr3(2, 3);
    cout << sum3 << ' ' << sum33 << endl;

    int (*ptr4)(int, int) = add; // as name function represents initial address of the function
    int sum4 = (*ptr4)(2, 3);
    int sum44 = ptr4(2, 3);
    cout << sum4 << ' ' << sum44 << endl;

    // Both are correct

    int (*(*pptr)(int, int))(int, int); // pointer to function returning pointer to function(prototype)
    // similar to
    int a = 3;  // a holds 3
    cout << a << endl;
    int *b = &a; // b holds a address
    cout << &a << " " << b << " " << *b << endl;
    int **c = &b; // c holds b address
    cout << &b << " " << c << " " << *c << endl;
}
                        
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
             
    int t = 1;
    // cin >> t;
    for(int _ = 1; _ <= t; _++) {
        // cout << "Caso #" << _ << endl;
        solve();
    }
                
    return 0;
}
// JAI SHREE RAM

// Properties of Function Pointer :
// Function pointer points to the code instead of the data so there are some restrictions on the function pointers as compared to other pointers. Following are some important properties of function pointer:

// Points to the memory address of a function in the code segment.
// Requires the exact function signature (return type and parameter list).
// Can point to different functions with matching signatures.
// Cannot perform arithmetic operations like increment or decrement.
// Supports array-like functionality for tables of function pointers.



#include <stdio.h>

int main() {
    // 1D array
  	int arr[5] = { 1, 2, 3, 4, 5 };
  	int n = sizeof(arr) / sizeof(arr[0]);

    // Defining the pointer to first element of array
    // The memory address of the first element is the same as the name of the array:
    int* ptr = arr; // arr = (implicitly &arr[0])
    // int *ptr = &arr[0]; // both are same(arr(by default), &arr[0])
    // &arr is wrong
    int *ptr1 = &arr[0];
    // %p is used while printing addresses
    printf("%p \n", ptr);
    printf("%p \n", ptr1);

    printf("%d \n", *arr); // first element of array value
    printf("%d \n", *(&arr[0])); // first element (arr = &arr[0])

    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    for (int i = 0; i < 5;i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    // 3D array
    int arr_3d[2][3][2] = {{{5, 10}, {6, 11}, {7, 12}},
                        {{20, 30}, {21, 31}, {22, 32}}};

    // in this arr_3d == &arr_3d[0][0][0];
    // int* ptr = &arr_3d[0][0][0];

    int (*ptr_3d)[2][3][2] = &arr_3d;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 2; k++) {
            
                // Accessing using pointer notation
                // printf("%d ", *(*(*(arr_3d + i) + j) + k));
                printf("%d ", (*ptr_3d)[i][j][k]);
                // here ptr_3d[i][j][k] is not allowed, need to dereference
            }
            printf("\n");
        }
        printf("\n");
    }




    return 0;
}

