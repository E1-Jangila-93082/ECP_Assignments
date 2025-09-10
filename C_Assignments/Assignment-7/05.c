#include <stdio.h>
#include <string.h>

// Function to accept 5 names
void acceptNames(char names[5][50]) {
    printf("Enter 5 student names:\n");
    for(int i = 0; i < 5; i++) {
        printf("Name %d: ", i+1);
        scanf("%49s", names[i]);  // no & needed since names[i] is already char*
    }
}

// Function to print names
void printNames(char names[5][50]) {
    printf("\nStudent Names:\n");
    for(int i = 0; i < 5; i++) {
        printf("%s\n", names[i]);
    }
}

// Function to sort names alphabetically
void sortNames(char names[5][50]) {
    char temp[50];
    for(int i = 0; i < 5-1; i++) {
        for(int j = i+1; j < 5; j++) {
            if(strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}

int main() {
    char names[5][50];

    acceptNames(names);
    printf("\nBefore sorting:\n");
    printNames(names);

    sortNames(names);

    printf("\nAfter sorting:\n");
    printNames(names);

    return 0;
}

