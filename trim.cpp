/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: 2DHIF
 * ---------------------------------------------------------
 * Exercise Number: 08
 * Title:			trim.cpp
 * Author:			S. Kowatschek
 * Due Date:		10.12.2018
 * ----------------------------------------------------------
 * Description:
 * Test functions for trim.h
 * ----------------------------------------------------------
 */

#include "trim.h"
#include <string.h>

void trim(const char *source, char *trimmed_string){
  int count=0;
  int begin = 0;
  int end = strlen(source) - 1;

  get_start(source, &begin);
  get_end(source, &end, &begin);

  if(end==-1){
    strcpy(trimmed_string, "");
    return;
  }

  for (int i = begin; i <= end; i++) {
    trimmed_string[count]=source[i];
    count++;
  } 
}

static void get_start(const char* source, int *begin){
  while(source[*begin]==' '){
    *begin=*begin+1;
  }
}
static void get_end(const char* source, int *end, int *begin){
  while((*end>=*begin) && source[*end]==' '){
    *end=*end-1;
  }
}
