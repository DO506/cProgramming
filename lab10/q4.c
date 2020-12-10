struct footballer
{
    int age,match,average_gaol;
    char name[25];
}player[100];
 
void main()
{
    int i;

    printf("Enter player info as name , age, match,average_gaol\n");
    for(i=0;i<5;i++)
    {
        scanf("%s %d %d %d",player[i].name,&player[i].age,&player[i].match,&player[i].average_gaol);
    }
    for(int i = 0; i < 5; i++){
		for(int j = i+1 ; j < 5; j++){
			if(player[i].average_gaol > player[j].average_gaol){
				int temp = player[i].average_gaol;
				 player[i].average_gaol =  player[j].average_gaol;
				 player[j].average_gaol = temp;
			}
		}
	
	}
    printf("\nNAME\t\tAGE\t\tMATCH\t\tAVERAGE_GOAL\n");
    for(i=0;i<5;i++)
    {
        printf("%s\t\t%d\t\t%d\t\t%d\n",player[i].name,player[i].age,player[i].match,player[i].average_gaol);
    }
}