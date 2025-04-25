#include<stdio.h>

typedef struct {
    int id;
    void (*printInfo)(struct Base*);
} Base;

void basePrintInfo(Base* base){
    printf("Base ID: %d\n", base->id);
}

typedef struct {
    Base base; 
    char* name;
} Derived;

void derivedPrintInfo(Derived* derived){
    basePrintInfo(&derived->base);
    printf("Derived Name: %s\n", derived->name);
}

void baseInit(Base* base, int id){
    base->id = id;
    base->printInfo = basePrintInfo;
}

void derivedInit(Derived* derived, int id, char* name){
    baseInit(&derived->base, id);
    derived->name = name;
    derived->base.printInfo = (void (*)(Base*))derivedPrintInfo;
}

int main(void){
    Derived myDerived;
    derivedInit(&myDerived, 1, "Derived Object");
    myDerived.base.printInfo((Base*)&myDerived);
    return 0;
}