//7.Write program to calculate the age of a person based on year, month as i/p

#include<stdio.h>
int main()
{
	int date1,month1,year1,date2,month2,year2,u,v,w,x;
	char a;
	printf("Enter present date in dd/mm/yyyy format : ");            //enter current date 
	scanf("%d%c%d%c%d",&date1,&a,&month1,&a,&year1);
	printf("\nEnter your date of birth in dd/mm/yyyy: ");           //enter your DOB
	scanf("%d%c%d%c%d",&date2,&a,&month2,&a,&year2);
	printf("\nYour present age is: ");
	u=date1-date2;                                                 // current year minus with dob year
	v=month1-month2;                                               //current month minus with dob month
	w=year1-year2;
	x=u;
	if(u<0)                                                    //condition for date
	{
	    u=31+u;
	}
	else
	u=date1-date2;
	if(v<=0)
	{ if(x<0)
	  { v=11+v;
	    w=w-1;
	  }
	  if(x>0)
	  { w=year1-year2-1;                        
	    v=v+12;
	  }
	}
	else
	v=month1-month2;
	printf("%d Years %d Months %d Days",w,v,u);          //print the how many year month days you old
	return 0;
}
