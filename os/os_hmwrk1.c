#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <time.h>
#include <sys/time.h>
#include <stdbool.h>

// ---- Variables ----
int guess,min=1,max=99,r_number,a_time,g_time,header,total=0,total_sec=0,flag=1,alarm_flag=0;
// -------------------


// ---- Function ----
bool katip();
int check();
void timer(int signum);
void log_save(int m_sec,int key);
// -------------------

int main(int argc, char* argv[]){

  bool finisher=false;
  header=0;

  a_time=atoi(argv[1]);
  g_time=atoi(argv[2]);

// Generate random number between [1-99]

  srand(time(NULL));
  r_number = rand()%100;

  signal(SIGALRM,timer);

  while(true){

    if (finisher == true) {
      break;
    }
    else{
      if (flag==1) {

        finisher = katip();
        flag=2;
      }
      else{
        finisher = katip();
        flag=1;
      }
    }
  }
  exit(1);
}

bool katip() {

  int key,ms;
  struct timeval t0,t1;

  signal(SIGALRM,timer);

  if(g_time-total_sec < a_time){
    alarm_flag = 1;
    alarm(g_time-total_sec);

  }else{
    alarm_flag = 0;
    alarm(a_time);
  }

  gettimeofday(&t0, 0);
  printf("\n|| PLAYER %d-) %d second // Enter your guess ([%d-%d]): ",flag,a_time,min,max);
  scanf("%d",&guess);
  gettimeofday(&t1, 0);
  alarm(0);

  ms=(((t1.tv_sec - t0.tv_sec)*1000)+((t1.tv_usec - t0.tv_usec)/1000));

  total=total+ms;
  total_sec=total_sec+((t1.tv_sec - t0.tv_sec));

  key = check();
  switch (key) {
    case 1:
      log_save(ms,key);
      return true;
    case 2:
      log_save(ms,key);
        if (guess < r_number) {
          min=guess;
        }
        else{
          max=guess;
        }
      return false;
      break;
    case 3:
      log_save(ms,key);
      return true;
      break;
  }
  return false;
}

int check() {
    if(guess >= min && guess <= max){
      if (guess == r_number) {
        return 1;
      }
      else{
        return 2;
      }
    }
    else{
        return 3;
    }
}

void timer(int signum){
  if (alarm_flag==0) {
    log_save(0,5);
    exit(1);
  }else{
    log_save(0,4);
    exit(1);
  }
}

void log_save(int m_sec,int key){

  int w_flag;

  if (flag==1) {
    w_flag=2;
  }
  else{
    w_flag=1;
  }

  FILE *log_file;
  log_file = fopen ("log.txt","a+");

  if (log_file==NULL)
  {
    perror("Some File Error!");
  }
  else{
    if (header==0) {
      fprintf(log_file,"< Random Number: %d\n  A: %d Second    B: %d Second >\n\n", r_number,a_time,g_time);
      header=1;
    }
    else;

    switch (key) {
      case 1:
        printf("Player %d > BOOM! YOU LOSE! || Total milisecond = %d\nWinner: PLAYER %d\n--------------------------\n\n", flag,total,w_flag);
        fprintf(log_file,"Player %d > BOOM! YOU LOSE! || Total milisecond = %d\nWinner: PLAYER %d\n--------------------------\n\n", flag,total,w_flag);
        break;
      case 2:
        printf("Player %d > Your dodged! Lucky number.! - Response time: %d milisecond\n", flag, m_sec);
        fprintf(log_file,"Player %d > Your dodged! Lucky number.! - Response time: %d milisecond\n", flag, m_sec);
        break;
      case 3:
        printf("Player %d > Invalid Value. YOU LOSE! || Total milisecond = %d\nWinner: PLAYER %d\n--------------------------\n\n", flag, total,w_flag);
        fprintf(log_file,"Player %d > Invalid Value. YOU LOSE! || Total milisecond = %d\nWinner: PLAYER %d\n--------------------------\n\n", flag, total,w_flag);
        break;
      case 4:
        fprintf(log_file,"Game Time is Over... YOU BOTH LOSE! Total milisecond = %d\n--------------------------\n\n",total);
        printf("Game Time is Over... YOU BOTH LOSE! Total milisecond = %d\n--------------------------\n\n",total);
        break;
      case 5:
        fprintf(log_file,"\nPlayer %d > Answer Time is Over... YOU LOSE!\nWinner: PLAYER %d\n--------------------------\n\n",flag,w_flag);
        printf("Player %d > Answer Time is Over... YOU LOSE!\nWinner: PLAYER %d\n--------------------------\n\n",flag,w_flag);
        break;

    }
  }

  fclose(log_file);
}
