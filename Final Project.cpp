
                             // Project Source code //

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<windows.h>
#include<dos.h>
#include<ctype.h>
#include<string.h>


 void help();
 void about();
 //void displayscore();
 void gotoxy(int x, int y)
 {
    COORD c = { x, y };  
    SetConsoleCursorPosition(  GetStdHandle(STD_OUTPUT_HANDLE) , c);
}
   void displayscore()
 {system("cls");
 char name[20];
 float s;
 FILE *f;
 f=fopen("score.txt","r");
 fscanf(f,"%s %.2f",&name,&f);
 printf("\n\t\a\t %s has highest score = %.2f",&s,&f);
 printf("\n\n\a\t......................\n\n\a\t");
 fclose(f);
 getch();
}
void writescore(float score, char plnm[20])
 {
 float sc;
 char nm[20];
 FILE *f;
 system("cls");
 f=fopen("score.txt","r");
 fscanf(f,"%s%.2f",&nm ,&sc);
 if (score>=sc)
   { sc=score;
     fclose(f);
     f=fopen("score.txt","w");
     fprintf(f,"%s\n%.2f",plnm,sc);
     fclose(f);
   }
 }
int  main()

{
int i,j,k,l,m,n,o,p,q[10],cho,g,h,f,a,b,e[5],u,v,w,x,y,z[5],count=0;
float total=0,right=0;char playername[20],choice;
float score=0.00;
time_t now= time(0);
char *t =ctime(&now);
time_t intialtime,finaltime;
system("color 0E");          //For color 
comeback:// its a comeback once more//
system("color 0E");
system("cls");
//Beep(903,901);//This is for beep
printf("\n\n\t__________________________________________________\t\n\n");
printf("\n\t\t\t                  WELCOME ");
printf("\n\t\t\t                       TO ");
printf("\n\t\t\t                   QUIZ GAME ");
printf("\n\t\t__________________________________________________\n\t\t");
printf("\n\n\t\t     ->Enter 'A' for about                    \n\n\t");
printf("\n\t\t       ->Enter 'S' to start game              \n\n\t");
printf("\n\t\t       ->Enter 'V' to view high score        \n\n\t");
printf("\n\t\t       ->Enter 'H' for help                 \n\n\t");
printf("\n\t\t       ->Press Q to quit             ");
//goto xy(20,12)
//printf("%c",&t);
gotoxy(90,20);
puts(t);
printf("\n\t\t-------------------------------\n\n\t  ");
choice=toupper(getch());
if(choice=='H')
{help();
//goto comeback;
//getch();
}	
else if(choice=='A')
{about();
goto comeback;
getch();	}
else if(choice=='Q')
{system("cls");
printf("Are you sure want to exit\n\a\t");
printf("\n\aType 1 for Yes or N for No\n\a\t");
scanf("%d",&m);
//choice=toupper(getch());
if(m =1) 
{	
printf("Exit screen");
Sleep(10);
system("color 0C");
exit(0);}
else
goto comeback;

		}
else if(choice=='V')
{displayscore();
}
else if(choice=='S')
{
system("cls");
printf("Register your Name\n\t");
puts("\n\t\a");
gets(playername);
system("cls");
play: // its is play//
system("cls");
gotoxy(90,20);
puts("\n 1.**********Science and Techology***********");
puts("\n 2.----------Sports and Games----------------");
puts("\n 3.**********General Knowledge****************");
puts("\n 4............close the window........");
puts("\n\n ...........Enter your choice.......");
scanf(" %d",&cho );
switch(cho)
{
case 1:
	system("cls");
	puts("Welcome to the Section of Science and Technology");
	printf("--->>>>>>Welcome to warmup round------<<<<<<<<<");
	Sleep(2000);
		system("cls");
	system("color 47");
	intialtime=time(NULL);
i=j=0;
k=1;
Path:   // Section -A path
srand(time(NULL));
l=rand()%10+1;
q[k]=l;

for(n=0;n<k;n++)
{
printf(" %d ",l);
if(q[n]==l) goto Path;	

switch(l)
{
case 1:
	printf("\n\n\n Which country in the world has maximum number of robots working?");
  	printf("\n\n  A.India \t  B.Japan \n\n  C.USA \t  D.Germany  \n\n");	
	total++;
	
  	if (toupper(getch())=='B')
   {
   	printf("\n\nCorrect!!!");
	   Beep(903,901);
	   right++;
	   getch();
    break;
	}
  	else
    {
	printf("\n\nWrong!!! The correct answer is B.Japan \n come on you should know about this");
	getch();
	break;
	}
	
case 2:
	printf("\n\n\n How often, approximately, is Halley's Comet visible from Earth (in years)?");
  	printf("\n\n   A.20 years    \t    B.10 years   \n\n   C.75 years    \t   D.50 years   \n\n");	
	total++;
	
  	if (toupper(getch())=='C')
   	{
   	printf("\n\nCorrect!!! Nice Astronomical Knowledge");right++; 
	getch();
	break;
	}
  	else
    {
	printf("\n\nWrong!!! The correct answer is C.75 years,opps,you will become grandfather when it came next time bitter but truth");
	getch();
	break;
	}
	
case 3:
	printf("\n\n\n Which is the India`s first scientific satellite?");
  	printf("\n\n    A.Mangalyaan     \t  B.GSAT-6A   \n\n     C.Aryabhatt       \t   D.GSAT-5A    \n\n");	
	total++;
  	if (toupper(getch())=='C')
   	{
   	printf("\n\nCorrect!!!");right++; 
   	getch();
	   break;
   	}
  	else
    {
	printf("\n\nWrong!!! The correct answer is C.Aryabhatt,oh Come on this one is so easy");
	getch();
	break;
	}
case 4:
	printf("\n\n\n Who constructed the Jantar Mantar in Jaipur?");
  	printf("\n\n A.Ram Singh \t B.Man Singh 1st  \n\n C.Rana Singh \t D.Jai Singh 2nd  \n\n");	
	total++;
  	if (toupper(getch())=='D')
   	{
   	printf("\n\nCorrect!!!");right++; 
   	getch();
	   break;}
  	else
    {
	printf("\n\nWrong!!! The correct answer is D.Jai Singh 2nd");
	getch();
	break;
	}
case 5:
	printf("\n\n\n Who is known as the father of Indian Nuclear programme? ");
	printf("\n\n A. APJ Abdul Kalam \t B. Raja Ramanna \n\n C.Homi J Bhabha \t D. Vikram Sarabhai");
	total++;
	if(toupper(getch())=='C')
	{
		printf("\n\n Correct!!!");
		right++;
		getch();
		break;
	}
	else
	{
	printf("\n\n Wrong!!! The correct answer is C. Homi J Bhabha");
	getch();
	break;
	}
case 6:
	printf("\n\n\n What is the name of the first nuclear test conducted by India ?");
	printf("\n\n A.Nucleyo Head \t B.Big Boy \n\n C. Big Blower \t D. Smiling Buddha");	
	total++;
	if(toupper(getch())=='D')
	{
		printf("\n\n Correct!!!");
		right++;
		getch();
		break;
	}
	else
	{
		printf("\n\n Wrong!!! The correct answer is D. Smiling Buddha");
		getch();
		break;
	}
case 7:
	printf("\n\n\n The branch of physics that deals with the motion of a very small particle is called?");
	printf("\n\n A.Field Theory \t B.Particle Physics \n\n C.Quantum Mechanics  \t D.Atomic Physics");
	total++;
	if (toupper(getch())=='C')
	{
		printf("\n\n Correct!!!");
		right++;
		getch();
		break;
		
	}	
	else
	{
		printf("\n\n Wrong !!! The correct answer is C.Quantum Mechanics ");
		getch();
		break;
		
	}
case 8:
	printf("\n\n\n Which of the following is the largest air pollutant? ");
	printf("\n\n A.Carbon dioxide  \t B.Carbon monoxide \n\n C.Sulphur dioxide \t D.Hydrocarbons");
	total++;
	if(toupper(getch())=='B')
	{
		printf("\n\n Correct!!!");
		right++;
		getch();
		break;
		
	}
	else
	{
		printf("\n\n Wrong !!! The correct answer is B.Carbon Monoxide");
		getch();
		break;
		
	}	
case 9:
	printf("\n\n\n Who invented Telegraph? ");
	printf("\n\n A.Samuel Morse \t B.Edward Jenner \n\n C.Alexander Graham Bell \t D.Marcony");
	total++;
	if(toupper(getch())=='A')
	{
		printf("\n\n Correct!!!");
		right++;
		getch();
		break;
		
	}
	else
	{
		printf("\n\n Wrong !!! The correct answer is A.Samuel Morse ");
		getch();
		break;
		
	}
case 10:
	printf("\n\n\n Who is the founder of Tesla Motors?");
	printf("\n\n A.Steve Jobs \t B. Elon Mask \n\n C. Bill Gates \t D. Mark Zuckerburg");
	total++;
	if(toupper(getch())=='B')
	{
		printf("\n\n Correct!!!");
		right++;
		break;
		
	}
	else
	{
		printf("\n\n Wrong !!! The correct answer is B.Elon Mask");
		getch();
		break;
	}
}
k++;
if(k<=5) goto Path;
else
{goto end;}
}
	//goto Path;
	exit(0);
case 2:	
	system("cls");
	puts("Welcome to the Section of Sports and Games");
	puts("Welcome to the Elimination Round");
	Sleep(2000);
	system("cls");	
	system("color 2F");
	//goto folk;
	
	
	folk:// section-B folk//
intialtime=time(NULL);
//i=j=0;
for(f=1;f<=10;f++)
{system("cls");
a=f;
switch(a)
{
case 1:
	printf("\n\n\n The only Indian cricketer of the country to feature in the top 10 of the ICC Player Ranking for ODIs on May 2017?  ");
  	printf("\n\n A.Virat Kohli \t B.Shikhar Dhawan  \n\n C.Rohit Sharma \t  D.None of these\n\n");	
	total++;
	  if (toupper(getch())=='A')
   	{
   	printf("\n\nCorrect!!!");
   	getch();
	right++; 
   	break;
   	}
  	else
    {
	printf("\n\nWrong!!! The correct answer is A.Virat Kohli");
	getch();
	goto test;
	break;
	}
	
case 2:
	printf("\n\n\n First Indian women Olympic Medal winner is?");
  	printf("\n\n A.Saina Nehwal  \t B.Mary Kom  \n\n C.Karnam Malleshwari  \t D.Shakshi Malik\n\n");	
	total++;
  	if (toupper(getch())=='C')
   	{
   	printf("\n\n Correct!!!");getch();
	right++; 
   	break;
   	}
  	else
    {
	printf("\n\n Wrong!!! The correct answer is  C. Karnam Malleshwari");getch();
	goto test;
	break;
	}
case 3:
	printf("\n\n\nThe term 'Whitewash' is associated with which game? ");
  	printf("\n\n A.Football  \t B. Hockey \n\n C.Cricket  \t D.Tennis\n\n");	
	total++;
  	if (toupper(getch())=='C')
   	{
   	printf("\n\nCorrect!!!");
	right++; 
   	getch();
	   break;
   	}
  	else
    {
	printf("\n\n Wrong!!! The correct answer is C.Cricket");
	getch();
	goto test;
	break;
	}
case 4:
	printf("\n\n\n President of the International Olympic Committee is elected for a term of?");
  	printf("\n\n A.%years \t B.6 years \n\n C.8 years \t D.10 years \n\n");	
	total++;
  	if (toupper(getch())=='B')
   	{
   	printf("\n\nCorrect!!!");
	right++; 
	getch();
	break;
	}
  	else
    {
	printf("\n\n  Wrong!!! The correct answer is B. 6 years");
	getch();
	goto test;
	break;
	}
case 5:
	printf("\n\n\n The term Grand Slam is associated with? ");
  	printf("\n\n A.Badminton  \t B. Hockey \n\n C.Cricket  \t D.Lawn Tennis\n\n");	
	total++;
  	if (toupper(getch())=='D')
   	{
   	printf("\n\nCorrect!!!");
	right++; 
   	getch();
	   break;
   	}
  	else
    {
	printf("\n\n Wrong!!! The correct answer is D.Lawn Tennis");
	getch();
	goto test;
	break;
	}
case 6:
	printf("\n\n\n The distance covered in half Marathon is approximately? ");
  	printf("\n\n A.21 km  \t B.42km \n\n C.11 km  \t D.5km \n\n");	
	total++;
  	if (toupper(getch())=='A')
   	{
   	printf("\n\nCorrect!!!");
	right++;
	getch(); 
   	break;
   	}
  	else
    {
	printf("\n\n Wrong!!! The correct answer is A. 21km ");
	getch();
	goto test;
	break;
	}	
case 7:
	printf("\n\n\nThe number of players on each side in baseball is? ");
  	printf("\n\n A.11   \t B. 14 \n\n C.9  \t D.10 \n\n");	
	total++;
  	if (toupper(getch())=='C')
   	{
   	printf("\n\nCorrect!!!");
	right++;
	getch(); 
   	break;
   	}
  	else
    {
	printf("\n\n Wrong!!! The correct answer is C.9");
	getch();
	goto test;
	break;
	}
case 8:
	printf("\n\n\n Which country led a boycott of the 1980 Olympic Games held in Moscow? ");
  	printf("\n\n A.Great Britain  \t B. India \n\n C.USA  \t D.South Korea \n\n");	
	total++;
  	if (toupper(getch())=='C')
   	{
   	printf("\n\nCorrect!!!");
	right++; 
   	getch();
	   break;
   	}
  	else
    {
	printf("\n\n Wrong!!! The correct answer is C.USA");
	getch();
	goto test;
	break;
	}
case 9:
	printf("\n\n\n 'Ryder Cup' is awarded to the players of? ");
  	printf("\n\n A.Golf  \t B. Hockey \n\n C.Cricket  \t D.Tennis\n\n");	
	total++;
  	if (toupper(getch())=='A')
   	{
   	printf("\n\nCorrect!!!");
	right++; 
   	getch();
	   break;
   	}
  	else
    {
	printf("\n\n Wrong!!! The correct answer is A.Golf");
	getch();
	goto test;
	break;
	}
case 10:
	printf("\n\n\n  Who won the last FIFA Ballon d'or award? ");
  	printf("\n\n A.Ronaldinho   \t B. Cristiano Ronaldo  \n\n C.Lionel Messi   \t D.Gareth Bale \n\n");	
	total++;
  	if (toupper(getch())=='B')
   	{
   	printf("\n\nCorrect!!!");
	right++; 
   	getch();
	   break;
   	}
  	else
    {
	printf("\n\n Wrong!!! The correct answer is B. Cristiano Ronaldo");
	getch();
	goto test;
	break;
	}	
			
}
if(f==10)goto end;
}
test:
printf("......You done wrong answer you eliminate this round........");
system("color 4C");
goto end;	

	
	
	//exit(0);
case 3:	
	system("cls");
	puts("Welcome to the General Knowledge");
	puts("Welcome to challenge Round");
	Sleep(2000);
	system("cls");
	system("color 7E");
	 //   Section C 
	 intialtime=time(NULL);
	 nest:
	 for(x=1;x<=3;x++)
    {system("cls"); 
	


     
		
		printf("\n\nWhich of the following is a Palindrome number?");
		printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
		total++;
		if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect!!!");count++;
			    right++;
			    getch();
			    
}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is C.23232");
		           getch();
		       
		       }

        
		printf("\n\n\nThe country with the highest environmental performance index is...");
		printf("\n\nA.France\t\tB.Denmark\n\nC.Switzerland\t\tD.Finland");
		total++;
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");count++;
			right++;
			getch();
			}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Switzerland");
		       getch();
		       }

        
		printf("\n\n\nWhich animal laughs like human being?");
		printf("\n\nA.Polar Bear\t\tB.Hyena\n\nC.Donkey\t\tD.Chimpanzee");
		total++;
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++;
			right++;
			getch();
			}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Hyena");
		       getch();
		       }
	
	 
	 if(count>=2)goto best;
	else
	{
	system("cls");
	printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
	getch();
	goto end;
	 
}
}
	 best:
	 while(u<=5)
	{
    u++;	
    printf("Welcome to the Elimination Round");
	printf("\n\n\n The currency of the 'Maldives' is ?");
  	printf("\n\n A.Riyal \t B.Rupees  \n\n   C.Rufiyaa \t D.Dolla\n\n");	
	total++;
  	if (toupper(getch())=='C')
   	{
   	printf("\n\nCorrect!!!");
	right++; 
   	//break;
   	}
  	else
    {
	printf("\n\nWrong!!! The correct answer is C.Rufiyaa");
	goto test;
	break;
	}	
	printf("\n\n\n Who is the first woman to head a public sector bank?");
  	printf("\n\nA. Shikha Sharma \t  B.Usha Ananthasubramanyan \n\n C.Chanda Kochar \t D.Arundhati Bhattacharya\n\n");	
	total++;
  	if (toupper(getch())=='D')
   	{
   	printf("\n\nCorrect!!!");
	right++; 
	break;
	}
  	else
    {
	printf("\n\nWrong!!! The correct answer is D.Arundhati Bhattacharya");
	goto test;
	break;
	}
	printf("\n\n\n World Tourism Day is celebrated on?");
  	printf("\n\n A.September 12  \t B.September 25    \n\n C.September 27    \t  D.September 29  \n\n");	
	total++;
  	if (toupper(getch())=='C')
   	{
   	printf("\n\nCorrect!!!");
	right++; 
   	//break;
   	}
  	else
    {
	printf("\n\nWrong!!! The correct answer is C.September 27 ");
	break;
	}
	printf("\n\n\n Where is Bose Institute ?");
  	printf("\n\n  A.Dispur  \t B.Kolkata  \n\n  C.Mumbai  \t  D.New Delhi \n\n");	
	total++;
  	if (toupper(getch())=='B')
   	{
   	printf("\n\nCorrect!!!")
	;right++; 
   	//break;
   	}
  	else
    {
	printf("\n\nWrong!!! The correct answer is B.Kolkata");
	goto test;
	break;
	}
	printf("\n\n\n When is the International Yoga Day celebrated  ?");
  	printf("\n\n  A.June 21   \t B.March 21  \n\n  C.April 22  \t  D.May 31 \n\n");	
	total++;
  	if (toupper(getch())=='A')
   	{
   	printf("\n\nCorrect!!!")
	;right++; 
   	//break;
   	}
  	else
    {
	printf("\n\nWrong!!! The correct answer is A.June 21");
	goto test;
	break;
	}
	//u++;
	if(u<=5)
	{goto end;
	}
	}
	exit(0);
