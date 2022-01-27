#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int 
main() 
{

  // assign pointer to the file for read and write
  FILE *bankfile = fopen("/Users/easontek/.bankfile", "r");
  FILE *writebankfile = fopen("/Users/easontek/.bankfile", "w");

  printf("scuffed as hell bank manager\n");
  
  char choic[20];
  printf("do what ([d]eposit, [w]ithdraw): ");
  scanf("%s", choic);

  // declare needed universal variables

  char buffer[255]; // make a buffer size 255bytes
  int value; // final value to write


  if (strcmp(choic, "d") == 0) {

    char deposit[10]; // init deposit
    printf("deposit amount: ");
    scanf("%s", deposit);

    // start readwrite

    fgets(buffer, 255, bankfile);

    value = atoi(buffer) + atoi(deposit); // add values
  
    fprintf(writebankfile, "%d\n", value); // write
    printf("new balance: %d\n", value); // print output

    value = 0;

  } else if (strcmp(choic, "w") == 0) {

    char withdraw[10]; //init withdraw value
    printf("withdraw amount: "); 
    scanf("%s", withdraw);

    // start readwrite

    fgets(buffer, 255, bankfile); // read into buffer

    value = atoi(buffer) - atoi(withdraw); // quick math

    if (value < 0) {
      printf("ur too broke to withdraw that much!!\n");
    } else {

      fprintf(writebankfile, "%d\n", value); // write 
      printf("new balance: %d\n", value); // print output
    
      value = 0;

    }
    
  }
  
  fclose(writebankfile);
  fclose(bankfile);
  
  return 0;
}
