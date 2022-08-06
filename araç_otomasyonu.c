#include <stdio.h>
#include <stdio.h>

FILE *galeri,*galeri2;

void aracekle();
void araclisteleme();
void markabul();
void modelbul();
void renkbul();
void aracguncelle();
void aracfiltreleme();
void fiyatbul();
void kmbul();
void kmbul_1();
void kmbul_2();
void istenilenlisteleme();
void fiyat();
void fiyat_1();
void fiyat_2();



struct veri{
	
	char model[15],marka[15],renk[15];
	int yil,no;
	float km,fiyat;
	
	
	
}; 

struct veri arac[15],yedek[15];

int main()
{  system("COLOR 7");
	int secim,tus;
	
	do
	{
		
		
		
	printf("\n");	
	printf("\n\t************************--MENU--************************************\n");
	printf("\t***                                                             ****\n");
	printf("\t***                                                              ***\n");
	printf("\t***         YENI ARAC EKLE-------------------------->[1]         ***\n");
	printf("\t***         TUM ARACLARI LISTELE ------------------->[2]         ***\n");
	printf("\t***         ISTENILEN ARACI LISTELEME--------------->[3]         ***\n");
	printf("\t***         ARAC FILTRELEME------------------------->[4]         ***\n");
	printf("\t***         ARAC GUNCELLEME------------------------->[5]         ***\n");
	printf("\t***                                                              ***\n");
	printf("\t***                                                              ***\n");
	printf("\t***                                                              ***\n");
	printf("\t***                                                              ***\n");
	printf("\t*********************************************************************\n");
		
	printf("\n");printf("\n");printf("\n");
		
		  printf("Lutfen yapmak istediginiz islemi seciniz--------> ");
		scanf("%d",&secim);
		printf("\n");
		
		
		switch(secim)
		{
			case 1:
			aracekle(); break;
			
			case 2:
			araclisteleme(); break;	
			
			case 3: 
			istenilenlisteleme();
			break;
			
			case 4:
			aracfiltreleme(); break;
			
		
			case 5:
			aracguncelle(); break;
			
		
		
			
			}
				printf("\n\n");
				printf("ana menuye donmek icin herhangi bir rakam giriniz: ");
				
				printf("\n\n");
				
				tus=getch();
		
		
	}while(tus!=0);
	return 0;
		
		
	}
    
    void aracekle()
    {
    	
    int tus2;
    FILE *galeri;
    galeri=fopen("C:\\Users\\hilmi\\OneDrive\\Masaüstü\\otomasyon\\gallery.txt","a");
    	
    do
    {
    	printf("aracin nosunu giriniz: ");
    	scanf("%d",&arac[15].no);
    	 
    	printf("aracin markasini giriniz: ");
    	scanf("%s",&arac[15].marka);
    	
    	printf("aracin modelini giriniz: ");
    	scanf("%s",&arac[15].model);
    	
    	printf("aracin rengini giriniz: ");
    	scanf("%s",&arac[15].renk);
    	
    	printf("aracin hangi yilda uretildigini giriniz: ");
    	scanf("%d",&arac[15].yil);
    	
    	printf("aracin km degerini  giriniz: ");
    	scanf("%f",&arac[15].km);
    	
    	printf("aracin fiyatini giriniz: ");
    	scanf("%f",&arac[15].fiyat);
    	
    	printf("\n\n\n\n");
    	
    	printf("yeni kayit icin 7'e basiniz ");
    
    	printf("\n\n");
    	
    	
    	
    	fprintf(galeri,"%d\t %s\t %s\t %s\t %d\t %f\t %f\n ",arac[15].no,arac[15].marka,arac[15].model,arac[15].renk,arac[15].yil,arac[15].km,arac[15].fiyat);
    	
	}
	
    while(tus2=='7');
	fclose(galeri);	
    	
    	}
    	
    void araclisteleme()

	{
		
		printf("no      marka            model           renk           yil             km              fiyat");
		printf("\n\n");
FILE *galeri;
galeri=fopen("C:\\Users\\hilmi\\OneDrive\\Masaüstü\\otomasyon\\gallery.txt","r");
int a=0,i;
while(!feof(galeri)){
    fscanf(galeri,"%d%s%s%s%d%f%f",&yedek[a].no,yedek[a].marka,yedek[a].model,yedek[a].renk,&yedek[a].yil,&yedek[a].km,&yedek[a].fiyat);
a++;      
}
for(i=0;i<(a-1);i++)
printf("%d\t%s\t\t%s\t\t%s\t\t%d\t\t%.3f\t\t%.3f\n",yedek[i].no,yedek[i].marka,yedek[i].model,yedek[i].renk,yedek[i].yil,yedek[i].km,yedek[i].fiyat);
fclose(galeri);
}





