#pragma once
#include <iostream>

// Recursive Function
bool Succes{ true };
const int succes[3][3]{
		{ 0, 0, 1 },
		{ 0, 0, 2 },
		{ 0, 0, 3 }
};

void PrintInfo(int hanoi[3][3]);
void Move(int hanoi[3][3], int move1, int move2);
void Hanoi(int hanoi[3][3]);