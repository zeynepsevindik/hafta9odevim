
#include <iostream>
#include <cstring>
using namespace std;
class Kare
{
private:
    float yukseklik, en;
public :
    void tuglaSayisiHesapla(float);
float tuglaSayisi()
    {
        return  yukseklik * en * 50;

    }

};
void Kare::tuglaSayisiHesapla(float){

}
int main()
{
   Kare kare;
   kare.tuglaSayisiHesapla(4.3);
   cout<<"Kullanilacak Tugla Sayisi: "<<kare.tuglaSayisi()<<"\n";

}

