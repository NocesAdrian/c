#include <stdio.h>
#include <string.h>

// "Person" as struct nickname
typedef struct {
    char name[25];
    int age;
    char sex[10];
} Person;

int main() {
    
    // first way to fill up the stuct or we call struct as "Person"
    // same as: 
    // struct person1 = {"Zian", 17, "male"};
    Person person1 = {"Zian", 17, "male"};  


    // second way to fill up the stuct
    Person person2;
    // fill up person2 name
    strcpy(person2.name, "Adrian");
    // fill up person2 age
    person2.age = 18;
    // fill up person2 sex
    strcpy(person2.sex, "male");

    // prints out person1 details
    printf("name: %s,   age: %d,    sex: %s\n", person1.name, person1.age, person1.sex);
    // prints out person2 details
    printf("name: %s,   age: %d,    sex: %s\n", person2.name, person2.age, person2.sex);


    return 0;
}