#include <stdio.h>//Kütüphanelerimizi ekledik.
#include <conio.h>
 
int main (void){//Ana fonksiyonumuzu oluşturduk.
 
printf("kim milyoner olmak ister yarişmasina hoşgeldiniz...");//Ekrana yazdırdık.
 
int a,b,c,d,e,f,g,basla,devam;//Değişkenlerimizi tanımladık.
printf("cevaplamak icin \na icin 1 \nb icin 2 \nc icin 3 \nve d icin 4 e basiniz...\n");//Cevap a ise 1 e,b ise 2 ye,c ise 3 e,d ise de 4 e basmamız gerekiyor.
printf("baslamak icin 1 e basiniz...\n");
scanf("%d",&basla);//Dışarıdan sayımızı gireceğiz.
 
if(basla==1){//İf else kodlarını kullanmamız gerekiyor.
printf("Soru 1\n");
printf("ataturk kac yilinda dogdu?\na=1900\nb=1881\nc=1889\nd=1789");//İlk sorumuz.
scanf("%d",&a);
 
if(a==2){printf("Tebrikler cevap dogru...\n 500 TL kazandiniz...");
 
printf("devam etmek icin lütfen 1 ye basiniz,çekilmek icin 2 e basabilirsiniz");
 
} else printf("yanlıs cevap malesef elendiniz...");//Cevabınız yanlış ise eleniyorsunuz.
}
scanf("%d",&devam);//Devam etmek için 1 e basmanız gerekiyor.
 
if(devam==1){
printf("Soru 2\n");
printf("Turkiyenin baskenti neresidir?\na=istanbul\nb=ankara\nc=konya\nd=samsun\n");//2. sorumuz.
 
scanf("%d",&b);
if(b==2){printf("tebrikler cevap dogru...\n 1 milyon TL kazandiniz...");}
else printf("elendiniz...");
}
 
scanf("%d",&basla);
 
if(basla==1){
printf("yarısma bitti...");
}
 
else printf("cikis yatiniz");
 
getch();
return(0);
 
}