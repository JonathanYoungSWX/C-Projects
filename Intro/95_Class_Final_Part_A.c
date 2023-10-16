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
struct Employee* softwareDevs = NULL;
struct Employee* informationTech = NULL;
struct Employee* softwareTech = NULL;


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

void addEmployeeToList(struct Employee** head, int employeeNum, char name[], int grade) {
    struct Employee* newEmployee = (struct Employee*) malloc(sizeof(struct Employee));
    newEmployee->employeeNum = employeeNum;
    strcpy(newEmployee->name, name);
    newEmployee->grade = grade;
    newEmployee->next = *head;
    *head = newEmployee;
}

void printEmployeesInList(struct Employee** head) {
    struct Employee* current = *head;
    while (current != NULL) {
        printf("Employee Number: %d\n", current->employeeNum);
        printf("Name: %s\n", current->name);
        printf("Grade: %d\n", current->grade);
        printf("\n");
        current = current->next;
    }
}

void deleteEmployeeFromList(struct Employee** head, int employeeNum) {
    struct Employee* current = *head;
    struct Employee* previous = NULL;
    while (current != NULL) {
        if (current->employeeNum == employeeNum) {
            printf("Are you sure you want to delete %s? (y/n)\n", current->name);
            char confirmation;
            scanf(" %c", &confirmation);
            if (confirmation == 'y') {
                if (previous == NULL) {
                    *head = current->next;
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

void updateEmployeeInList(struct Employee** head, int employeeNum, char name[], int grade) {
    struct Employee* current = *head;
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

void searchEmployeeInList(struct Employee** head, int employeeNum) {
    struct Employee* current = *head;
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

void sortEmployeesInList(struct Employee** head) {
    struct Employee* current = *head;
    struct Employee* index = NULL;
    int tempEmployeeNum;
    char tempName[50];
    int tempGrade;
    while (current != NULL) {
        index = current->next;
        while (index != NULL) {
            if (current->grade > index->grade) {
                tempEmployeeNum = current->employeeNum;
                strcpy(tempName, current->name);
                tempGrade = current->grade;
                current->employeeNum = index->employeeNum;
                strcpy(current->name, index->name);
                current->grade = index->grade;
                index->employeeNum = tempEmployeeNum;
                strcpy(index->name, tempName);
                index->grade = tempGrade;
            }
            index = index->next;
        }
        current = current->next;
    }
}

void mergeAndSortEmployees(struct Employee** head1, struct Employee** head2, struct Employee** head3) {
    struct Employee* current = *head1;
    while (current != NULL) {
        addEmployeeToList(head3, current->employeeNum, current->name, current->grade);
        current = current->next;
    }
    current = *head2;
    while (current != NULL) {
        addEmployeeToList(head3, current->employeeNum, current->name, current->grade);
        current = current->next;
    }
    sortEmployeesInList(head3);
}

int isEmpty(struct Employee** head) {
    if (head == NULL) {
        return 1;
    } else {
        return 0;
    }
    
}

void emptyList(struct Employee** head) {
    struct Employee* current = *head;
    struct Employee* next;
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
    *head = NULL;
}

void mergeLists(struct Employee** informationTech, struct Employee** softwareDevs) {
    struct Employee* current = *informationTech;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = *softwareDevs;
    *softwareDevs = NULL;
}

int main() {
    int choice, empNum, grade;
    char name[50];

    addEmployeeToList(&informationTech, 1, "John", 1);
    addEmployeeToList(&informationTech, 2, "Jane", 2);
    addEmployeeToList(&informationTech, 3, "Jack", 3);
    addEmployeeToList(&informationTech, 4, "Jill", 4);
    addEmployeeToList(&informationTech, 5, "James", 5);

    addEmployeeToList(&softwareDevs, 6, "Brian", 1);
    addEmployeeToList(&softwareDevs, 7, "Aaron", 2);
    addEmployeeToList(&softwareDevs, 8, "Matt", 3);
    addEmployeeToList(&softwareDevs, 9, "Mohamed", 4);
    addEmployeeToList(&softwareDevs, 10, "Jon", 5);

    // This should loop after the merge and update the softwareTech list but it's not reading the isEmpty function correctly


    while (1) {
        printf("Choose an option:\n");
        printf("1. Add Employee\n");
        printf("2. Delete Employee\n");
        printf("3. Update Employee Information\n");
        printf("4. Display All Employee Records\n");
        printf("5. Search for Employee by Employee Number\n");
        printf("6. Sort Employee Records\n");
        printf("7. Merge Departments\n");
        printf("8. Exit\n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Which department are they being added to?\n");
                printf("1. Software Developers\n");
                printf("2. Information Technology\n");
                scanf("%d", &choice);
                printf("Enter Employee Number: ");
                scanf("%d", &empNum);
                printf("Enter Employee Name: ");
                scanf("%s", name);
                printf("Enter Employee Grade: ");
                scanf("%d", &grade);
                if (choice == 1) {
                    addEmployeeToList(&softwareDevs, empNum, name, grade);
                } else if (choice == 2) {
                    addEmployeeToList(&informationTech, empNum, name, grade);
                } else {
                    printf("Invalid Choice\n");
                }
                break;
            case 2:
                printf("Which department are they being deleted from?\n");
                printf("1. Software Developers\n");
                printf("2. Information Technology\n");
                scanf("%d", &choice);
                printf("Enter Employee Number to Delete: ");
                scanf("%d", &empNum);
                if (choice == 1) {
                    deleteEmployeeFromList(&softwareDevs, empNum);
                } else if (choice == 2) {
                    deleteEmployeeFromList(&informationTech, empNum);
                } else {
                    printf("Invalid Choice\n");
                }
                break;
            case 3:
                printf("Which department are they being updated in?\n");
                printf("1. Software Developers\n");
                printf("2. Information Technology\n");
                scanf("%d", &choice);
                printf("Enter Employee Number to Update: ");
                scanf("%d", &empNum);
                printf("Enter New Employee Name: ");
                scanf("%s", name);
                printf("Enter New Employee Grade: ");
                scanf("%d", &grade);
                if (choice == 1) {
                    updateEmployeeInList(&softwareDevs, empNum, name, grade);
                } else if (choice == 2) {
                    updateEmployeeInList(&informationTech, empNum, name, grade);
                } else {
                    printf("Invalid Choice\n");
                }
                break;
            case 4:
                printf("Software Developers:\n");
                printEmployeesInList(&softwareDevs);
                printf("Information Technology:\n");
                printEmployeesInList(&informationTech);
                break;
            case 5:
                printf("Which department are they being searched in?\n");
                printf("1. Software Developers\n");
                printf("2. Information Technology\n");
                scanf("%d", &choice);
                printf("Enter Employee Number to Search: ");
                scanf("%d", &empNum);
                if (choice == 1) {
                    searchEmployeeInList(&softwareDevs, empNum);
                } else if (choice == 2) {
                    searchEmployeeInList(&informationTech, empNum);
                } else {
                    printf("Invalid Choice\n");
                }
                break;
            case 6:
                printf("Which department's employee records should be sorted?\n");
                printf("1. Software Developers\n");
                printf("2. Information Technology\n");
                scanf("%d", &choice);
                if (choice == 1) {
                    sortEmployeesInList(&softwareDevs);
                    printf("Software Developers Employee Records Sorted\n");
                    printEmployeesInList(&softwareDevs);
                } else if (choice == 2) {
                    sortEmployeesInList(&informationTech);
                    printf("Information Technology Employee Records Sorted\n");
                    printEmployeesInList(&informationTech);
                } else {
                    printf("Invalid Choice\n");
                }
                break;
            case 7:
                mergeAndSortEmployees(&softwareDevs, &informationTech, &head);
                printf("Software Developers and Information Technology Employee Records Merged And Sorted\n");
                printEmployeesInList(&head);
                break;
            case 8:
                exit(0);
            default:
                printf("Invalid Choice\n");
        }
    }
    return 0;
}