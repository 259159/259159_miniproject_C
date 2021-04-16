#include"quizheader.h"
	//General instructions to start the quiz
	void help()
	{
        char ch;
		system("cls");
	
    printf("\n\n General instructions before starting the quiz");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> There will be 6 questions in the quiz");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n   right option.");
    printf("\n >> You will be asked questions continuously");
    printf("\n >> Total score is rewarded at last");
    printf("\n >> If you score above 5 then you get an admission to hogwarts otherwoise you can try again");
    printf("\n >> No negative marking for wrong answers!");
    printf("\n\n\t!!!!!!!!!!!!! BEST OFLUCK !!!!!!!!!!!!!");
   //Asking for the user to continue the quiz
    printf("\nContinue playing ? (Y/N) :  ");  
    ch=getch();  
  
    if(ch=='y'||ch=='Y')  
    {  
        startquiz();  
    }  
    else  
    {  
        exit(1);  
    }
	 
	}
