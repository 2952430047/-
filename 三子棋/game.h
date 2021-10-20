#pragma once

constexpr auto row = 3;
constexpr auto col = 3;

int gameb();
void printb(char arr[row][col], int row, int col);
void intib(char arr[row][col], int row, int col);
void my(char arrb[row][col],int row, int col);//下子
void com(char arrb[row][col],int row,int col);//电脑下子
int judgment(char arrb[row][col], int row, int col);