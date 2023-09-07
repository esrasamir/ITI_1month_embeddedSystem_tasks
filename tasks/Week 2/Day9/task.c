#include<stdio.h>
#include "std_int.h"

// define the candidate and their counts with no space in memory
#define CANDIDATE_COUNT
#define cand1 "Ahmed"
#define cand2 "Omar"
#define cand3 "Hassan"
#define cand4 "Zaki"

// initialize vote counts =0
int32_t votesCount1=0, votesCount2=0, votesCount3=0, votesCount4=0, spoiledtvotes=0;

// funcation to choice every candidate 
void castVote(){
int choice;    
printf("\n\n    Please choose your Candidate \n\n");
printf("\n 1.%s", cand1);
printf("\n 2.%s", cand2);
printf("\n 3.%s", cand3);
printf("\n 4.%s", cand4);
printf("\n 5.%s", "None of These");
printf("\n\n    Input your choice 1 : 4 = ");
scanf("%d",&choice); //take the candidate from the user

// funcation to add vote to every candidate when the user choose him
switch(choice){
    case 1: votesCount1++; break;
    case 2: votesCount2++; break;
    case 3: votesCount3++; break;
    case 4: votesCount4++; break;
    case 5: spoiledtvotes++; break;
    // when the user choose wrong number 
    default: printf("\n Error --> Wrong Choice , Please enter right number");
             //hold the screen
             getchar();
}
printf("\n thanks for vote");
}

void votesCount(){
printf("\n\n   Voting Statics ");
printf("\n %s = %d ", cand1, votesCount1);
printf("\n %s = %d ", cand2, votesCount2);
printf("\n %s = %d ", cand3, votesCount3);
printf("\n %s = %d ", cand4, votesCount4);
printf("\n %s = %d ", "Spoiled Votes", spoiledtvotes); 
}

void getLeadingCandidate(){
    printf("\n\n    Leading Candiate \n\n");
    if(votesCount1>votesCount2 && votesCount1>votesCount3 && votesCount1 >votesCount4)
    printf("%s",cand1);
    else if (votesCount2>votesCount3 && votesCount2>votesCount4 && votesCount2 >votesCount1)
    printf("%s",cand2);
    else if(votesCount3>votesCount4 && votesCount3>votesCount2 && votesCount3 >votesCount1)
    printf("%s",cand3);
    else if(votesCount4>votesCount1 && votesCount4>votesCount2 && votesCount4 >votesCount3)
    printf("%s",cand4);
    else
    printf("    No win Candidate");    
}

int main()
{

int32_t i , choice;
// do while loop 
do{
printf("\n\n    Welcome to Election Voting 2022");
printf("\n\n 1.Cast the Vote");
printf("\n 2.Find Vote Count");
printf("\n 3.Find leading Candidate");
printf("\n 0.Exit");
printf("\n\n Please enter your choice: ");
scanf("%d", &choice);

switch(choice)
{
case 1: castVote(); break;
case 2: votesCount(); break;
case 3: getLeadingCandidate(); break;
default: printf("\n     Error --> wrong Choice , Please enter right number");
}

} while(choice!=0);
//hold the screen
getchar();

return 0;
}