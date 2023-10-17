/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_CUOBJDUMP_HOME_SRINIVAS_GPGPU_SIM_DISTRIBUTION_BUILD_GCC_7_5_0_CUDA_11010_RELEASE_LIBCUDA_CUOBJDUMP_PARSER_H_INCLUDED
# define YY_CUOBJDUMP_HOME_SRINIVAS_GPGPU_SIM_DISTRIBUTION_BUILD_GCC_7_5_0_CUDA_11010_RELEASE_LIBCUDA_CUOBJDUMP_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int cuobjdump_debug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    H_SEPARATOR = 258,
    H_ARCH = 259,
    H_CODEVERSION = 260,
    H_PRODUCER = 261,
    H_HOST = 262,
    H_COMPILESIZE = 263,
    H_IDENTIFIER = 264,
    H_UNKNOWN = 265,
    H_COMPRESSED = 266,
    CODEVERSION = 267,
    STRING = 268,
    FILENAME = 269,
    DECIMAL = 270,
    PTXHEADER = 271,
    ELFHEADER = 272,
    PTXLINE = 273,
    ELFLINE = 274,
    SASSLINE = 275,
    IDENTIFIER = 276,
    NEWLINE = 277
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 50 "cuobjdump.y"

	char* string_value;

#line 84 "/home/srinivas/gpgpu-sim_distribution/build/gcc-7.5.0/cuda-11010/release/libcuda/cuobjdump_parser.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int cuobjdump_parse (yyscan_t scanner, struct cuobjdump_parser* parser, std::list<cuobjdumpSection*> &cuobjdumpSectionList);

#endif /* !YY_CUOBJDUMP_HOME_SRINIVAS_GPGPU_SIM_DISTRIBUTION_BUILD_GCC_7_5_0_CUDA_11010_RELEASE_LIBCUDA_CUOBJDUMP_PARSER_H_INCLUDED  */
