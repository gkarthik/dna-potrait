#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct coord {
  int x;
  int y;
};

struct coord print_coordinate(char c, int x, int y){
  char *color;
  struct coord _c;
  switch(c){
  case 'A':			/* Up */
    x = x;
    y = y + 1;
    color = "D9042B";
    break;
  case 'T':			/* Right */
    x = x + 1;
    y = y;
    color = "03588C";
    break;
  case 'G':			/* Down */
    x = x;
    y = y - 1;
    color = "F29F05";
    break;
  case 'C':			/* Left */
    x = x - 1;
    y = y;
    color = "F24B0F";
    break;
  }
  printf("%d %d %s\n", x, y, color);
  _c.x = x;
  _c.y = y;
  return _c;
}

int main(int argc, char **argv){
  char *path = argv[1];
  FILE * fp;
  char * line = NULL;
  size_t len = 0;
  ssize_t read;
  struct coord c = {0,0}; 
  fp = fopen(path, "r");
  if (fp == NULL)
    exit(EXIT_FAILURE);
  printf("%s %s %s\n", "x", "y", "color");
  while ((read = getline(&line, &len, fp)) != -1) {
    if (line[0] == '>'){	/* Remove First line of fasta using '>' */
      continue;
    }
    for (int i = 0; i < read; ++i){
      c = print_coordinate(line[i], c.x, c.y);
    }
  }
    
  fclose(fp);
  if (line)
    free(line);
  exit(EXIT_SUCCESS);
}
