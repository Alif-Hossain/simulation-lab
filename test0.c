#include<stdio.h>
int main()
{

     FILE *in_file  = fopen("test.txt", "r"); // read only
    FILE *out_file = fopen("test1.txt", "w"); // write only

          // test for files not existing.
          if (in_file == NULL || out_file == NULL)
            {
              printf("Error! Could not open file\n");
              exit(-1); // must include stdlib.h
            }

        // write to file vs write to screen
          fprintf(file, "this is a test %d\n", integer); // write to file

          fprintf(stdout, "this is a test %d\n", integer); // write to screen
          printf(         "this is a test %d\n", integer); // write to screen

          // read from file/keyboard. remember the ampersands!
          fscanf(file, "%d %d", &int_var_1, &int_var_2);

          fscanf(stdin, "%d %d", &int_var_1, &int_var_2);
          scanf(        "%d %d", &int_var_1, &int_var_2);


    return 0;
}
