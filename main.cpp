#include <iostream>
using namespace std;

int main() {
   int N, i, somma, superiore, nsuperiore, isuperiore;
   cout<<"Quanti numeri vuoi visualizzare?"<<endl;
   cin>>N;
   int v[N];
   i=0;
   while(i<N)
   {
    v[i]=rand()%1001;
    cout<<v[i]<<endl;
    i=i+1;
   }
   i=0;
   float media;
   somma=0;
   while(i<N)
   {
      somma=somma+v[i];
      i=i+1;
   }
   media=somma/N;
   cout<<"La media è "<<media<<endl;
   i=0;
   superiore=0;
   nsuperiore=0;
   isuperiore=0;
   while(i<N)
   {
      if(v[i]>media)
      {
         superiore=v[i];
         isuperiore=i;
         cout<<"Il numero superiore alla media è "<<superiore<<" ed occupa la "<<isuperiore+1<<" posizione"<<endl;
         nsuperiore=nsuperiore+1;
      }
      i=i+1;
   }
   cout<<"I numeri superiori alla media sono "<<nsuperiore;
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
