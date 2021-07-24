#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
char user_input[];
int main()
{   
    system("cls");
    printf("WELCOME IN AI CHATBOT \n");
    while(1)
    {
      printf("==>");
      gets(user_input);
      if(strcmp(user_input,"exit")==0){
          system("cls");
          printf("bot ==> ok byy \n");
          break;
      }
      else if(strcmp(user_input,"hi")==0){
          printf("bot ==>  Hello sir \n");
      }
      else if(strcmp(user_input,"open chrome")==0){
          printf("Ok sir wait a while , opening chrome browser \n");
          system("start chrome");
    }
    else if(strcmp(user_input,"open notepad")==0){
          printf("Ok sir wait a while , opening ur notepad \n");
          system("start notepad");}
          else if(strcmp(user_input,"time")==0)
     {
         time_t s, val =1 ;
         struct tm* current_time;
         //time in second
         s = time(NULL);
         current_time = localtime(&s);
         //print time in minute
         //print hour and second
         printf("bot ==> %02d:%02d:%02d\n",current_time->tm_hour,current_time->tm_min,current_time->tm_sec);
     }
    else if(strcmp(user_input,"open youtube ")==0)
    {
          printf("Ok sir wait a while , opening ur youtube \n");
          system("start http://youtube.com");
    }
    }
    return 0;
    
}