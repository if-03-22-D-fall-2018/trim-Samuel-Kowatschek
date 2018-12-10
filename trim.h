/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: 2DHIF
 * ---------------------------------------------------------
 * Exercise Number: 08
 * Title:			trim.h
 * Author:			S. Kowatschek
 * Due Date:		10.12.2018
 * ----------------------------------------------------------
 * Description:
 * Interface for trim
 * ----------------------------------------------------------
 */

#ifndef TRIM__H
#define TRIM__H

#define STRLEN 16

void trim(const char *source, char *trimmed_string);

static void get_start(const char* source, int *begin);
static void get_end(const char* source, int *end, int *begin);
static void get_start_and_end(const char* source,int* begin, int* end);
#endif
