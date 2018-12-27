//Oleh Muhammad dicky garcia
//STT PELITA BANGSA
#include <stdio.h>

void pecahan();
void main (){
  /* code */pecahan();}
void pecahan(){
  int a,b,l,t;
  printf("Program menyederhanakan b/c ke Ab/c\n\n");
  printf("Masukan pembilang :\n");
  scanf("%d",&a);
  printf("Masukan penyebut :\n");
  scanf("%d",&b);

  t=a/b;
  l=a%b;
  if (a%b==0)
    /* code */printf("Bilangan (%d/%d)\ndisederhanakan menjadi %d",a,b,t );
   else if (a%b !=0)
    /* code */printf("Bilangan (%d/%d)\ndisederhanakan menjadi (%d %d/%d)",a,b,t,l,b );
}
