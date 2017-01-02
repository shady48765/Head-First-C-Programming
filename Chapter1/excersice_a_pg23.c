/*
* #include <stdio.h>
* int main()
* {
* int card = 1;
* if (card > 1)
* card = card - 1;
* if (card < 7)
* puts("Small card");
* else {
* puts("Ace!");
* }
* return 0;
* }
*/

/* Answer: The code will work but it won't compile because else command is wrong.
 * it will display " Small card" because if int card = 1 car > 1 is true,
 * then 1-1 =0, then card < 7= TRUE and display "Small card"   */

/* Correction code*/


#include <stdio.h>

int main()
{
  int card = 1;
  if (card > 1){
    card = card - 1;
  if (card < 7){
    puts("Small card");
   } 
  else {
    puts("Ace!");
  }
  return 0;
}


