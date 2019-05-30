//Author: Umar Tung
// Reverses the string provided through the command line and
// prints it to standard output.
// uses O(1) memory (in-place)
#include <stdio.h>
#include <string.h>

int main(int argc,char * argv[] ){
    if( argc < 2 || argc > 2){
      printf("Usage: ./ReverseString <word>\n");

    }
    else{

      char * str = argv[1];
      char * beg = str;
      char * end = str + strlen(str)-1;
    
      while(beg < end){
          //swap 
          char temp = *beg;
          *beg = *end;
          *end = temp;
        
          end--;
          beg++;

      }
        printf("%s\n", str);
    }
    
    
    
}
