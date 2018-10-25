#include <iostream>
using namespace std;

int main()
{
    int ab, bc, cd, da, d1, d2;
    float luas, keliling;

    cout <<"Masukkan nilai ab :";
    cin>>ab;
    cout <<"Masukkan nilai bc :";
    cin>>bc;
    cout <<"Masukkan nilai cd :";
    cin>>cd;
    cout <<"Masukkan nilai da :";
    cin>>da;
    cout <<"Masukkan nilai d1 :";
    cin>>d1;
    cout <<"Masukkan nilai d2 :";
    cin>>d2;

    luas=d1*d2/2;
    keliling=ab+bc+cd+da;

    cout <<"Luas dari ketupat adalah    :"<<luas<<endl;
    cout <<"Keliling dari ketupat adalah:"<<keliling;
    return 0;
}
