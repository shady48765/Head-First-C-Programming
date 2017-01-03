
/*
* Let’s look at that section of your cards program again:


* #include <stdio.h>
* #include <stdlib.h>
* int main()
* {
* char card_name[3];
* puts("Enter the card_name: ");
* scanf("%2s", card_name);
* int val = 0;
* if (card_name[0] == 'K') {
* val = 10;
* } else if (card_name[0] == 'Q') {
* val = 10;
* } else if (card_name[0] == 'J') {
* val = 10;
* } else if (card_name[0] == 'A') {
* val = 11;
* } else {
* val = atoi(card_name);
* }
* printf("The card value is: %i\n", val);
* return 0;
* }
*
* Do you think you can rewrite this code using a switch statement? Write your answer below:
*/

/* My answer:*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	char card_name[3];
  puts("Enter the card_name: ");
  scanf("%2s", card_name);
  int val = 0;
  switch(card_name[0]){
    case 'K':
      val = 10;
      break;
    case 'Q':
      val = 10;
      break;
    case 'J':
      val = 10;
      break;
    case 'A':
      val = 11;
      break;
    default:
      val = atoi(card_name);
      printf("The card value is: %i\n", val);
    
  }
  retunr 0;
}

/* Solution:

* #include <stdio.h>
* #include <stdlib.h>
* int main()
* {
* 	char card_name[3];
*   puts("Enter the card_name: ");
*   scanf("%2s", card_name);
*   int val = 0;
*   switch(card_name[0]){
*     case 'K':
*     case 'Q':
*     case 'J':
*       val = 10;
*       break;
*    case 'A':
*       val = 11;
*       break;
*     default:
*       val = atoi(card_name);
*       printf("The card value is: %i\n", val); 
*   }
* retunr 0;
* }
