#include"quizheader.h"

void startquiz()
	{
		char ans1,ans2,ans3,ans4,ans5,ans6,name[100],begin;
		int count=0;
		system("cls");
		//user interaction to start the quiz
	printf("\n\n\n\n\n\n\n\n\n\n\t\t\tEnter your name:");
		scanf("%s",name);
		system("cls");
		printf("\n ------------------  Welcome %s to Harry Potter quiz game --------------------------",name);
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
    printf("\n\n\n Press B  to start the game!\n");
    printf("\n Press any other key to return to the main menu!");
	scanf("%c",&begin);
	getch();
	//quiz begins
     system("cls");
     //first question
     printf("\n\n\n1.Harry has a scar on his forehead.What shape is it?\n");
     printf(" A.Like a pigs tail\t\t\t\tB.Like a lightning bolt\n ");
     printf("C.Like a shining star\t\t\t\tD.Like an egg\n ");
     ans1=getch();
   if(ans1=='B'||ans1=='b')
     {
     	  printf(" Correct answer !!!!!!");
     	  ++count;getch();
	 }
    
    else
    {
    printf(" Wrong answer correct answer is option B");
    getch();
}
    system("cls");//clearing screeen before starting next question
    //second question
     printf("\n\n\n2.In what house is Harry Potter?\n");
     printf(" A.Gryffindor\t\t\t\tB.Hufflepuff\n ");
     printf("C.Slytherene\t\t\t\tD.Ravenclaw\n ");
    ans2=getch();
     if(ans2=='a'||ans2=='A')
     {
     	 printf(" Correct answer !!!!!!");
		 ++count;getch();
	 }
     
    else{
    printf(" Wrong answer correct answer is option A");
    getch();
}
    system("cls");//clearing screeen before starting next question
    //Third  question
     printf("\n\n\n3.The platforms from where Hogwarts Express passes are\n");
     printf(" A.six and Three-quarters\t\t\t\tB.Seven and Three-quarters\n ");
     printf("C.Eight and Three-quarters\t\t\t\tD.Nine and Three-quarters\n ");
     ans3=getch();
     if(ans3=='d'||ans3=='D')
     {
     	printf(" Correct answer !!!!!!");
     	++count;getch();
	 }
      
    else
    {
    printf(" Wrong answer correct answer is option D");
    getch();
}
    system("cls");//clearing screeen before starting next question
    //Fourth question
     printf("\n\n\n4.Hermoine Granger was a\n");
     printf(" A.Pure blood\t\t\t\tB.Muggle born\n ");
     printf("C.Squib\t\t\t\tD.Muggle\n ");
     ans4=getch();
     if(ans4=='b'||ans4=='B')
     {
     printf(" Correct answer !!!!!!");
	 ++count;
	 getch();	
	 }
      
    else
    {
    printf(" Wrong answer correct answer is option B");
    getch();
}
    system("cls");//clearing screeen before starting next question
    //Fifth question
     printf("\n\n\n5.Who is the headmaster of Hogwarts\n");
     printf(" A.Filch\t\t\t\tB.Sirius Black\n ");
     printf("C.Dumbledore\t\t\t\tD.Lucius Malfoy\n ");
     ans5=getch();
     if(ans5=='c'||ans5=='C'){
	 printf(" Correct answer !!!!!!");
	 ++count;getch();
}
    else
    {
    printf(" Wrong answer correct answer is option c");
	getch();
}
	system("cls");//clearing screeen before starting next question
    //sixth question
     printf("\n\n\n6.Who killed Albus Dumbledore\n");
     printf(" A.Lucius Malfoy\t\t\t\tB.Voldemort\n ");
     printf("C.Severus snape\t\t\t\tD.Dragon Malfoy\n ");
     ans6=getch();
     if(ans6=='c'||ans6=='C')
     {
     	printf(" Correct answer !!!!!!");
     	++count;
     	getch();
	 }
      
    else{
    printf(" Wrong answer correct answer is option C"); 
    getch();
}
	system("cls");
	printf("\n\t\t\t\t Your Total Score is %d  ",count);
	if(count>=5)
	printf("\n\n\n\n\n\t\t\t------Congratulations!!!!  You got admission to Hogwarts\n");
	else
	printf("\n\n\n\n\n\t\t\t------You didn't get admission to Hogwarts, Try again...."); 
	getchar();
     
	}
	
