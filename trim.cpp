/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: 2DHIF
 * ---------------------------------------------------------
 * Exercise Number: 08
 * Title:			trim.cpp
 * Author:			S. Kowatschek
 * Due Date:		10.12.2018
 * ----------------------------------------------------------
 * Description:
 * Implementing trim
 * ----------------------------------------------------------
 */

#include <string.h>
#include "trim.h"


 void trim(const char *source, char *trimmed_string){
   int start=0;
   int end=strlen(source)-1;
   int count=0;

   get_start(source, &start);
   get_end(source, &end, &start);

   if(end==-1){
     strcpy(trimmed_string, "");
     return;
   }

   for(int i = start; i <= end; i++){
     trimmed_string[count]=source[i];
     count++;
   }

 }

 static void get_start(const char* source, int *start){
   while (source[*start] == ' ') {
     *start=*start+1;
   }
 }
 static void get_end(const char* source, int *end, int *start){
   while(*end>=*start && source[*end]== ' '){
     *end = *end-1;
   }
 }
