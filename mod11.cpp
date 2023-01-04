#include "mod11.h"
#include <iostream>

void createPlaylist_1301213011(playlistLagu &L){
    head(L) = NULL;
    tail(L) = NULL;
}
void createElement_1301213011(infotype laguBaru, adr &pLagu){
    pLagu = new elm;
    info(pLagu) = laguBaru;
    next(pLagu) = NULL;
}
void enqueue_1301213011(playlistLagu &L, adr pLagu){
    if(head(L) == NULL){
        head(L) = pLagu;
        tail(L) = pLagu;
    }else{
        next(tail(L)) = pLagu;
        tail(L) = pLagu;
    }
}
void dequeue_1301213011(playlistLagu &L, adr &pLagu){
    if(head(L) != NULL){
        pLagu = head(L);
        head(L) = next(pLagu);
        next(pLagu) = NULL;
    }else{
        cout<<"List Kosong!"<<endl;
    }
}
void showSemuaLagu_1301213011(playlistLagu L){
    adr p = head(L);

    if(head(L) != NULL){
        while(p != NULL){
            cout<<"Artis: "<<info(p).artis<<endl;
            cout<<"Judul: "<<info(p).judul<<endl;
            p = next(p);
        }
        }else{
            cout<<"List Kosong!"<<endl;
        }
    }
