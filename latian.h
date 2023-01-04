#ifndef LATIAN_H_INCLUDED
#define LATIAN_H_INCLUDED

#include <iostream>
#define info(P) (P)->info
#define next(P) (P)->next
#define prev(P) (P)->prev
#define first(L) ((L).first)
#define last(L) ((L).last)
#define nil NULL

using namespace std;

typedef int infotype;
typedef struct elmlist *adr;

struct elmlist{
    infotype info;
    adr next;
    adr prev;
};

struct list{
    adr first;
    adr last;
};

void createList(list L);
adr createElement(infotype dataBaru);
void insertFirst(list &L, adr P);
void insertLast(list &L, adr P);
void insertAfter(adr prec, adr P);
void insertAscending(list &L, infotype dataBaru);
void deleteFirst(list &L, adr P);
void deleteLast(list &L, adr P);
void deleteAfter(adr prec, adr P);
void deleteElm(list &L, infotype dataHapus);
void printList(list L);
int findElement(list L, infotype dataDicari);



#endif // LATIAN_H_INCLUDED
