//**************************************************************************
//**************************************************************************
//**
//**	Projekt: 2022_04_26_Schachbrett	
//**    ***************************************
//**
//**	Filename: Main.c
//**
//**    Name: micha  
//**	Date: 4/25/2022 12:39:10 PM
//**	
//**	Description:
//**    
//**
//**
//**
//**************************************************************************
//**************************************************************************

//Includes
//**************************************************************************
#include <stdio.h>
#include <math.h>

//Defines & Pragmas
//**************************************************************************
#pragma warning(disable:4996) //Disable warning scanf unsafe
#pragma warning(disable:6031) //Disable warning return getchar()


//Functions
//**************************************************************************


int main(void)
{
	//Variables
	char Schachbrett[8][8] = {
		{'T','S','L','D','K','L','S','T'},
		{'B','B','B','B','B','B','B','B'},
		{' ',' ',' ',' ',' ',' ',' ',' '},
		{' ',' ',' ',' ',' ',' ',' ',' '},
		{' ',' ',' ',' ',' ',' ',' ',' '},
		{' ',' ',' ',' ',' ',' ',' ',' '},
		{'B','B','B','B','B','B','B','B'},
		{'T','S','L','D','K','L','S','T'},
	};
	int i = 0;
	int j = 0;



	//Code
	printf("Schachbrett Grundaufstellung:\n\n");
	
	for (i = 0; i < 8; i++)
	{
		printf("   ---------------------------------\n");
		printf("%i  ", i + 1);
		for (j = 0; j < 8; j++)
		{
			printf("| %c ", Schachbrett[i][j]);
		};
		printf("|");
		printf("\n");
	};
	printf("   ---------------------------------\n");



	getchar();
	fflush(stdin);
	getchar();
	return 0;
}