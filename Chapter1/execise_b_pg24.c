/* #include <stdio.h>
 * int main()
 * {
 * int card = 1;
 * if (card > 1) {
 * card = card - 1;
 * if (card < 7)
 * puts("Small card");
 * else
 * puts("Ace!");
 * }
 * return 0;
 * }
 */

/* Answer: The code will work but it won't compile correctly because else command is wrong,
 * it have missing braces. You could need braces when you have 2 o more statemens and/ or else or if else 
 * it will display nothing  */

/* Correction code*/

#include <stdio.h>
  int main()
  {
    int card = 1;
    if (card > 1) {
      card = card - 1;
      if (card < 7){
        puts("Small card");
      } else {
        puts("Ace!");
        }
    }
  return 0;
  }
