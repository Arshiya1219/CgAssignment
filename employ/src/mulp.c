nclude<stdlib.h>
  2 #include<stdio.h>
    3 #include<unistd.h>
	  4 #include<sys/types.h>
	    5 #include<sys/wait.h>
		  6 int create(char *pgm, char *argv[])
		    7 {
			  8     int pid;
			    9     // executes pgm searching for the path in “PATH” environment variable */
				 10     // perror(“execvp”); /* the execvp function returns only if an error occurs */                                      // exit(0);
				  11     pid = fork();
				   12
				    13          // executes pgm searching for the path in “PATH” environment variable */
					 14         // perror(“execvp”); /* the execvp function returns only if an error occurs */
					  15         //exit(0);
					   16
					    17     if execvp()
						 18     {
						  19         execvp(pgm,argv); /* executes pgm searching for the path in “PATH” environment variable */
						   20         perror("execvp");  /* the execvp function returns only if an error occurs */
						             exit(0);
							      }
							       else
							        {
							         wait(NULL);
								      printf("Inside parent process\n");
								      }
								    };
								    int main()
									  {
									       char *argv[]={"ls","-l",NULL}; /*List of NULL terminated arguments */
									       create("ls",argv);
									         return 0;
										  }
