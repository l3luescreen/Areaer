/*
	This program is my first program.I code this program with all of my skill.
	Code my first program is very fun.I commented on this for the future that I was a great programmer.
	I will not forget the beginning of this trip.
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <windows.h>
#define textcolor(txt,back) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), back*16+txt)
#define resetcolor() SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15)
 
 // This is function that calculate a side of square
void square(float side)
{
	float area; 
	textcolor(9,0);printf("You choose square!\n");textcolor(15,0);
	printf("The operation of square is");
	textcolor(3,0);printf("[Area = side*side]\n\n");textcolor(15,0);
	printf("Please input side of square :");
	textcolor(13,0);scanf("%f",&side);//get variable (side)
	
	area=side*side;textcolor(6,0);//calculate area of square use [side]
	printf("\nArea of your square is %.2f !",area);textcolor(15,0);
	textcolor(10,0);printf("\n============== Process success! ==============");textcolor(15,0);
}

 // This is function that calculate a side of retangle
void rectangle(float width, float length)
{
	float area; 
	textcolor(9,0);printf("You choose retangle!\n");textcolor(15,0);
	printf("The operation of rectangle is");
	textcolor(3,0);printf("[Area = (width*length)]\n\n");textcolor(15,0);
	printf("Please input width of this rectangle :");
	textcolor(13,0);scanf("%f",&width);textcolor(15,0);//get variable (width)
	printf("Please input length of this rectangle :");
	textcolor(13,0);scanf("%f",&length); //get variable (length)
	
	area=width*length;textcolor(6,0); //calculate area of rectangle use [side],[width]
	printf("\nArea of your rectangle is %.2f !",area);textcolor(15,0);
	textcolor(10,0);printf("\n============== Process success! ==============");textcolor(15,0); 
}


void rhombus(float diagonal1,float diagonal2)
{
	float area;
	textcolor(9,0);printf("You choose rhombus!\n");textcolor(15,0);
	printf("The operation of rhombus is");
	textcolor(3,0);printf("[Area = (0.5* multiplied result of the diagonal<<<[diagonal1*diagonal2])\n\n");textcolor(15,0);
	printf("Please input diagonal1 :");		
	textcolor(13,0);scanf("%f",&diagonal1);textcolor(15,0);//get variable (diagonal1)
	printf("Please input diagonal2 :");
	textcolor(13,0);scanf("%f",&diagonal2);//get variable (diagonal2)
	
	area=0.5*(diagonal1*diagonal2);textcolor(6,0);//calculate area of rhombus use [diagonal1],[diagonal2]
	printf("\nArea of your rhombus is %.2f !",area);textcolor(15,0);
	textcolor(10,0);printf("\n============== Process success! ==============");textcolor(15,0);
}

 void kite(float diagonal1,float diagonal2)
 {
 	float area;
	textcolor(9,0);printf("You choose kite!\n");textcolor(15,0);
	printf("The operation of kite is");
	textcolor(3,0);printf("[Area = (0.5* multiplied result of the diagonal<<<[diagonal1*diagonal2]) [Same as rhombus!!!] \n\n");textcolor(15,0);
	printf("Please input diagonal1 :");		
	textcolor(13,0);scanf("%f",&diagonal1);textcolor(15,0);//get variable (diagonal1)
	printf("Please input diagonal2 :");
	textcolor(13,0);scanf("%f",&diagonal2);//get variable (diagonal2)
	
	area=0.5*(diagonal1*diagonal2);textcolor(6,0);//calculate area of kite use [diagonal1],[diagonal2]
	printf("\nArea of your kite is %.2f !",area);textcolor(15,0);
	textcolor(10,0);printf("\n============== Process success! ==============");textcolor(15,0);
 }

 // This is function that calculate a side of trapezoid
 void trapezoid(float height, float FirstPar, float SecPar)
 {
 	float area;
	textcolor(9,0);printf("You choose trapezoid!\n");textcolor(15,0);
	printf("The operation of trapezoid is");
	textcolor(3,0);printf("[Area = (0.5* height*The sum of the parallel sides)\n\n");textcolor(15,0);
	printf("Please input hight :");		
	textcolor(13,0);scanf("%f",&height);textcolor(15,0);//get variable (height)
	printf("Please input the first parallel side :");		
	textcolor(13,0);scanf("%f",&FirstPar);textcolor(15,0);//get variable (the first parallel side)
	printf("Please input the second parallel side :");
	textcolor(13,0);scanf("%f",&SecPar);//get variable (the second parallel side)
	
	area=0.5* height*(FirstPar+SecPar);textcolor(6,0);//calculate area of trapezoid use [the first parallel side],[the second parallel side]
	printf("\nArea of your trapezoid is %.2f !",area);textcolor(15,0);
	textcolor(10,0);printf("\n============== Process success! ==============");textcolor(15,0);
 }
 
 // This is function that calculate a side of triangle
void triangle(float height,float base)
{
	float area; 
	textcolor(9,0);printf("You choose triangle!\n");textcolor(15,0);
	printf("The operation of triangle is");
	textcolor(3,0);printf("[Area = 0.5*(height*base)]\n\n");textcolor(15,0);
	printf("Please input side of triangle :");
	textcolor(13,0);scanf("%f",&base);textcolor(15,0);//get variable (base)
	printf("Please input height of triangle :");
	textcolor(13,0);scanf("%f",&height);//get variable (height)

	area=0.5*(height*base);textcolor(6,0);//calculate area of triangle use [base],[height]
	printf("\nArea of your triangle is %.2f !",area);textcolor(15,0);
	textcolor(10,0);printf("\n============== Process success! ==============");textcolor(15,0);
}

 // This is function that calculate a side of circle
void circle(float radient)
{
	float area; 
	textcolor(9,0);printf("You choose circle!\n");textcolor(15,0);
	printf("The operation of circle is");
	textcolor(3,0);printf("[Area = 3.14*(radient*radient)]\n\n");textcolor(15,0);
	printf("Please input radient of circle :");
	textcolor(13,0);scanf("%f",&radient);//get variable (radient)
	
	area=3.14*(radient*radient); textcolor(6,0);//calculate area of circle use [radient]
	printf("\nArea of your circle is %.2f !",area);textcolor(15,0);
	textcolor(10,0);printf("\n============== Process success! ==============");textcolor(15,0);
}

 // This is function that calculate a side of cube
void cube(float width,float height,float length)
{
	float area; 
	textcolor(9,0);printf("You choose cube!\n");textcolor(15,0);
	printf("The operation of cube is");
	textcolor(3,0);printf("[Volume = height*(width*length)]\n\n");textcolor(15,0);
	printf("Please input width of Cube :");
	textcolor(13,0);scanf("%f",&width);textcolor(15,0);//get variable (width)
	printf("Please input length of Cube :");
	textcolor(13,0);scanf("%f",&length);textcolor(15,0);//get variable (length)
	printf("Please input height of Cube :");
	textcolor(13,0);scanf("%f",&height);textcolor(15,0);//get variable (height)
	
	area=height*(width*length);textcolor(6,0);//calculate area of triangle use [width],[length],[height]
	printf("\nArea of your Cube is %.2f !",area);textcolor(15,0);
	textcolor(10,0);printf("\n============== Process success! ==============");textcolor(15,0);
}

  // This is function that calculate a volume of Ball
void Ball(float radient)
{
	float area;
	textcolor(9,0);printf("You choose Ball!\n");textcolor(15,0);
	printf("The operation of Ball is");
	textcolor(3,0);printf("[Area =((radient*radient*radient)*3.14*4/3)]\n\n");textcolor(15,0);
	printf("Please input radient of Ball :");
	textcolor(13,0);scanf("%f",&radient);//get variable (radient)
	
	area=3.14*4/3*(radient*radient*radient); textcolor(6,0);//calculate area of Ball use [radient]
	printf("\nArea of your Ball is %.2f !",area);textcolor(15,0);
	textcolor(10,0);printf("\n============== Process success! ==============");textcolor(15,0);
}



int main(){
	int shape; 
	float side; 
	float height;
	float base;
	float width;
	float length;
	float diagonal1;
	float diagonal2;
	float FirstPar;
	float SecPar;
	float radient;
	float sumPS;
	char again;


	
	
	textcolor(10,0);
	printf("==========Hello! welcome to Areaer!==========\n");textcolor(15,0);
	printf("What shape do you want? : ");
	textcolor(12,0);printf("\n>>");textcolor(14,0);printf("Input 1:Retangle \n");
	textcolor(12,0);printf("\n>>");textcolor(14,0);printf("Input 2:triangle \n");
	textcolor(12,0);printf("\n>>");textcolor(14,0);printf("Input 3:circle \n");
	textcolor(12,0);printf("\n>>");textcolor(14,0);printf("4:3D Shape \n");
	textcolor(15,0);printf("\nInput is :");
	textcolor(8,0);scanf("%d",&shape);textcolor(15,0);
	
	
	
	switch (shape) 
	{
		
			//In case 1 rettacgle has 2 case inside
			
			/*
			base on number you input in (rec)
				1 for rectangle
				2 for rectangle
				3 for rhombus
			*/
		case 1:

			int rec;
			printf("\nYou input 1 : retangle");
			textcolor(14,0);
			textcolor(12,0);printf("\n>>");textcolor(14,0);printf("Input 1 :square");
			textcolor(12,0);printf("\n>>");textcolor(14,0);printf("Input 2 :retangle");
			textcolor(12,0);printf("\n>>");textcolor(14,0);printf("Input 3 :trapezoid ");
			textcolor(12,0);printf("\n>>");textcolor(14,0);printf("Input 4 :rhombus");
			textcolor(12,0);printf("\n>>");textcolor(14,0);printf("Input 5 :kite");
			textcolor(15,0);
			printf("\n\nInput is : ");textcolor(8,0);
			scanf("%d",&rec);textcolor(15,0);
			switch(rec)
			{
				// This case will use square function above
				case 1:
					square(side);
					break;
					
				// This case will use rectangle function above
				case 2:
					rectangle(width,height);
					break;
				// This case will use rhombus function above
				case 3:
					trapezoid(height,FirstPar,SecPar);
					break;
				case 4:
					rhombus(diagonal1,diagonal2);
					break;
				case 5:
					kite(diagonal1,diagonal2);
					break;
				default :
					textcolor(4,0);
					printf("Error! Please try again");
					printf("\n====================Access denied!====================");textcolor(15,0);
					break;
			}
			break;
			// This case will use triangle function above	
		case 2:
			{
			triangle(height, base);
			break;
			}
			// This case will use circle function above
		case 3:
			{
			circle(radient);
			break;
			}
			
			
			//In case 1 rettacgle has 1 case inside (Will be added in future)
		case 4:
			{	
				/*
			base on number you input in (td)
				1 for cube
			*/
			int td;
			printf("\nYou input 4 : 3D Shape !");
			textcolor(9,0);
			printf("[In this function \'area\' has changed to \'Volume\']");textcolor(15,0);
			textcolor(14,0);
			textcolor(12,0);printf("\n>>");textcolor(14,0);printf("Input 1 to Cube \n");
			textcolor(12,0);printf("\n>>");textcolor(14,0);printf("Input 2 to Ball \n");
			textcolor(15,0);
			printf("\nInput is : ");textcolor(8,0);
			scanf("%d",&td);textcolor(15,0);
			switch(td)
			{
					
			
			/*
			base on number you input in (3D)
				1 for Cube
				2 for Ball
			*/
				case 1:
					{
					cube(width, height,length);
					break;
					}
				case 2:
					{
					Ball(radient);
					break;
					}
				default :
					textcolor(4,0);
					printf("Error! Please try again");
					printf("\n====================Access denied!====================");textcolor(15,0);
				break;
			}
			break;
			}
		default :
			textcolor(4,0);
			printf("Error! Please try again");
			printf("\n====================Access denied!====================");textcolor(15,0);
			break;
		} 
		
		
		
		textcolor(12,0);printf("\n>>");textcolor(14,0);printf("Input Y :Do it again");
		textcolor(12,0);printf("\n>>");textcolor(14,0);printf("Input N :Close the program\n\n");
		textcolor(14,0);printf("Do you want to do it again ? :");textcolor(8,0);
		again = getch();textcolor(15,0);
		printf("\n\n");
		
		
		
		
		
		if(again=='y'){
			main();
		}else{
			printf("Areaer's out...\n");
			printf("Good Bye!\n\n");
		}
}
