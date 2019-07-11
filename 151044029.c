/*ANIL AKBULUT HW03 �DEV� */
#include <stdio.h>				/*Kullan�lan k�t�phaneler tan�mlanm��t�r-*/
#include <stdlib.h>
#include <time.h>
int getInt(int mini, int maxi)				/*Fonksiyona gelen min ve max de�erleri aras�nda de�er bas�lmas�n� sa�lar ve return eder*/
{
	int your_horse;
	while(your_horse<mini ||  your_horse>maxi)
	{
		printf("Horse Number:");	
		scanf("%d",&your_horse);
	}while(your_horse<mini ||  your_horse>maxi);
	return your_horse;	
}
int numberGeneratorBetweenRange(int min, int max)	/*Fonksiyon gelen min ve max de�erleri aras�nda random de�er basar ve return eder*/
{
	int temp;
	temp=min+rand()%(max-9);
	return temp;
}
void horseRacingGame()								/* Kullan�c� 1'e bast���nda bu fonksiyon �al���r ve random at say�s� �retilir.At say�s�na g�re de atlara 10 ve 20 aras�nda de�erler atar*/
{
	int i,j,horse1,horse2,horse3,horse4,horse5,temp,num_horse,fast_h=0,your_horse;
	num_horse = 3 + rand()%3;						/*Random at say�s� �retilir*/
	printf("Number of horse:%d\n",num_horse);
	getInt(1,num_horse);							/*�retilen random at say�s� de�erinin aral��� kontrol edilir ve aral�kta de�ilse tekrar tekrar de�er girilmesi istenir*/
	your_horse=getInt(1,num_horse);
	printf("Racing starts...");
	for(i=1;i<=5;i++)								/*At say�s�na g�re random de�erler atlara verilir*/
	{
		temp=numberGeneratorBetweenRange(10,20);
		if(i==1)		horse1=temp;
		else if(i==2)	horse2=temp;
		else if(i==3)	horse3=temp;
		else if(i==4)	horse4=temp;
		else if(i==5)	horse5=temp;
	}
	printf("\n");
	for(i=1;i<=num_horse;i++)						/* Atlar�n ald��� random de�erler burada ekrana yaz�l�r ve minimum de�ere sahip olan at�n en h�zl� olmas� sa�lan�r*/
	{
		if(i==1)
		{
			fast_h=horse1;
			printf("Horse 1:");
			for(j=1;j<=horse1;j++)
			{
				printf("-");
			}
			printf("\n");
		}
		else if(i==2)
		{
			if(fast_h>horse2) fast_h=horse2;
			printf("Horse 2:");
			for(j=1;j<=horse2;j++)	
			{
				printf("-");
			}
			printf("\n");
		}
		else if(i==3)
		{
			if(fast_h>horse3) fast_h=horse3;
			printf("Horse 3:");
			for(j=1;j<=horse3;j++)
			{
				printf("-");
			}
			printf("\n");			
		}
		else if(i==4)
		{
			if(fast_h>horse4) fast_h=horse4;
			printf("Horse 4:");
			for(j=1;j<=horse4;j++)
			{
				printf("-");
			}
			printf("\n");			
		}
		else if(i==5)
		{
			if(fast_h>horse5) fast_h=horse5;
			printf("Horse 5:");
			for(j=1;j<=horse5;j++)
			{
				printf("-");
			}			
		}
	}
	printf("\n");
	if(your_horse==1 && fast_h==horse1) printf("You win!Winner is Horse 1\n");		/*Kullan�c�n�n se�ti�i at kazan�rsa ve kaybederse ekranda yazmas� gerekenler bu if-elselerde yap�l�r*/
	else
	{
		if(your_horse==1 && fast_h==horse2) printf("You lose!Winner is Horse 2\n");
		else if(your_horse==1 && fast_h==horse3) printf("You lose!Winner is Horse 3\n");
		else if(your_horse==1 && fast_h==horse4) printf("You lose!Winner is Horse 4\n");
		else if(your_horse==1 && fast_h==horse5) printf("You lose!Winner is Horse 5\n");
	}
	if(your_horse==2 && fast_h==horse2) printf("You win!Winner is Horse 2\n");
	else
	{
		if(your_horse==2 &&fast_h==horse1) printf("You lose!Winner is Horse 1\n");
		else if(your_horse==2 &&fast_h==horse3) printf("You lose!Winner is Horse 3\n");
		else if(your_horse==2 &&fast_h==horse4) printf("You lose!Winner is Horse 4\n");
		else if(your_horse==2 &&fast_h==horse5) printf("You lose!Winner is Horse 5\n");
	}
	if(your_horse==3 && fast_h==horse3) printf("You win!Winner is Horse 3\n");
	else
	{
		if(your_horse==3 &&fast_h==horse1) printf("You lose!Winner is Horse 1\n");
		else if(your_horse==3 &&fast_h==horse2) printf("You lose!Winner is Horse 2\n");
		else if(your_horse==3 &&fast_h==horse4) printf("You lose!Winner is Horse 4\n");
		else if(your_horse==3 &&fast_h==horse5) printf("You lose!Winner is Horse 5\n");
	}
	if(your_horse==4 && fast_h==horse4) printf("You win!Winner is Horse 4\n");
	else
	{
		if(your_horse==4 &&fast_h==horse1) printf("You lose!Winner is Horse 1\n");
		else if(your_horse==4 &&fast_h==horse2) printf("You lose!Winner is Horse 2\n");
		else if(your_horse==4 &&fast_h==horse3) printf("You lose!Winner is Horse 3\n");
		else if(your_horse==4 &&fast_h==horse5) printf("You lose!Winner is Horse 5\n");
	}
	if(your_horse==5 && fast_h==horse5) printf("You win!Winner is Horse 5\n");
	else
	{
		if(your_horse==5 &&fast_h==horse1) printf("You lose!Winner is Horse 1\n");
		else if(your_horse==5 &&fast_h==horse2) printf("You lose!Winner is Horse 2\n");
		else if(your_horse==5 &&fast_h==horse3) printf("You lose!Winner is Horse 3\n");
		else if(your_horse==5 &&fast_h==horse4) printf("You lose!Winner is Horse 4\n");
	}

}
int mod_pow(int digit)        /* Gelen basamak say�s�n�n ka�a g�re mod al�ca��n� g�nderir */
{
	int i,mod=1;
	for(i=1;i<=digit;i++)
	{
		mod = mod * 10;
	}
	return mod;
}
int say_digit(int num2)			/*Gelen say�n�n basamak de�erini belirler,mod_pow fonksiyonuna say� g�ndermek i�in kullan�l�r*/
{
	int digit;
	digit=0;
    do 
	{
    	num2=num2/10;
        digit++;
    }while(num2>=1);
    return digit;
}
void countOccurence()			/*Girilen ikinci say�n�n,ilk say� i�inde ka� defa oldu�unu hesaplar*/
{
	int i,mod,num1,num2,digit,last_digit,count=0,dongu;
	printf("Big Number:");		
	scanf("%d",&num1);		
	printf("Search Number:");
	scanf("%d",&num2);
	digit = say_digit(num2);	/*Girilen ikinci say�n�n basamak say�s� bulunur*/															
	dongu = say_digit(num1);	/* D�ng�n�n ne kadar d�nece�ini bulmak i�in kullan�l�r*/
	mod = mod_pow(digit);		
	for(i=1;i<=dongu;i++)		/*Girilen say�n�n modu al�n�r ve e�er ikinci say�ya e�itse count artt�r�l�r*/
	{
		last_digit = num1 % mod;
		if(last_digit==num2) count++;
		num1 = num1 / 10;
	}
	printf("Occurence:%d",count);
}
void triangleOfSequences()		/* Bu fonksiyonda �retilen random de�ere kadar belirli bir d�zen i�inde ekranda ��gen �izilmesi sa�lan�r*/
{
	int k=1,j=1,i,num,temp;
	srand(time(NULL));
	temp= 2 + rand()%9;
	for(i=1;i<=temp;i++)
	{
		printf("%d ",i);
		for(j=1;j<i;j++)
		{
			printf("%d ",k*i);
			k++;
		}
		k=2;
		printf("\n");
	}
}
void menu()					/*Bu fonksiyonda yukar�daki fonksiyonlar�n kullan�c�n�n iste�ine g�re kullan�lmas� sa�lan�r ve ekranda se�im men�s� g�sterilir*/
{	
	int secim;

	do											/*do-while d�ng�s� ile tekrar tekrar kullan�c� i�in men� ekrana getirilir*/
	{
		printf("1.Horce Racing Game\n");
		printf("2.Occurence Counter\n");
		printf("3.Triangle of Sequences\n");
		printf("0.Exit\n");
		printf("\n");
		scanf("%d",&secim);
		switch(secim)
		{
			case 1: printf("\n");				/*Kullan�c� 1'e basarsa at yar��� ekrana gelir*/
					horseRacingGame();
					printf("\n");
					break;
			
			case 2: printf("\n");				/*Kullan�c� 2'ye basarsa say� i�inde say� bulma fonksiyonu �al���r*/
					countOccurence();
					printf("\n\n");
					break;
			
			case 3: printf("\n");				/*Kullan�c� 3'e	basarsa say�larla ��gen �izme fonksiyonu devreye girer*/
					triangleOfSequences();
					printf("\n");
					break;
			case 0: break;						/*Kullan�c� 0'a basarsa kod biter*/
			
			default: printf("Wrong input is entered\n\n");/*Kullan�c� 0,1,2,3 se�eneklerinden ba�ka bir tu�a basarsa hata al�r ve tekrar de�er girmesi istenir*/
		}		
	}while(secim!=0);
}
int main()
{
	srand(time(NULL));		/*Random say� �retir*/
	menu();
}
