/*Write enumerated types that supports dates—such as december 12. Then add a function that produces a next day. 
 So nextday(date) of december 12 is december 13. Also write a function printdate(date) that prints a date legibly.
 The function can assume that February has 28 days and it most know how many days are in each month. Use a struct with two members; 
 one is the month and the second  is the day of the month—an int (or short). */
 #include <stdio.h>

void nextDay();
void printDate();

typedef enum months{jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec }month;
struct date
     {
         month m; 
         int day;} c1;
         
//c1 is for date to short code
        
int main(void)
{
	// 28 february
	c1.m=feb;
	c1.day=28;
	printDate();
    nextDay();
    //14 march
    c1.m=mar;
	c1.day=14;
	printDate();
    nextDay();
    //31 october
	c1.m=oct;
	c1.day=31;
	printDate();
    nextDay();
    //31 december
	c1.m=dec;
	c1.day=31;
	printDate();
    nextDay();
    
 return 0;
}

void nextDay() 
{

	if(c1.m == jan)
	{
	   if(c1.day<31){
		printf("The next day is %d january",c1.day+1) ;}
	   else{
	   	printf("The next day is 1 february");
	   }
	}
	else if(c1.m == feb)
	{
		  if(c1.day<28){
		printf("The next day is %d february",c1.day+1) ;}
	   else{
	   	printf("The next day is 1 march");
	   }
	}
	else if(c1.m == mar)
	{
		  if(c1.day<31){
		printf("The next day is %d march",c1.day+1) ;}
	   else{
	   	printf("The next day is 1 april");
	   }
	}
	else if(c1.m == apr)
	{
	  if(c1.day<30){
		printf("The next day is %d april",c1.day+1) ;}
	   else{
	   	printf("The next day is 1 may");
	   }
	}
	else if(c1.m == may)
	{
		  if(c1.day<31){
		printf("The next day is %d may",c1.day+1) ;}
	   else{
	   	printf("The next day is 1 june");
	   }
	}
	else if(c1.m == jun)
	{
		  if(c1.day<30){
		  
		printf("The next day is %d june",c1.day+1) ;}
	   else{
	   	printf("The next day is 1 july");
	   }
	}
	else if(c1.m == jul)
	{
		  if(c1.day<31){
		  
		printf("The next day is %d july",c1.day+1) ;}
	   else{
	   	printf("The next day is 1 august");
	   }
	}
	else if(c1.m == aug)
	{
	   if(c1.day<31){
	   
		printf("The next day is %d august",c1.day+1) ;}
	   else{
	   	printf("The next day is 1 september");
	   }
	}
	else if(c1.m == sep)
	{
	   if(c1.day<30){
	   
		printf("The next day is %d september",c1.day+1) ;}
	   else{
	   	printf("The next day is 1 october");
	   }
	}
	else if(c1.m == oct)
	{
		  if(c1.day<31){
		  
		printf("The next day is %d october",c1.day+1) ;}
	   else{
	   	printf("The next day is 1 november");
	   }
	}
	else if(c1.m == nov)
	{
		  if(c1.day<30){
		  
		printf("The next day is %d november",c1.day+1) ;}
	   else{
	   	printf("The next day is 1 december");
	   }
	}
	else if(c1.m == dec)
	{
		  if(c1.day<31){
		  
		printf("The next day is %d december",c1.day+1) ;}
	   else{
	   	printf("The next day is 1 january");
	   }
	}
	else
	{
		printf("Wrong Value");
	}
}

void printDate()
{
	printf("Today ; \nday : %d, \t month : %d \n", c1.day,c1.m);
}
