#pragma once
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
#define capacity 1000

typedef  struct memberMessage
{
	char name[20];
	char sex[10];
	int age;
	char tele[20];
	char address[20];
}Mess;
enum menu
{
	ex,
	init,
	add,
	dele,
	modify,
	search,
	sort,
	display
};
void menu();
void init_function(struct memberMessage* , int );
void display_function(const struct memberMessage* member, int number);
void add_function(Mess* member, int* a);
Mess* search_function(const Mess* a, const char* ptele, int number);
int dele_function(Mess* a,const char* ptele, int* pnumber);
int modify_funciton(Mess* member, const char* plete, int number);
void sortage_function(Mess* member, int number);
void sortname_function(Mess* member, int number);