void istenilenlisteleme(){
	
	system("CLS");
	int secim4;
	  printf("\n");
	printf("\n\t****************************--ARAC LÄ°STELEME MENUSU--************************************\n");
	printf("\t***                                                                                     ***\n");
	printf("\t***                                                                                     ***\n");
	printf("\t***         Arac markasina gore listeleme---------------->[1]                           ***\n");
	printf("\t***         Arac modeline  gore listeleme --------------->[2]                           ***\n");
	printf("\t***         Arac rengine   gore listeleme---------------->[3]                           ***\n");
	printf("\t***         Arac yilina    gore listeleme---------------->[4]                           ***\n");
	printf("\t***                                                                                     ***\n");
	printf("\t***                                                                                     ***\n");
	printf("\t***                                                                                     ***\n");
	printf("\t***                                                                                     ***\n");
	printf("\t*******************************************************************************************\n");
	 printf("\n");
	
	
	
	printf("lutfen yapmak istediginiz islemi seciniz: ");printf("\n\n\n\n");
	scanf("%d",&secim4);
	
	switch(secim4)
	{
		
		case 1:
		markabul();  break;
			
		case 2:
		modelbul(); break;
				
		case 3:
		renkbul(); break;
					
		case 4: 
		fiyatbul();
		
				
		
	}
	
	
	
}
 
 




void aracguncelle(){
    char kelime[150],kelime1[150];
printf("Guncellemek istediginiz arac markasini giriniz: ");
scanf("%s",&kelime);
printf("Guncellemek istediginizarac modelini giriniz: ");
scanf("%s",&kelime1);
printf("\n\n");
FILE *galeri;
galeri=fopen("C:\\Users\\hilmi\\OneDrive\\Masaüstü\\otomasyon\\gallery.txt","r");
int a=0,i;
while(!feof(galeri)){
     fscanf(galeri,"%d%s%s%s%d%f%f",&yedek[a].no,yedek[a].marka,yedek[a].model,yedek[a].renk,&yedek[a].yil,&yedek[a].km,&yedek[a].fiyat);
a++;    
}
for(i=0;i<(a-1);i++){
	

 if(strcmp(kelime,yedek[i].marka)==0 && strcmp(kelime1,yedek[i].model)==0)
        {
            printf("Yeni aracin markasini girinz: ");
            scanf("%s",yedek[i].marka);
            
            printf("Yeni aracin modelini giriniz: ");
            scanf("%s",yedek[i].model);
            
            printf("Yeni aracin rengini giriniz: ");
            scanf("%s",&yedek[i].renk); 
            
            printf("Yeni aracin yilini giriniz: ");
            scanf("%d",&yedek[i].yil); 
            
            printf("Yeni aracin km'sini giriniz: ");
            scanf("%f",&yedek[i].km);
            
            printf("Yeni aracin fiyatini giriniz: ");
            scanf("%f",&yedek[i].fiyat);
            
            
 
}


	
} 




fclose(galeri);
 FILE *galeri2;
galeri2=fopen("C:\\Users\\hilmi\\OneDrive\\Masaüstü\\otomasyon\\gallery.txt","w");
int i2;
for(i2=0;i2<(a-1);i2++){
fprintf(galeri2,"%d\t%s\t%s\t%s\t%d\t%f\t%f\n",yedek[i2].no,yedek[i2].marka,yedek[i2].model,yedek[i2].renk,yedek[i2].yil,yedek[i2].km,yedek[i2].fiyat);
}
fclose(galeri2);
}	






