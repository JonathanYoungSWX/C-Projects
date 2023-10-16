#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee {
    int employeeNum;
    char name[50];
    int grade;
    struct Employee* next;
};

struct Employee* head = NULL;

void addEmployee(int employeeNum, char name[], int grade) {
    struct Employee* newEmployee = (struct Employee*) malloc(sizeof(struct Employee));
    newEmployee->employeeNum = employeeNum;
    strcpy(newEmployee->name, name);
    newEmployee->grade = grade;
    newEmployee->next = head;
    head = newEmployee;
}

void printEmployees() {
    struct Employee* current = head;
    printf("Employee Records:\n");
    while (current != NULL) {
        printf("Employee Number: %d\n", current->employeeNum);
        printf("Name: %s\n", current->name);
        printf("Grade: %d\n", current->grade);
        printf("\n");
        current = current->next;
    }
}

void deleteEmployee(int employeeNum) {
    struct Employee* current = head;
    struct Employee* previous = NULL;
    while (current != NULL) {
        if (current->employeeNum == employeeNum) {
            printf("Are you sure you want to delete %s? (y/n)\n", current->name);
            char confirmation;
            scanf(" %c", &confirmation);
            if (confirmation == 'y') {
                if (previous == NULL) {
                    head = current->next;
                } else {
                    previous->next = current->next;
                }
                free(current);
                printf("Employee deleted successfully\n");
            } else {
                printf("Employee not deleted\n");
            }
            return;
        }
        previous = current;
        current = current->next;
    }
    printf("Employee not found\n");
}

void updateEmployee(int employeeNum, char name[], int grade) {
    struct Employee* current = head;
    while (current != NULL) {
        if (current->employeeNum == employeeNum) {
            strcpy(current->name, name);
            current->grade = grade;
            return;
        }
        current = current->next;
    }
    printf("Employee not found\n");
}

void searchEmployee(int employeeNum) {
    struct Employee* current = head;
    while (current != NULL) {
        if (current->employeeNum == employeeNum) {
            printf("Employee Number: %d\n", current->employeeNum);
            printf("Name: %s\n", current->name);
            printf("Grade: %d\n", current->grade);
            printf("\n");
            return;
        }
        current = current->next;
    }
    printf("Employee not found\n");
}

void sortEmployees() {
    struct Employee* sorted = NULL;
    struct Employee* current = head;
    while (current != NULL) {
        struct Employee* next = current->next;
        while (sorted != NULL && sorted->grade < current->grade) {
            pop(&sorted);
        }
        push(&sorted, current->employeeNum, current->name, current->grade);
        current = next;
    }
    head = sorted;
}

void pop(struct Employee** top) {
    if (*top == NULL) {
        printf("Stack is empty\n");
        return;
    }
    struct Employee* temp = *top;
    *top = (*top)->next;
    free(temp);
}

void push(struct Employee** top, int employeeNum, char name[], int grade) {
    struct Employee* newEmployee = (struct Employee*) malloc(sizeof(struct Employee));
    newEmployee->employeeNum = employeeNum;
    strcpy(newEmployee->name, name);
    newEmployee->grade = grade;
    newEmployee->next = *top;
    *top = newEmployee;
}


int main() {
    int choice, empNum, grade;
    char name[50];

    //Sample input
    addEmployee(1234, "Brian", 1);
    addEmployee(1233, "Aaron", 2);
    addEmployee(1222, "Matt", 3);
    addEmployee(1111, "Mohamed", 4);
    addEmployee(4111, "Jon", 5);

    while (1) {
        printf("Choose an option:\n");
        printf("1. Add Employee\n");
        printf("2. Delete Employee\n");
        printf("3. Update Employee Information\n");
        printf("4. Display All Employee Records\n");
        printf("5. Search for Employee by Employee Number\n");
        printf("6. Sort Employee Records\n");
        printf("7. Exit\n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter Employee Number: ");
                scanf("%d", &empNum);
                printf("Enter Employee Name: ");
                scanf("%s", name);
                printf("Enter Employee Grade: ");
                scanf("%d", &grade);
                addEmployee(empNum, name, grade);
                break;
            case 2:
                printf("Enter Employee Number to Delete: ");
                scanf("%d", &empNum);
                deleteEmployee(empNum);
                break;
            case 3:
                printf("Enter Employee Number to Update: ");
                scanf("%d", &empNum);
                printf("Enter New Employee Name: ");
                scanf("%s", name);
                printf("Enter New Employee Grade: ");
                scanf("%d", &grade);
                updateEmployee(empNum, name, grade);
                break;
            case 4:
                printEmployees();
                break;
            case 5:
                printf("Enter Employee Number to Search: ");
                scanf("%d", &empNum);
                searchEmployee(empNum);
                break;
            case 6:
                sortEmployees();
                printf("Employee Records Sorted\n");
                printEmployees();
                break;
            case 7:
                exit(0);
            default:
                printf("Invalid Choice\n");
        }
    }
    return 0;
}