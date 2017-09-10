/*  helloworld, a program for printing "Hello World to standard output
    Copyright (C) 2009 Klaus Grue

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

    Contact: Klaus Grue, grue@diku.dk, http://www.diku.dk/~grue/

    helloworld is used for illustrating how to distribute a program
    using Debian packages, RPM, and Cygwin.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define _QUOTEME(x) #x
#define QUOTEME(x) _QUOTEME(x)

void usage(){
  printf("\n");
  printf("  Como usar: olamundo [opcao]\n");
  printf("  Quando invocado sem opcoes: mostra \"Ola, Mundo!\" e sai\n");
  printf("  Opcoes:\n");
  printf("  --versao  Mostra informacoes sobre a versao\n");
  printf("  --help     Mostra esta mensagem\n");
  printf("\n");
  exit(0);}

void version(){
  printf("\n");
  printf("  Versao do olamundo %s\n",QUOTEME(VERSION));
  printf("  Copyright (C) 2009 Klaus Grue\n");
  printf("  Copyright (C) 2017 @artfesg (traducao)\n");
  printf("  Disponivel sob a licenca GNU\n");
  printf("  olamundo nao possui absolutamente nenhuma garantia\n");
  printf("\n");
  exit(0);}

void hello(){
  printf("Ola, Mundo!\n");
  exit(0);}

int main(int argc,char *argv[]){
  if(argc<2) hello();
  if(argc>2) usage();
  if(!strcmp(argv[1],"--version")) version();
  usage();}
