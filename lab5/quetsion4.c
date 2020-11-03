#include<stdio.h>
#include<string.h>

int main()  //print the capitals of the choosen countries
{
	char country_list[100]={
		"Bhutan","Thimphu",
		"India","Delhi",
		"Thailand","Bangkok",
		"japan", "Tokyo"
	};
	int i,choice;
    int pos;

    printf("Enter the name of the Country : ");
    pos=-1;

    for(i=0;i<=50;i++)
    {   
        if(country_list[i].name)==0
           pos=i;   
    }

    if(pos>-1)      
    {
        printf("capital= ");
        printf("%c", country_list[pos].capital);
           }
    else
        printf("\n\t Sorry, Country not in database");
    // End function
}

