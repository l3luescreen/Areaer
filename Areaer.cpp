#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <windows.h>
#define textcolor(txt,back) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), back*16+txt)
#define resetcolor() SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15)
 
float square(float side){
	float area; 
	textcolor(9,0);printf("You choose square!\n");textcolor(15,0);
	printf("The operation of square is");
	textcolor(3,0);printf("[Area = side*side]\n\n");;textcolor(15,0);
	printf("Please input side of square :");
	textcolor(13,0);//change text color to yellow
	scanf("%f",&side);textcolor(6,0);
	area=side*side;
	return area; 
}
float rectangle(float width, float length){
	float area; 
	textcolor(9,0);printf("You choose retangle!\n");textcolor(15,0);
	printf("The operation of rectangle is");
	textcolor(3,0);printf("[Area = (width*length)]\n\n");;textcolor(15,0);
	printf("Please input width of this rectangle :");
	textcolor(13,0);//change text color to yellow
	scanf("%f",&width);textcolor(15,0);
	printf("Please input length of this rectangle :");
	textcolor(13,0);//change text color to yellow
	scanf("%f",&length);
	area=width*length;textcolor(6,0);
	return area; 
}
float triangle(float height,float base){
	float area; 
	textcolor(9,0);printf("You choose triangle!\n");textcolor(15,0);
	printf("The operation of triangle is");
	textcolor(3,0);printf("[Area = 0.5*(height*base)]\n\n");;textcolor(15,0);
	printf("Please input side of triangle :");
	textcolor(13,0);//change text color to yellow
	scanf("%f",&base);textcolor(15,0);
	printf("Please input height of triangle :");
	textcolor(13,0);//change text color to yellow
	scanf("%f",&height);
	area=0.5*(height*base);textcolor(6,0);
	return area; 
}
float circle(float radient){
	float area; 
	textcolor(9,0);printf("You choose circle!\n");textcolor(15,0);
	printf("The operation of circle is");
	textcolor(3,0);printf("[Area = 3.14*(radient*radient)]\n\n");;textcolor(15,0);
	printf("Please input radient of circle :");
	textcolor(13,0);//change text color to yellow
	scanf("%f",&radient);
	area=3.14*(radient*radient); textcolor(6,0);
	return area; 
}
float cube(float width,float height,float length){
	float area; 
	textcolor(9,0);printf("You choose cube!\n");textcolor(15,0);
		printf("The operation of cube is");
	textcolor(3,0);printf("[Volume = height*(width*length)]\n\n");;textcolor(15,0);
	printf("Please input width of Cube :");
	textcolor(13,0);//change text color to yellow
	scanf("%f",&width);textcolor(15,0);
	printf("Please input length of Cube :");
	textcolor(13,0);//change text color to yellow
	scanf("%f",&length);textcolor(15,0);
	printf("Please input height of Cube :");
	textcolor(13,0);//change text color to yellow
	scanf("%f",&height);textcolor(15,0);
	area=height*(width*length);textcolor(6,0);
	return area; 
}
int main(){
	int shape; 
	int side; 
	int height;
	int base;
	int width;
	int length;
	float radient;
	textcolor(10,0);
	printf("==========Hello! welcome to Areaer!==========\n");textcolor(15,0);
	printf("What shape do you want? : ");
	textcolor(14,0);
	printf("\nInput 1:Retangle \nInput 2:triangle \nInput 3:circle\nInput 4:3D Shape\n");textcolor(15,0);
	printf("Input is :");textcolor(8,0);
	scanf("%d",&shape);textcolor(15,0);
	switch (shape) 
	{
		case 1:
			int rec;
			printf("\nYou input 1 : retangle");
			textcolor(14,0);
			printf("\nInput 1 :square \nInput 2 :retangle\n");textcolor(15,0);
			printf("Input is : ");textcolor(8,0);
			scanf("%d",&rec);textcolor(15,0);
			switch(rec)
			{
				case 1:
					printf("\nArea of your square is %.2f !",square(side));textcolor(15,0);
					textcolor(10,0);
					printf("\n============== Process success! ==============");textcolor(15,0);
					break;
				case 2:
					printf("\nArea of your square is %.2f !",rectangle(width,height));textcolor(15,0);
					textcolor(10,0);
					printf("\n============== Process success! ==============");textcolor(15,0);
					break;
				default :
					textcolor(4,0);
					printf("Error! Please try again");
					printf("\n====================");
					printf(" Access denied! ");
					printf("====================");textcolor(15,0);
					break;
			}
			break;
		case 2:
			printf("\nArea of your triangle is %.2f !",triangle(height, base));textcolor(15,0);
			textcolor(10,0);
			printf("\n============== Process success! ==============");textcolor(15,0);
		break;
		case 3:
			printf("\nArea of your circle is %.2f !",circle(radient));textcolor(15,0);
			textcolor(10,0);
			printf("\n============== Process success! ==============");textcolor(15,0);
		break;
		case 4:
			int td;
			printf("\nYou input 4 : 3D Shape !");
			textcolor(9,0);
			printf("[In this function \'area\' has changed to \'Volume\']");textcolor(15,0);
			textcolor(14,0);
			printf("\n\tInput 1 to Cube \n");textcolor(15,0);
			printf("Input is :");
			printf("Input is : ");textcolor(8,0);
			scanf("%d",&td);textcolor(15,0);
			switch(td)
			{
				case 1:
					printf("\nArea of your square is %.2f !",cube(width, height,length));textcolor(15,0);
					textcolor(10,0);
					printf("\n============== Process success! ==============");textcolor(15,0);
				break;
				default :
					textcolor(4,0);
					printf("Error! Please try again");
					printf("\n====================");
					printf(" Access denied! ");
					printf("====================");textcolor(15,0);
				break;
			}
		break;
			
		default :
			textcolor(4,0);
			printf("Error! Please try again");
			printf("\n====================");
			printf(" Access denied! ");
			printf("====================");textcolor(15,0);
		break;
	} 
	
	getch();
}