void aracfiltreleme()
{
	
	int secim1,tus;
	printf("\n\n\n\n");
	 
	 


	 
    printf("\n");
	printf("\n\t**************************--ARAC FiLTRELEME MENUSU--*********************************************\n");
	printf("\t***                                                                                            ***\n");
	printf("\t***                                                                                            ***\n");
	printf("\t***         (0-100) bin km arasindaki araclari listelemek icin--------------------->[1]        ***\n");
	printf("\t***         (100-200) bin km arasindaki araclari listelemek icin------------------->[2]        ***\n");
	printf("\t***         (200-300) km arasindaki araclari listelemek icin----------------------->[3]        ***\n");
	printf("\t***                                                                                            ***\n");
	printf("\t***                                                                                            ***\n");
	printf("\t***         (0-50) bin tl arasindaki  araclari listelemek icin--------------------->[4]        ***\n");
	printf("\t***         (50-100) bin tl arasindaki  araclari listelemek icin------------------->[5]        ***\n");
	printf("\t***	    (100-200) bin tl arasindaki  araclari listelemek icin------------------>[6]         ***\n");
	printf("\t***                                                                                            ***\n");
	printf("\t***                                                                                            ***\n");
	printf("\t***                                                                                            ***\n");
	printf("\t***                                                                                            ***\n");
	printf("\t***                                                                                            ***\n");
	printf("\t**************************************************************************************************\n");
	 printf("\n");
	 
	 
	 
	
	
	
	printf("lutfen yapmak istediginiz islemi seciniz: ");printf("\n\n\n\n");
	scanf("%d",&secim1);
	
	switch(secim1)
	{
		
		case 1:
		kmbul();  break;
			
	    case 2:
		kmbul_1();  break;
		
		case 3:
		kmbul_2();  break;
		
		case 4:
		fiyat();  break;
			
	    case 5:
		fiyat_1();  break;
		
		case 6:
		fiyat_2();  break;
		
		
		
		
			
		
	}
	 
	 
	 	 
	
	
	
}


void markabul(){
	
	
	printf("\n\n");
char kelime[15];
printf("Aranacak aracin markasini giriniz: ");
scanf("%s",&kelime);printf("\n\n");
printf("no      marka            model           renk           yil             km              fiyat");
printf("\n\n");
FILE *galeri;
galeri=fopen("C:\\Users\\hilmi\\OneDrive\\Masaüstü\\otomasyon\\gallery.txt","r");
int b=0,j;
while(!feof(galeri)){
    fscanf(galeri,"%d%s%s%s%d%f%f",&yedek[b].no,yedek[b].marka,yedek[b].model,yedek[b].renk,&yedek[b].yil,&yedek[b].km,&yedek[b].fiyat);
b++;     
 }
for(j=0;j<(b-1);j++){
 if(strcmp(kelime,yedek[j].marka)==0)
        {
printf("%d\t%s\t\t%s\t\t%s\t\t%d\t\t%.3f\t\t%.3f\n",yedek[j].no,yedek[j].marka,yedek[j].model,yedek[j].renk,yedek[j].yil,yedek[j].km,yedek[j].fiyat);
}
}
printf("\n\n");
fclose(galeri);
}



void modelbul(){
 	printf("\n\n");
 	
 char kelime4[15];
printf("Aranacak aracin modelini giriniz: ");
scanf("%s",&kelime4);printf("\n\n");
printf("no              marka            model           renk           yil             km              fiyat");
printf("\n\n");
printf("\n\n");

FILE *galeri;
galeri=fopen("C:\\Users\\hilmi\\OneDrive\\Masaüstü\\otomasyon\\gallery.txt","r");

int c=0,k;
while(!feof(galeri)){
    fscanf(galeri,"%d%s%s%s%d%f%f",&yedek[c].no,yedek[c].marka,yedek[c].model,yedek[c].renk,&yedek[c].yil,&yedek[c].km,&yedek[c].fiyat);
c++;     
 }
for(k=0;k<(c-1);k++){
 if(strcmp(kelime4,yedek[k].model)==0)
        {
printf("%d\t\t%s\t\t%s\t\t%s\t\t%d\t\t%.3f\t\t%.3f\n",yedek[k].no,yedek[k].marka,yedek[k].model,yedek[k].renk,yedek[k].yil,yedek[k].km,yedek[k].fiyat);
}
}
printf("\n\n");
fclose(galeri);
}	


