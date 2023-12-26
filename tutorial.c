/*
TO-DO APP:
    C - CREATE list
    R - READ list
    U - UPDATE / add list
    D - DELETE item / delete list

    Item 1: Do this; Importance: Very Important, do later

*/
#include <stdio.h>

// Name, age, sex
typedef struct Person {
    char *name;
    int age;
    char sex;
} person;

int main(int argc, char const *argv[])
{
    person p1 = { 
        .name = "John", 
        .age = 19, 
        .sex ='M'
    };
    // p1.name = "John";
    // p1.age = 19;
    // p1.sex = 'M';

    printf("%s, %d, %c", p1.name, p1.age, p1.sex);

    // array decay -> pointer
    // char name[] = {'A','s','e'};

    // printf("%c", 0[name]); // &name + sizeof(char)*0 // pointer arithmetic



    // int arr[] = {1,2,3};

    // for(int i = 0; i < sizeof arr/sizeof(int); i++)
    // {
    //     printf("%d", arr[i]);
    // }

    return 0;
}
