#include<iostream>
#include<time.h>
#include <cstdlib>
//Furkan KOCA 221030910028
using namespace std;
int win=0;
int bsayi;
int ksayi;
int puan=100;
void atama() {
	srand(time(0));
	bsayi= rand() %100+1;
	
}
void tahmin() {
	if(bsayi==ksayi) {
		win=1;
		cout<<"Dogru!!!!"<<endl;
		cout<<"Puanin: "<<puan<<endl;
	}
	else if(bsayi<ksayi) {
     puan-=5;
	cout<<" Fazla yukardasin asagi"<<endl;}
	else if(ksayi<bsayi) {
	puan-=5;
	cout<<"Fazla asagidasin yukari"<<endl;}
	else if(puan==0) {
		cout<<"Puaniniz bitti maalesef :("<<endl;
		win=1;
	}
}
int main () {
	cout<<"Tahmin oyununa hosgeldin Hazirsan tahmin ediyorum"<<endl;
	cout<<"100 puanin var her yanlis tahminde 5 puan eksilir dikkatli ol"<<endl;
	atama();
	cout<<"1-100 arasý tahminimi ettim basla bakalým tahmine"<<endl;
	while(win<1) {
		cin>>ksayi;
		tahmin();
	}
	
	return 0;
}
