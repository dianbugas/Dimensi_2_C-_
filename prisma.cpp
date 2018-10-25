#include <iostream>
using namespace std;

int main()
{
    int alas,tinggi, sisi_tegak;
    float luas, volume;

    cout <<"Masukkan nilai alas      :";
    cin>>alas;
    cout <<"Masukkan nilai tinggi    :";
    cin>>tinggi;
    cout <<"Masukkan nilai sisi tegak:";
    cin>>sisi_tegak;

    luas=alas*tinggi;
    volume=(2*alas)+sisi_tegak;

    cout<<"Luas dari Prisma adalah  :"<<luas<<endl;
    cout<<"Volume dari Prisma adalah:"<<volume;
    return 0;
}
