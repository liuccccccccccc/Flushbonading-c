#ifndef __SEQ_H__
#define __SEQ_H__
#define MAX 10
#include<stdlib.h>
#include<stdio.h>
typedef int data;
typedef struct
{
	data datatable[MAX];
    int len;
}seq,*seq_p;

void  list();	
void delete_tail(seq_p L);
void delete_head(seq_p L);
void insert_end(seq_p L,int n);
void show(seq_p L);
 void insert_key(seq_p L,int key,int value);
void insert_head(seq_p L,int n);
int judge_FULL(seq_p L);
int judge_NULL(seq_p L);
seq_p create_seqtab();
int search_key_mode(seq_p L,int n,int b);//按值查找并且修改
int  search_key(seq_p L,int key);
int search_value(seq_p L,int n);//按值查下标
void delete_key(seq_p L,int key);
void rela_seq(seq_p L);
void remove_dub(seq_p L);//去除重复元素
void empty_seq(seq_p L);
#endif