void renkbul(){
 	printf("\n\n");
 	
 char kelime3[15];
printf("Aranacak aracin rengini giriniz: ");
scanf("%s",&kelime3);printf("\n\n");
printf("no      marka            model           renk           yil             km              fiyat");
printf("\n\n");
FILE *galeri;
galeri=fopen("C:\\Users\\hilmi\\OneDrive\\Masaüstü\\otomasyon\\gallery.txt","r");
int d=0,l;
while(!feof(galeri)){
    fscanf(galeri,"%d%s%s%s%d%f%f",&yedek[d].no,yedek[d].marka,yedek[d].model,yedek[d].renk,&yedek[d].yil,&yedek[d].km,&yedek[d].fiyat);
d++;     
 }
for(l=0;l<(d-1);l++){
 if(strcmp(kelime3,yedek[l].renk)==0)
        {
printf("%d\t%s\t\t%s\t\t%s\t\t%d\t\t%.3f\t\t%.3f\n",yedek[l].no,yedek[l].marka,yedek[l].model,yedek[l].renk,yedek[l].yil,yedek[l].km,yedek[l].fiyat);
}
}
printf("\n\n");
fclose(galeri);
}	




void fiyatbul(){
	
	
	
	int aracyil;

printf("\n\n");
printf("Istebilen arac yilini giriniz: ");
scanf("%d",&aracyil);
printf("no      marka            model           renk           yil             km              fiyat");
printf("\n\n");
FILE *galeri;
galeri=fopen("C:\\Users\\hilmi\\OneDrive\\Masaüstü\\otomasyon\\gallery.txt","r");

int c=0,k;
while(!feof(galeri)){
    fscanf(galeri,"%d%s%s%s%d%f%f",&yedek[c].no,yedek[c].marka,yedek[c].model,yedek[c].renk,&yedek[c].yil,&yedek[c].km,&yedek[c].fiyat);
c++;     
 }
for(k=0;k<(c-1);k++){
 if(strcmp(&aracyil,&yedek[k].yil)==0)
        {
printf("%d\t%s\t\t%s\t\t%s\t\t%d\t\t%.3f\t\t%.3f\n",yedek[k].no,yedek[k].marka,yedek[k].model,yedek[k].renk,yedek[k].yil,yedek[k].km,yedek[k].fiyat);
}
}
printf("\n\n");
fclose(galeri);

}


void kmbul(){
	
	
	
	

printf("\n\n");
printf("no      marka            model           renk           yil             km              fiyat");
printf("\n\n");
FILE *galeri;
galeri=fopen("C:\\Users\\hilmi\\OneDrive\\Masaüstü\\otomasyon\\gallery.txt","r");

int c=0,k;
while(!feof(galeri)){
    fscanf(galeri,"%d%s%s%s%d%f%f",&yedek[c].no,yedek[c].marka,yedek[c].model,yedek[c].renk,&yedek[c].yil,&yedek[c].km,&yedek[c].fiyat);
c++;     
 }
for(k=0;k<(c-1);k++){
 if(0<yedek[k].km && yedek[k].km<100.000)
        {
printf("%d\t%s\t\t%s\t\t%s\t\t%d\t\t%.3f\t\t%.3f\n",yedek[k].no,yedek[k].marka,yedek[k].model,yedek[k].renk,yedek[k].yil,yedek[k].km,yedek[k].fiyat);
}
}
printf("\n\n");
fclose(galeri);

}

void kmbul_1(){
	
	
	
	

printf("\n\n");
printf("no      marka            model           renk           yil             km              fiyat");
printf("\n\n");
FILE *galeri;
galeri=fopen("C:\\Users\\hilmi\\OneDrive\\Masaüstü\\otomasyon\\gallery.txt","r");

int c=0,k;
while(!feof(galeri)){
    fscanf(galeri,"%d%s%s%s%d%f%f",&yedek[c].no,yedek[c].marka,yedek[c].model,yedek[c].renk,&yedek[c].yil,&yedek[c].km,&yedek[c].fiyat);
c++;     
 }
for(k=0;k<(c-1);k++){
 if(100.000<yedek[k].km && yedek[k].km<200.000)
        {
printf("%d\t%s\t\t%s\t\t%s\t\t%d\t\t%3f\t\t%.3f\n",yedek[k].no,yedek[k].marka,yedek[k].model,yedek[k].renk,yedek[k].yil,yedek[k].km,yedek[k].fiyat);
}
}
printf("\n\n");
fclose(galeri);

}