case 4:
    goto comeback;	
}
//Lost:// Its a lost//
//system("cls");
//intialtime=time(NULL);




	end: // ITs end of program end//
	finaltime=time(NULL);
	printf("demon %d %d",right,total);
	system("color 1B");
	score=((float)right/total)*100-difftime(finaltime,intialtime)/3;;
	//he-difftime(finaltime,intialtime)/3;
     if (score<0) score=0;
 printf("\n\n\n %s Score is : %.2f out of 100",playername,score);
 if (score==100) printf("\n\n---->>>Congratulation!!! KEEP IT UP------------>>>>>>>");
 else if (score>=80 && score<100) printf("\n\----->>>>>>>nVERY GOOD!!>>>>>>>>>>>>>>>");
 else if (score>=60 &&score<80) printf("\n\n------->>>>>>>>GOOD! BUT YOU NEED TO KNOW MORE.<<<<<<<<<<<");
 else if (score>=40 && score<60) printf("\n\nSATISFACTORY RESULT,  YOU ARE PASS BUT THIS MUCH IS NOT SUFFICIENT.");
 else printf("\n\nYOU GET VERY POOR MARKS ,WORK HARD");
  puts("\n\nNEXT PLAY?(Yes/No)");
   if (toupper(getch())=='Y')
   goto play;
   else
  {
  writescore(score,playername);
  goto comeback;
}
}
   else
{
printf("\n\n\tEnter the right key\n\n\t");
Sleep(700);
goto comeback;
}					  
return(0);          
					  }
                                               
