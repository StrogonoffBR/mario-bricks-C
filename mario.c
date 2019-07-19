#include <stdio.h>
#include <cs50.h>

int main(void){
  int height, space; 

  do{ height = get_int("HEIGHT: "); } while(height <= 0 || height >= 9); // in this program, the height of the blocks cannot be higher than 8, and obviously not 0 or smaller
  space = height; // space will be used to give distance to blocks

  for(int totalOfBricks=0; totalOfBricks<height; totalOfBricks++){ // how many blocks shoudd be printed

    for(int k=1; k<space; k++) { printf(" "); } // generates the space

    for(int leftBricks=0; leftBricks<=totalOfBricks; leftBricks++) {printf("#");} // prints the left tiles

    printf("  "); // prints space between left and right blocks

    for(int rightBricks=0; rightBricks<=totalOfBricks; rightBricks++) {printf("#");} // prints the right tiles
    printf("\n");

    space--;
  }

}
