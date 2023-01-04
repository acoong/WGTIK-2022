#include <iostream>
#include "mod11.h"

using namespace std;

int main()
{
    playlistLagu L;
    adr p;
    createPlaylist_1301213011(L);

    //n-data lagu = 5 + 1 = 6 (IF4505, 1301213011)
    int n = 6;
    infotype lagu;

    for(int i = 1; i <=n; i++){
        cout<<i<<endl;
        cout<<"Artis: ";
        cin>>lagu.artis;
        cout<<"Judul: ";
        cin>>lagu.judul;
        cout<<endl;

        createElement_1301213011(lagu,p);
        enqueue_1301213011(L,p);
    }

    cout<<" ========== Playlist ========== "<<endl;
    showSemuaLagu_1301213011(L);

    cout<<endl;
    cout<<"==========Output Setelah Menghapus Lagu=========="<<endl;
    dequeue_1301213011(L,p);
    showSemuaLagu_1301213011(L);

    return 0;
}