void help()
 {
 system("cls");
 system("color 0E");
 printf("\n\n\n\t  Here are some tips you might wanna know before playing:");
 printf("\n >> There are 3 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND to test your");
    printf("\n    general knowledge. You are eligible to play the  ""Section-C"" game if you give atleast 2");
    printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
    printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
    printf("\n    total of 10 questions. Each right answer will be awarded marks");
    printf("\n    By this way you can got upto maximum marks!!!!!..........");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n >> You will be asked questions continuously, till right answers are given");
    
     printf("\n\n\t    Remember that the more quicker you give answer the more");
 printf("\n\n\t    score you will secure. Your score will be calculated and displayed");
 printf("\n\n\t    at the end and displayed. If you secure highest score, your score");

    
	printf("\n >> No negative marking for wrong answers!");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n Press Y  to start the game!\n");
 

 }
 
 

//About the developers of the project
 	
void about()
 {
 	system("cls");
 	system("color 0E");
 	printf("\n\t----------------It is developed by--------------------");
	printf("\n\n\a\t1.Harshit Rai [B.Tech 2nd Year Computer Science]");
	printf("\n\n\a\t2.Ayush Kamboj [B.Tech 2nd Year Computer Science]");
	printf("\n\n\a\t3.Ankit Singh [B.Tech 2nd Year Computer Science]");
	printf("\n\n\t4.Divya Shukla [B.Tech 2nd Year Computer Science]");
	getch();
 	
 }
  
