//Gökçe KIVRAK-2014141020

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>



int x,y,z;
int nX,nY,nZ;
int mesafe;
int enUzunluk;
int boyUzunluk;
int bX,bY,bZ;
int paletY, paletZ;
void al(){
	printf("Cisim Alindi \n");
}

void birak(){
	printf("Cisim Birakildi \n");
}

void git(int x1,int y1, int z1){
	printf("TCP (%d,%d,%d) noktasina getirildi \n",x1,y1,z1);
}
int main(int argc, char *argv[]) {

 printf("TCP'nin bulundugu koordinalari giriniz x,y,z :");
 scanf("%d %d %d",&x,&y,&z);
 
 printf("Cismin koordinati x,y,z :");
 scanf("%d %d %d",&nX,&nY,&nZ);
 
 printf("Tablada bir hucre kenar uzunlugu = ");
 scanf("%d",&mesafe);
 
 printf("tabla y uzunlugu = ");
 scanf("%d",&enUzunluk);
 
 printf("tabla z uzunlugu = ");
 scanf("%d",&boyUzunluk);
 
 printf("tabla baslangic kosesi x =");
 scanf("%d",&bX);

 printf("tabla baslangic kosesi y = ");
 scanf("%d",&bY);
 
 printf("tabla baslangic kosesi z = ");
 scanf("%d",&bZ);
 
 paletY = bY;
 paletZ = bZ;
 
 
while(1){
		
   git(nX,nY,nZ);
   al();
   git(bX,paletY,paletZ);
   birak();
     if(paletY < (bY+enUzunluk-mesafe)){
      	paletY += mesafe;
   	}else if(paletZ < (bZ+boyUzunluk-mesafe)){
 	  	paletZ += mesafe;
  	 	paletY = bY;
 	}else{
 	  	break;
   }
		
}

	getch();
	return 0;
}



