#pragma once
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

constexpr auto ROW = 9;
constexpr auto COL = 9;

constexpr auto ROWS = ROW+2;
constexpr auto COLS = COL+2;

//À×µÄÊýÁ¿
constexpr auto contt = 20;

void intiB(char arr[ROWS][COLS], int ROWS, int COLS, char set);
void printb(char arrl[ROWS][COLS],int ROW, int COL);
void cont(char arrl[ROWS][COLS], int ROW,int COL);
void sl(char arrl[ROWS][COLS], char arrs[ROWS][COLS], int ROW, int COL);
int zwl(char arrl[ROWS][COLS], int ROWS, int COLS,int x,int y);
void rgzwl(char arrs[ROWS][COLS], char arrl[ROWS][COLS], int zl, int x, int y ,int ROW,int COL);
