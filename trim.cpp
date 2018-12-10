/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: <your class>
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			trim.cpp
 * Author:			P. Bauer
 * Due Date:		March 14, 2015
 * ----------------------------------------------------------
 * Description:
 * Test functions for trim.h
 * ----------------------------------------------------------
 */

#include "trim.h"
#include <stdbool.h>
#include <string.h>

void trim(const char *source, char *trimmed_string){
  //bool shouldTrim=true;
  //int trimPos=0;
  //int count=0;
  if(source[0]=='\0'){
    trimmed_string="";
    return;
  }
  /*for (int i = 0; i < STRLEN-1; i++) {
    if(source[i]==" " && shouldTrim){
      if(source[i+1]==" "){
        shouldTrim=true;
      }else{
        shouldTrim=false;
      }
    }else{
      trimmed_string[count] = source[i];
      count++;
    }
  }*/

}
