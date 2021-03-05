#include "datamanipulation.h"

void readToFile()//Function to read data from file
{ 
	i=0;
	FILE *fp = fopen(ikinciArguman,"r"); // Open the file
  	int count=0,dV,rV;
  	if (fp == NULL) 
	{
		setColor(79);
    	printf("[ERROR]: File not found {%s}\n",ikinciArguman);
    	setColor(15);
    	exit(1);
  	}
	else
	{
	        setColor(10);
		printf("[OPERATION]: Loading data(s) from the file.\n");
  		while (!feof(fp)) 
	        {
	    	    fscanf(fp,"%d",&dV);
	    	    veriler[i] = dV; 
	    	    i++;
 		    count++;
 	        }
  		    printf("[OPERATION]: Data upload is complete.\n");
		    setColor(6);
  		    if(count < 10000)
		    {
  			printf("[HEURISTIC]: If the number of data is low, this may adversely affect the result.\n");
		    }
	    setColor(15);	
  	}
  	fclose(fp);
}

void writeToFile()
{
	FILE *fp = fopen(dorduncuArguman, "w");
  	if (fp == NULL)
	{
  		setColor(79);
      		printf("[ERROR]: File not found {%s}\n",dorduncuArguman);
        	setColor(15);
      		exit(1);
  	}
  	else
  	{
  		int j;
  		setColor(10);
  		printf("[OPERATION]: Data(s) is being written to the file.\n");
  		setColor(15);
  		for(j=0; j<i; j++)
		{
  			fprintf (fp,"%d ",veriler[j]);	
		}
		setColor(10);	
  		printf("[OPERATION]: Writing to file is complete.\n");
  		setColor(10);
  	}
  fclose (fp);
}


void dataWriteConsole()
{
 	int j;
 	setColor(8);
	for(j=0; j<i; j++)
	{
		printf("<%d> ",veriler[j]);
	}
	setColor(15);
	printf("\n\n");
}
