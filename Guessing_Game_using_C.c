#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int random_num_gen ();
int compare ();
void result ();

//Code written by
//Abdullah Al Shabib Bhuiyan

int main ()
{ 
  printf("\tWelcome to our game\n\tGuess The Number (1-100)\n\n");
  
  result ();
  
return 0;
}

int random_num_gen ()
{
 //random nuber generator
  time_t ranNum;
  
  srand(time (&ranNum));
  const int num = rand() %100 +1;
  
  return num;
  
}

void result () {
  
  int steps = compare ();
  
  printf("You did it in %d steps.\n", steps);
  float point = 100.0 * (1.0 /steps);
  
  printf("You got %0.f point.",point);


}

int compare () 
{ 

  int num = random_num_gen ();
  int unum;
  int count =0;
  do 
  {
  count ++;
  printf("Enter number : ");
  scanf("%d", &unum);
  
  if (num == unum)
     printf("You won\n");
     
  else if (unum < num )   
     printf("Enter a bigger number.\n");
  
  else
     printf("Enter a smaller number\n");
  
  }while(num != unum);
  
  return count;
}





    




    