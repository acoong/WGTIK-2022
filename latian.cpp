#include "latian.h"


void createList(list L){
    first(L) = nil;
    last(L) = nil;
}
adr createElement(infotype dataBaru){
    adr P = new elmlist;
    info(P) = dataBaru;
    next(P) = nil;
    prev(P) = nil;

    return P;
}
void insertFirst(list &L, adr P){
    first(L) == nil;
    first(L) = P;
    last(L) = P;
}
void insertLast(list &L, adr P){
    if(first(L) == nil){
        first(L) = P;
        last(L) = P;
    }else{
        adr x;
        next(first(L)) = x;
        prev(P) = last(L);
        last(L) = P;
    }
}
void insertAfter(adr prec, adr P){
    adr R;
    P = new elmlist;
    next(P) = nil;
    prev(P) = nil;
    if(next(P) = next(R)){
        prev(P) = R;
        prev(next(R)) = P;
        prev(R) = P;
    }
}
/*
void insertAscending(list &L, infotype dataBaru);
*/
void deleteFirst(list &L, adr P){
    P = first(L);
    first(L) = next(first(L));
    next(P)= nil;
    prev(first(L)) = nil;
    next(P) = nil;
}
/*
void deleteLast(list &L, adr P);
void deleteAfter(adr prec, adr P);
void deleteElm(list &L, infotype dataHapus);
*/
void printList(list L){
    adr temp = first(L);
    while(temp != nil){
        cout<<info(temp)<<" ";
        temp = next(temp);
    }
    cout<<endl;
}
/*


int findElement(list L, infotype dataDicari);
*/