void kmbul_2(){
	
	
	
	

printf("\n\n");
printf("no      marka            model           renk           yil            km              fiyat");
printf("\n\n");
FILE *galeri;
galeri=fopen("C:\\Users\\hilmi\\OneDrive\\Masaüstü\\otomasyon\\gallery.txt","r");

int c=0,k;
while(!feof(galeri)){
    fscanf(galeri,"%d%s%s%s%d%f%f",&yedek[c].no,yedek[c].marka,yedek[c].model,yedek[c].renk,&yedek[c].yil,&yedek[c].km,&yedek[c].fiyat);
c++;     
 }
for(k=0;k<(c-1);k++){
 if(200.000<yedek[k].km && yedek[k].km<300.000)
        {
printf("%d\t%s\t\t%s\t\t%s\t\t%d\t\t%.3f\t\t%.3f\n",yedek[k].no,yedek[k].marka,yedek[k].model,yedek[k].renk,yedek[k].yil,yedek[k].km,yedek[k].fiyat);
}
}
printf("\n\n");
fclose(galeri);

}


void fiyat(){
	
	
	
	

printf("\n\n");
printf("no      marka            model           renk           yil             km              fiyat");
printf("\n\n");
FILE *galeri;
galeri=fopen("C:\\Users\\hilmi\\OneDrive\\Masaüstü\\otomasyon\\gallery.txt","r");

int c=0,k;
while(!feof(galeri)){
    fscanf(galeri,"%d%s%s%s%d%f%f",&yedek[c].no,yedek[c].marka,yedek[c].model,yedek[c].renk,&yedek[c].yil,&yedek[c].km,&yedek[c].fiyat);
c++;     
 }
for(k=0;k<(c-1);k++){
 if(0<yedek[k].fiyat && yedek[k].fiyat<50.000)
        {
printf("%d\t%s\t\t%s\t\t%s\t\t%d\t\t%.3f\t\t%.3f\n",yedek[k].no,yedek[k].marka,yedek[k].model,yedek[k].renk,yedek[k].yil,yedek[k].km,yedek[k].fiyat);
}
}
printf("\n\n");
fclose(galeri);

}

void fiyat_1(){
	
	
	
	

printf("\n\n");
printf("no      marka            model           renk           yil             km              fiyat");
printf("\n\n");
FILE *galeri;
galeri=fopen("C:\\Users\\hilmi\\OneDrive\\Masaüstü\\otomasyon\\gallery.txt","r");

int c=0,k;
while(!feof(galeri)){
    fscanf(galeri,"%d%s%s%s%d%f%f",&yedek[c].no,yedek[c].marka,yedek[c].model,yedek[c].renk,&yedek[c].yil,&yedek[c].km,&yedek[c].fiyat);
c++;     
 }
for(k=0;k<(c-1);k++){
 if(50.000<yedek[k].fiyat && yedek[k].fiyat<100.000)
        {
printf("%d\t%s\t\t%s\t\t%s\t\t%d\t\t%.3f\t\t%.3f\n",yedek[k].no,yedek[k].marka,yedek[k].model,yedek[k].renk,yedek[k].yil,yedek[k].km,yedek[k].fiyat);
}
}
printf("\n\n");
fclose(galeri);

}


void fiyat_2(){
	
	
	
	

printf("\n\n");
printf("no      marka            model           renk           yil             km              fiyat");
printf("\n\n");
FILE *galeri;
galeri=fopen("C:\\Users\\hilmi\\OneDrive\\Masaüstü\\otomasyon\\gallery.txt","r");

int c=0,k;
while(!feof(galeri)){
    fscanf(galeri,"%d%s%s%s%d%f%f",&yedek[c].no,yedek[c].marka,yedek[c].model,yedek[c].renk,&yedek[c].yil,&yedek[c].km,&yedek[c].fiyat);
c++;     
 }
for(k=0;k<(c-1);k++){
 if(100.000<yedek[k].fiyat && yedek[k].fiyat<200.000)
        {
printf("%d\t%s\t\t%s\t\t%s\t\t%d\t\t%.3f\t\t%.3f\n",yedek[k].no,yedek[k].marka,yedek[k].model,yedek[k].renk,yedek[k].yil,yedek[k].km,yedek[k].fiyat);
}
}
printf("\n\n");
fclose(galeri);

}
