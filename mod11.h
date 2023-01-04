#ifndef MOD11_H_INCLUDED
#define MOD11_H_INCLUDED

#include <iostream>

#define info(P) (P)->info
#define next(P) (P)->next
#define head(k) ((k).head)
#define tail(k) ((k).tail)

using namespace std;

struct infotype{
    string artis, judul;
};

typedef struct elm *adr;

struct elm{
    infotype info;
    adr next;
};

struct playlistLagu{
    adr head, tail;
};

void createPlaylist_1301213011(playlistLagu &L);
void createElement_1301213011(infotype laguBaru, adr &pLagu);
void enqueue_1301213011(playlistLagu &L, adr pLagu);
void dequeue_1301213011(playlistLagu &L, adr &pLagu);
void showSemuaLagu_1301213011(playlistLagu L);

#endif // MOD11_H_INCLUDED
