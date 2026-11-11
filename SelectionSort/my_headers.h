/*
 * my_headers.h
 *
 *  Created on: Nov 1, 2026
 *      Author: karolinamatejczyk
 */

#ifndef MY_HEADERS_H_
#define MY_HEADERS_H_

#include <string>
#include <unistd.h>
#define MAXSIZE	 2100000

using namespace std;

void	printmenu();
void	printarray(long data[], long size);
int		readfile(string infilename, long data[]);
int		writefile(long data[], long size, string outfilename);



#endif /* MY_HEADERS_H_ */
