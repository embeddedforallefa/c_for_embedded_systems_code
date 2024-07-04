#include <stdio.h>
#include <string.h>

// Define a union named 'Data'
union Data {
    int intValue;
    float floatValue;
    char stringValue[20];
};

int main() {
    // Declare an instance of the union
    union Data data;
    
    // Size of union size of its largest member
    printf("size: %d\n", sizeof(union Data));

    // Assign values to the members
    data.intValue = 42;
    printf("intValue: %d\n", data.intValue);

    data.floatValue = 3.14f;
    printf("floatValue: %.2f\n", data.floatValue);

    // The union shares the same memory space, so intValue is now overwritten by floatValue
    printf("intValue after floatValue assignment: %d\n", data.intValue);

    // Assign a string to the stringValue member
    strcpy(data.stringValue, "Hello, Union!");
    printf("stringValue: %s\n", data.stringValue);

    // Accessing intValue after assigning a string will yield unpredictable results
    printf("intValue after stringValue assignment: %d\n", data.intValue);

    return 0;
}
