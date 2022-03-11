//EmployeeOne.c
#include <string.h> 
#include "employee.h" 
PtrToEmployee searchEmployeeByNumber(PtrToConstEmployee ptr, int tableSize, long targetNumber){ 
    const PtrToConstEmployee endPtr = ptr + tableSize; 
    for(; ptr < endPtr; ptr++){ //search until end of table  ptr++ will increment by what?? 
        if(ptr->number == targetNumber) //check if it equals the Employee number 
            return (PtrToEmployee) ptr; //return location of the number to callee. 
    } 
    return NULL; //this will only happen if no Employee number matches in loop above 
} 
 
//Essentially the same functionality as above but comparing strings to check if equal 
PtrToEmployee searchEmployeeByName(PtrToConstEmployee ptr, int tableSize, char * targetName){ 
    const PtrToConstEmployee endPtr = ptr + tableSize; 
    for(; ptr < endPtr; ptr++){ 
        if(strcmp(ptr->name,targetName) == 0) //check if it equals Employee name
            return (PtrToEmployee) ptr; 
    } 
    return NULL; 
} 

//Same as above, compares strings to check if equal
PtrToEmployee searchEmployeeByPhone(PtrToConstEmployee ptr, int tableSize, char * targetPhone){ 
    const PtrToConstEmployee endPtr = ptr + tableSize; 
    for(; ptr < endPtr; ptr++){ 
        if(strcmp(ptr->phone,targetPhone) == 0) //check if it equals Employee phone number
            return (PtrToEmployee) ptr; 
    } 
    return NULL; 
} 

//Same as searchEmployeeByNumber, checks if values are equal
PtrToEmployee searchEmployeeBySalary(PtrToConstEmployee ptr, int tableSize, double targetSalary){ 
    const PtrToConstEmployee endPtr = ptr + tableSize; 
    for(; ptr < endPtr; ptr++){ 
        if(ptr->salary == targetSalary) //check if it equals the Employee salary
            return (PtrToEmployee) ptr; 
    } 
    return NULL;
} 