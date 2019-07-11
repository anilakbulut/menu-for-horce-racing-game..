/*ANIL AKBULUT HW03 ÖDEVÝ */
#include <stdio.h>				/*Kullanýlan kütüphaneler tanýmlanmýþtýr-*/
#include <stdlib.h>
#include <time.h>
int getInt(int mini, int maxi)				/*Fonksiyona gelen min ve max deðerleri arasýnda deðer basýlmasýný saðlar ve return eder*/
{
	int your_horse;
	while(your_horse<mini ||  your_horse>maxi)
	{
		printf("Horse Number:");	
		scanf("%d",&your_horse);
	}while(your_horse<mini ||  your_horse>maxi);
	return your_horse;	
}
int numberGeneratorBetweenRange(int min, int max)	/*Fonksiyon gelen min ve max deðerleri arasýnda random deðer basar ve return eder*/
{
	int temp;
	temp=min+rand()%(max-9);
	return temp;
}
void horseRacingGame()								/* Kullanýcý 1'e bastýðýnda bu fonksiyon çalýþýr ve random at sayýsý üretilir.At sayýsýna göre de atlara 10 ve 20 arasýnda deðerler atar*/
{
	int i,j,horse1,horse2,horse3,horse4,horse5,temp,num_horse,fast_h=0,your_horse;
	num_horse = 3 + rand()%3;						/*Random at sayýsý üretilir*/
	printf("Number of horse:%d\n",num_horse);
	getInt(1,num_horse);							/*Üretilen random at sayýsý deðerinin aralýðý kontrol edilir ve aralýkta deðilse tekrar tekrar deðer girilmesi istenir*/
	your_horse=getInt(1,num_horse);
	printf("Racing starts...");
	for(i=1;i<=5;i++)								/*At sayýsýna göre random deðerler atlara verilir*/
	{
		temp=numberGeneratorBetweenRange(10,20);
		if(i==1)		horse1=temp;
		else if(i==2)	horse2=temp;
		else if(i==3)	horse3=temp;
		else if(i==4)	horse4=temp;
		else if(i==5)	horse5=temp;
	}
	printf("\n");
	for(i=1;i<=num_horse;i++)						/* Atlarýn aldýðý random deðerler burada ekrana yazýlýr ve minimum deðere sahip olan atýn en hýzlý olmasý saðlanýr*/
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
	if(your_horse==1 && fast_h==horse1) printf("You win!Winner is Horse 1\n");		/*Kullanýcýnýn seçtiði at kazanýrsa ve kaybederse ekranda yazmasý gerekenler bu if-elselerde yapýlýr*/
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
int mod_pow(int digit)        /* Gelen basamak sayýsýnýn kaça göre mod alýcaðýný gönderir */
{
	int i,mod=1;
	for(i=1;i<=digit;i++)
	{
		mod = mod * 10;
	}
	return mod;
}
int say_digit(int num2)			/*Gelen sayýnýn basamak deðerini belirler,mod_pow fonksiyonuna sayý göndermek için kullanýlýr*/
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
void countOccurence()			/*Girilen ikinci sayýnýn,ilk sayý içinde kaç defa olduðunu hesaplar*/
{
	int i,mod,num1,num2,digit,last_digit,count=0,dongu;
	printf("Big Number:");		
	scanf("%d",&num1);		
	printf("Search Number:");
	scanf("%d",&num2);
	digit = say_digit(num2);	/*Girilen ikinci sayýnýn basamak sayýsý bulunur*/															
	dongu = say_digit(num1);	/* Döngünün ne kadar döneceðini bulmak için kullanýlýr*/
	mod = mod_pow(digit);		
	for(i=1;i<=dongu;i++)		/*Girilen sayýnýn modu alýnýr ve eðer ikinci sayýya eþitse count arttýrýlýr*/
	{
		last_digit = num1 % mod;
		if(last_digit==num2) count++;
		num1 = num1 / 10;
	}
	printf("Occurence:%d",count);
}
void triangleOfSequences()		/* Bu fonksiyonda üretilen random deðere kadar belirli bir düzen içinde ekranda üçgen çizilmesi saðlanýr*/
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
void menu()					/*Bu fonksiyonda yukarýdaki fonksiyonlarýn kullanýcýnýn isteðine göre kullanýlmasý saðlanýr ve ekranda seçim menüsü gösterilir*/
{	
	int secim;

	do											/*do-while döngüsü ile tekrar tekrar kullanýcý için menü ekrana getirilir*/
	{
		printf("1.Horce Racing Game\n");
		printf("2.Occurence Counter\n");
		printf("3.Triangle of Sequences\n");
		printf("0.Exit\n");
		printf("\n");
		scanf("%d",&secim);
		switch(secim)
		{
			case 1: printf("\n");				/*Kullanýcý 1'e basarsa at yarýþý ekrana gelir*/
					horseRacingGame();
					printf("\n");
					break;
			
			case 2: printf("\n");				/*Kullanýcý 2'ye basarsa sayý içinde sayý bulma fonksiyonu çalýþýr*/
					countOccurence();
					printf("\n\n");
					break;
			
			case 3: printf("\n");				/*Kullanýcý 3'e	basarsa sayýlarla üçgen çizme fonksiyonu devreye girer*/
					triangleOfSequences();
					printf("\n");
					break;
			case 0: break;						/*Kullanýcý 0'a basarsa kod biter*/
			
			default: printf("Wrong input is entered\n\n");/*Kullanýcý 0,1,2,3 seçeneklerinden baþka bir tuþa basarsa hata alýr ve tekrar deðer girmesi istenir*/
		}		
	}while(secim!=0);
}
int main()
{
	srand(time(NULL));		/*Random sayý üretir*/
	menu();
}
