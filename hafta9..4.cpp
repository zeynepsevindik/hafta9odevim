#include <iostream>
#include <cstring>
using namespace std;
class Daire
{
public:
    float yari_cap,yukseklik;
    float yaricap_hesapla(float yari_cap)
 {
    return yari_cap * yari_cap *3.14* yukseklik;
 }

};

int main()
{
   Daire daire;
   cout<< "Yaricap Girin: "<< endl;
   cin >> daire.yari_cap;
   cout<<"Yükseklik girin: "<<endl;
   cin >> daire.yukseklik;
   cout<< " Daire Alani: "<<daire.yaricap_hesapla(daire.yari_cap)<<"\n";

}
