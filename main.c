#include <stdio.h>
#include "mylib.h"
#include "arraylib.h"

int main() {
    int mainChoice;

    do {
        printf("===== MAIN MENU =====");
        printf("1. Number Functions ");
        printf("2. Array Functions ");
        printf("3. Exit");

        
        printf("Enter your choice: ");
        scanf("%d", &mainChoice);

        if (mainChoice == 1) {
            int choice, num;
            do {
                printf("--- Number Functions MENU ---");
                printf("1. Check Armstrong Number");
                printf("2. Check Adams Number");
                printf("3. Check Prime Palindrome Number");
                printf("4. Back to Main Menu");
                printf("Enter your choice: ");
                scanf("%d", &choice);

                if (choice == 4) {
                 break;
                }

                printf("Enter a number: ");
                scanf("%d", &num);

                switch(choice) {
                    case 1:
                        if(isArmstrong(num)){
                            printf("%d is an Armstrong number.", num);
                        }else{
                            printf("%d is NOT an Armstrong number.", num);
                        }
                        break;
                        
                    case 2:
                        if(isAdams(num)){
                            printf("%d is an Adams number.", num);
                        }else{
                            printf("%d is NOT an Adams number.", num);
                        }
                        break;
                    case 3:
                        if(isPrimePalindrome(num)){
                            printf("%d is a Prime Palindrome number.", num);
                        }else{
                            printf("%d is NOT a Prime Palindrome number.", num);
                        }
                        break;
                    default:
                        printf("Invalid choice! Please select 1-4.");
                }
            } while(choice != 4);

        } else if (mainChoice == 2) {
            // Array functions submenu
            int arr[100], size = 0, value, idx, i, choice;
            do {
                printf("--- Array Functions MENU ---");
                printf("1. Enter Array");
                printf("2. Display Array");
                printf("3. Max Element Index");
                printf("4. Min Element Index");
                printf("5. Average of Array");
                printf("6. Reverse Array");
                printf("7. Sort Array");
                printf("8. Search Element in Array");
                printf("9. Back to Main Menu");


                printf("Enter your choice: ");
                scanf("%d", &choice);

                switch(choice) {
                    case 1:
                        printf("Enter array size: ");
                        scanf("%d", &size);
                        printf("Enter %d elements:", size);
                        for(i = 0; i < size; i++) {
                            scanf("%d", &arr[i]);
                        }
                        break;
                    case 2:
                        printf("Array elements: ");
                        displayArray(arr, size);
                        break;
                    case 3:
                        idx = findMaxIndex(arr, size);
                        printf("Max element index: %d", idx);
                        break;
                    case 4:
                        idx = findMinIndex(arr, size);
                        printf("Min element index: %d", idx);
                        break;
                    case 5:
                        printf("Average of array: %.2f", findAverage(arr, size));
                        break;
                    case 6:
                        reverseArray(arr, size);
                        printf("Array reversed.");
                        displayArray(arr, size);
                        break;
                    case 7:
                        sortArray(arr, size);
                        printf("Array sorted.");
                        displayArray(arr, size);
                        break;
                    case 8:
                        printf("Enter value to search: ");
                        scanf("%d", &value);
                        idx = linearSearch(arr, size, value);
                        if (idx != -1){
                            printf("Element %d found at index: %d", value, idx);
                        }else{
                            printf("Element %d not found in array.", value);
                        }
                        break;
                    case 9:
                        break;
                    default:
                        printf("Invalid choice! Please select 1-9.");
                }
            } while(choice != 9);
        } else if (mainChoice != 3) {
            printf("Invalid main menu choice! Please select 1-3.");
        }
    } while(mainChoice != 3);

    printf("Exiting program. Goodbye!");
    return 0;
}