#include<stdio.h>
void main()
{
	int choice;
	printf("Buddy!!! Choose your choice for delicious food :");
	scanf("%d",&choice);
	switch(choice)
		{
			case 1:printf("Pizza\n Rs 239");break;
			case 2:printf("Burger\n Rs 129");break;
			case 3:printf("Pasta\n Rs 179");break;
			case 4:printf("French Fries\n Rs 99");break;
			case 5:printf("Sandwich\n Rs 149");break;
            default:printf("Sorry buddy!! We have only five items to show");
        }
}
