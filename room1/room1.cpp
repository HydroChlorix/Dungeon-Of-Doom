
#include "stdafx.h"
#include <windows.h>

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int room0[] = { 0, 0, 1, 0, 0, 0, 0, 0, 0 };
int room1[] = { 1, 0, 0, 1, 1, 0, 0, 0, 0 };
int room2[] = { 2, 0, 0, 1, 0, 0, 0, 0, 0 };
int room3[] = { 3, 1, 1, 1, 0, 0, 0, 0, 0 };
int room4[] = { 4, 1, 1, 1, 1, 0, 0, 0, 0 };
int room5[] = { 5, 0, 0, 1, 1, 0, 0, 0, 0 };
int room6[] = { 6, 1, 1, 0, 0, 0, 0, 0, 0 };
int room7[] = { 7, 0, 1, 0, 1, 0, 0, 0, 0 };
int room8[] = { 8, 0, 0, 0, 1, 0, 0, 0, 0 };

//ROOM = 0
//NORTH = 0
//EAST 1
//SOUTH 1
//WEST 0
//UP 0
//DOWN 0
//MONSTERTYPE 0
//NUMBEROFMONSTERS 0
//FOOD 0

int playerInRoom;
char playerMove;
char playerDirection[1];

void room(void)
//Show the player in which room he is and show the possible exits
{
	int j = 0;
	int n = 0;
	playerInRoom = 0;
	printf("You are in room number: %d\n\n", playerInRoom);
	printf("Room Number: %d\n\n", room0[0]);

	for (j = 0; j < 7; j++) {
		;
		printf("room0[%d] = %d\n", j, room0[j]);
	}
	printf("Above info is for debugging purpose only.\n\n");

	if (room0[1] == 1) {
		printf("You can go North.\n\n");
	}
	else if (room0[2] == 1) {
		printf("You can go East.\n\n");
	}
	else if (room0[3] == 1) {
		printf("You can go South.\n\n");
	}

	else if (room0[4] == 1) {
	 printf("You can go West.\n\n");
	}
		
	else if (room0[5] == 1)
	{
	 printf("You can go Up.\n\n");
	}
		
	else if (room0[6] == 1)
	{
	 printf("You can go Down.\n\n");
	}
		
	else { printf("Hm strange there seems to be no exit!"); }
		printf("Inside the room function\n\n");
}
		

void playerMovement(void)
//Get the input from the player into which room he wants to move and change the variable playerInRoom accordingly
{
	printf("Where do you want to go ? n,e,s,w,u,d: \n\n");
	//scanf_s("%s", playerDirection);
	const int MAX_LEN = 80;
	scanf_s("%s", playerDirection,1);
	if (playerDirection[0] = "e" && playerInRoom == 0) {
		playerInRoom = 1;
		printf("You are in room number: %d\n\n", playerInRoom);
	}
	else if (room0[2] == 1) {
		printf("You can go East.\n\n");
	}
}


int main(int argc, char *argv[])
{
	/* TODO: Enter code here */
	srand(time(NULL)); //for random number generation

	// int playerInRoom = 0;
	int r = rand(); //random number
	printf("The Dungeon Of Doom\n\n");
	const int MAX_LEN = 80;
	char playerName[MAX_LEN];
	char exitCondition[4];
		printf("Enter a your name: \n\n");
		scanf_s("%79s", playerName, MAX_LEN);
		printf("Greetings %s\n\n", playerName);
		room(); //We call the function here
		playerMovement(); //We call the player movement function here
		printf("Enter 'exit' to stop and leave the program: ");
		scanf_s("%s", exitCondition);
		if (exitCondition != "exit")
		{
			printf("Exit");
		}

		return 0;
	}


