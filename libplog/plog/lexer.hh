/* Generated by re2c 0.16 on Sun Sep 25 13:44:53 2016 */
#line 1 "lexer.xch"
// {{{ GPL License

// This file is part of gringo - a grounder for logic programs.
// Copyright (C) 2013  Roland Kaminski

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// }}}

#include <gringo/locatable.hh>
#include "plogparser.h"

#define YYCTYPE     char
#define YYCURSOR    cursor()
#define YYLIMIT     limit()
#define YYMARKER    marker()
#define YYFILL(n)   {fill(n);}
#define YYCTXMARKER ctxmarker()
#define YYGETCONDITION condition
#define YYSETCONDITION condition



// settings: continue executing the loop when the condiiton is switched, e.g,
// in       <normal,theory,definition> "%"        :=> comment

#line 40 "lexer.xch"

//
// definitions:
#line 57 "lexer.xch"


using Location = Gringo::Location;

int PlogParser::lex_impl(void *pValue, Location &loc) {
    int bc = 0;
    auto &value = *static_cast<PlogGrammar::parser::semantic_type*>(pValue);
    start(loc);
    for (;;) {
        
#line 56 "<stdout>"
{
	YYCTYPE yych;
	switch (YYGETCONDITION()) {
	case yycnormal: goto yyc_normal;
	case yycblockcomment: goto yyc_blockcomment;
	case yyccomment: goto yyc_comment;
	}
/* *********************************** */
yyc_blockcomment:
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
	case '\n':	goto yy5;
	case '%':	goto yy7;
	case '*':	goto yy9;
	default:	goto yy3;
	}
yy3:
	++YYCURSOR;
yy4:
#line 116 "lexer.xch"
	{ continue; }
#line 79 "<stdout>"
yy5:
	++YYCURSOR;
#line 115 "lexer.xch"
	{ if(eof()) { lexerError("<EOF>"); return 0; } step(); continue; }
#line 84 "<stdout>"
yy7:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '*':	goto yy10;
	default:	goto yy8;
	}
yy8:
	YYSETCONDITION(yyccomment);
	continue;
yy9:
	yych = *++YYCURSOR;
	switch (yych) {
	case '%':	goto yy12;
	default:	goto yy4;
	}
yy10:
	++YYCURSOR;
#line 113 "lexer.xch"
	{ bc++; continue; }
#line 104 "<stdout>"
yy12:
	++YYCURSOR;
#line 112 "lexer.xch"
	{ if(--bc == 0) { condition(yycnormal); start(loc); } continue; }
#line 109 "<stdout>"
/* *********************************** */
yyc_comment:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '\n':	goto yy18;
	default:	goto yy16;
	}
yy16:
	++YYCURSOR;
#line 131 "lexer.xch"
	{ continue; }
#line 122 "<stdout>"
yy18:
	++YYCURSOR;
#line 118 "lexer.xch"
	{
            if(eof()) {
                if(bc > 0) { lexerError("<EOF>"); }
                return 0;
            }
            step();
            if (bc > 0) { condition(yycblockcomment); }
            else {
                condition(yycnormal);
                start(loc);
            }
            continue;
        }
#line 139 "<stdout>"
/* *********************************** */
yyc_normal:
	if ((YYLIMIT - YYCURSOR) < 11) YYFILL(11);
	yych = *YYCURSOR;
	switch (yych) {
	case '\t':
	case '\r':
	case ' ':	goto yy25;
	case '\n':	goto yy27;
	case '!':	goto yy29;
	case '#':	goto yy30;
	case '%':	goto yy31;
	case '&':	goto yy33;
	case '(':	goto yy35;
	case ')':	goto yy37;
	case '*':	goto yy39;
	case '+':	goto yy41;
	case ',':	goto yy43;
	case '-':	goto yy45;
	case '.':	goto yy47;
	case '/':	goto yy49;
	case '0':	goto yy51;
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy53;
	case ':':	goto yy55;
	case '<':	goto yy57;
	case '=':	goto yy59;
	case '>':	goto yy61;
	case '?':	goto yy63;
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':	goto yy65;
	case '[':	goto yy68;
	case '\\':	goto yy70;
	case ']':	goto yy72;
	case 'a':	goto yy74;
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy76;
	case 'n':	goto yy78;
	case 's':	goto yy79;
	case '{':	goto yy80;
	case '|':	goto yy82;
	case '}':	goto yy84;
	default:	goto yy23;
	}
yy22:
#line 67 "lexer.xch"
	{ start(loc); continue; }
#line 239 "<stdout>"
yy23:
	++YYCURSOR;
yy24:
#line 110 "lexer.xch"
	{ lexerError( std::string(string().first, string().first + string().size)); continue; }
#line 245 "<stdout>"
yy25:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '\t':
	case '\r':
	case ' ':	goto yy25;
	default:	goto yy22;
	}
yy27:
	++YYCURSOR;
#line 68 "lexer.xch"
	{ if(eof()) return 0; step(); start(loc); continue; }
#line 260 "<stdout>"
yy29:
	yych = *++YYCURSOR;
	switch (yych) {
	case '=':	goto yy86;
	default:	goto yy24;
	}
yy30:
	yych = *++YYCURSOR;
	switch (yych) {
	case '!':	goto yy88;
	case 'a':
	case 'b':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy90;
	case 'c':	goto yy93;
	default:	goto yy24;
	}
yy31:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '*':	goto yy94;
	default:	goto yy32;
	}
yy32:
	YYSETCONDITION(yyccomment);
	continue;
yy33:
	++YYCURSOR;
#line 93 "lexer.xch"
	{ return PlogGrammar::parser::token::AND; }
#line 312 "<stdout>"
yy35:
	++YYCURSOR;
#line 86 "lexer.xch"
	{ return PlogGrammar::parser::token::LPAREN; }
#line 317 "<stdout>"
yy37:
	++YYCURSOR;
#line 87 "lexer.xch"
	{ return PlogGrammar::parser::token::RPAREN; }
#line 322 "<stdout>"
yy39:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '*':	goto yy96;
	default:	goto yy40;
	}
yy40:
#line 96 "lexer.xch"
	{ return PlogGrammar::parser::token::MUL; }
#line 332 "<stdout>"
yy41:
	++YYCURSOR;
#line 90 "lexer.xch"
	{ return PlogGrammar::parser::token::ADD; }
#line 337 "<stdout>"
yy43:
	++YYCURSOR;
#line 82 "lexer.xch"
	{ return PlogGrammar::parser::token::COMMA; }
#line 342 "<stdout>"
yy45:
	++YYCURSOR;
#line 91 "lexer.xch"
	{ return PlogGrammar::parser::token::SUB; }
#line 347 "<stdout>"
yy47:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '.':	goto yy98;
	default:	goto yy48;
	}
yy48:
#line 79 "lexer.xch"
	{ return PlogGrammar::parser::token::DOT; }
#line 357 "<stdout>"
yy49:
	++YYCURSOR;
#line 105 "lexer.xch"
	{ return PlogGrammar::parser::token::SLASH; }
#line 362 "<stdout>"
yy51:
	++YYCURSOR;
yy52:
#line 76 "lexer.xch"
	{ value.num = integer(); return PlogGrammar::parser::token::NUMBER; }
#line 368 "<stdout>"
yy53:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy53;
	default:	goto yy52;
	}
yy55:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '-':	goto yy100;
	default:	goto yy56;
	}
yy56:
#line 80 "lexer.xch"
	{ return PlogGrammar::parser::token::COLON; }
#line 395 "<stdout>"
yy57:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '=':	goto yy102;
	case '>':	goto yy104;
	default:	goto yy58;
	}
yy58:
#line 98 "lexer.xch"
	{ return PlogGrammar::parser::token::LT; }
#line 406 "<stdout>"
yy59:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '=':	goto yy106;
	default:	goto yy60;
	}
yy60:
#line 104 "lexer.xch"
	{ return PlogGrammar::parser::token::EQ; }
#line 416 "<stdout>"
yy61:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '=':	goto yy108;
	default:	goto yy62;
	}
yy62:
#line 97 "lexer.xch"
	{ return PlogGrammar::parser::token::GT; }
#line 426 "<stdout>"
yy63:
	++YYCURSOR;
#line 106 "lexer.xch"
	{ return PlogGrammar::parser::token::QUESTION; }
#line 431 "<stdout>"
yy65:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '\'':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case '_':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy65;
	default:	goto yy67;
	}
yy67:
#line 77 "lexer.xch"
	{ value.str = String::toRep(string()); return PlogGrammar::parser::token::VARIABLE; }
#line 506 "<stdout>"
yy68:
	++YYCURSOR;
#line 84 "lexer.xch"
	{ return PlogGrammar::parser::token::LBRACK; }
#line 511 "<stdout>"
yy70:
	++YYCURSOR;
#line 95 "lexer.xch"
	{ return PlogGrammar::parser::token::MOD; }
#line 516 "<stdout>"
yy72:
	++YYCURSOR;
#line 85 "lexer.xch"
	{ return PlogGrammar::parser::token::RBRACK; }
#line 521 "<stdout>"
yy74:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case 't':	goto yy110;
	default:	goto yy77;
	}
yy75:
#line 75 "lexer.xch"
	{ value.str = String::toRep(string()); return PlogGrammar::parser::token::IDENTIFIER; }
#line 531 "<stdout>"
yy76:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy77:
	switch (yych) {
	case '\'':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case '_':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy76;
	default:	goto yy75;
	}
yy78:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'o':	goto yy111;
	default:	goto yy77;
	}
yy79:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'o':	goto yy112;
	case 't':	goto yy113;
	default:	goto yy77;
	}
yy80:
	++YYCURSOR;
#line 88 "lexer.xch"
	{ return PlogGrammar::parser::token::LBRACE; }
#line 621 "<stdout>"
yy82:
	++YYCURSOR;
#line 83 "lexer.xch"
	{ return PlogGrammar::parser::token::VBAR; }
#line 626 "<stdout>"
yy84:
	++YYCURSOR;
#line 89 "lexer.xch"
	{ return PlogGrammar::parser::token::RBRACE; }
#line 631 "<stdout>"
yy86:
	++YYCURSOR;
#line 102 "lexer.xch"
	{ return PlogGrammar::parser::token::NEQ; }
#line 636 "<stdout>"
yy88:
	++YYCURSOR;
	YYSETCONDITION(yyccomment);
	continue;
yy90:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy91:
	switch (yych) {
	case '\'':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case '_':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy90;
	default:	goto yy92;
	}
yy92:
#line 70 "lexer.xch"
	{ return PlogGrammar::parser::token::SORT_NAME; }
#line 716 "<stdout>"
yy93:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'o':	goto yy114;
	default:	goto yy91;
	}
yy94:
	++YYCURSOR;
	YYSETCONDITION(yycblockcomment);
#line 107 "lexer.xch"
	{ bc++; continue; }
#line 728 "<stdout>"
yy96:
	++YYCURSOR;
#line 92 "lexer.xch"
	{ return PlogGrammar::parser::token::POW; }
#line 733 "<stdout>"
yy98:
	++YYCURSOR;
#line 78 "lexer.xch"
	{ return PlogGrammar::parser::token::DOTS; }
#line 738 "<stdout>"
yy100:
	++YYCURSOR;
#line 81 "lexer.xch"
	{ return PlogGrammar::parser::token::IF; }
#line 743 "<stdout>"
yy102:
	++YYCURSOR;
#line 100 "lexer.xch"
	{ return PlogGrammar::parser::token::LEQ; }
#line 748 "<stdout>"
yy104:
	++YYCURSOR;
#line 103 "lexer.xch"
	{ return PlogGrammar::parser::token::NEQ; }
#line 753 "<stdout>"
yy106:
	++YYCURSOR;
#line 101 "lexer.xch"
	{ return PlogGrammar::parser::token::EQ; }
#line 758 "<stdout>"
yy108:
	++YYCURSOR;
#line 99 "lexer.xch"
	{ return PlogGrammar::parser::token::GEQ; }
#line 763 "<stdout>"
yy110:
	yych = *++YYCURSOR;
	switch (yych) {
	case 't':	goto yy115;
	default:	goto yy77;
	}
yy111:
	yych = *++YYCURSOR;
	switch (yych) {
	case 't':	goto yy116;
	default:	goto yy77;
	}
yy112:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'r':	goto yy118;
	default:	goto yy77;
	}
yy113:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':	goto yy119;
	default:	goto yy77;
	}
yy114:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'n':	goto yy120;
	default:	goto yy91;
	}
yy115:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'r':	goto yy121;
	default:	goto yy77;
	}
yy116:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '\'':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case '_':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy76;
	default:	goto yy117;
	}
yy117:
#line 71 "lexer.xch"
	{ value.str = String::toRep(not_); return PlogGrammar::parser::token::NOT; }
#line 872 "<stdout>"
yy118:
	yych = *++YYCURSOR;
	switch (yych) {
	case 't':	goto yy122;
	default:	goto yy77;
	}
yy119:
	yych = *++YYCURSOR;
	switch (yych) {
	case 't':	goto yy123;
	default:	goto yy77;
	}
yy120:
	yych = *++YYCURSOR;
	switch (yych) {
	case 's':	goto yy124;
	default:	goto yy91;
	}
yy121:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'i':	goto yy125;
	default:	goto yy77;
	}
yy122:
	yych = *++YYCURSOR;
	switch (yych) {
	case 's':	goto yy126;
	default:	goto yy77;
	}
yy123:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'e':	goto yy128;
	default:	goto yy77;
	}
yy124:
	yych = *++YYCURSOR;
	switch (yych) {
	case 't':	goto yy129;
	default:	goto yy91;
	}
yy125:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'b':	goto yy131;
	default:	goto yy77;
	}
yy126:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '\'':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case '_':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy76;
	default:	goto yy127;
	}
yy127:
#line 72 "lexer.xch"
	{return PlogGrammar::parser::token::SORTDEFKEYWORD; }
#line 993 "<stdout>"
yy128:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'm':	goto yy132;
	default:	goto yy77;
	}
yy129:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '\'':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case '_':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy90;
	default:	goto yy130;
	}
yy130:
#line 69 "lexer.xch"
	{ return PlogGrammar::parser::token::CONST; }
#line 1072 "<stdout>"
yy131:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'u':	goto yy133;
	default:	goto yy77;
	}
yy132:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'e':	goto yy134;
	default:	goto yy77;
	}
yy133:
	yych = *++YYCURSOR;
	switch (yych) {
	case 't':	goto yy135;
	default:	goto yy77;
	}
yy134:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'n':	goto yy136;
	default:	goto yy77;
	}
yy135:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'e':	goto yy137;
	default:	goto yy77;
	}
yy136:
	yych = *++YYCURSOR;
	switch (yych) {
	case 't':	goto yy138;
	default:	goto yy77;
	}
yy137:
	yych = *++YYCURSOR;
	switch (yych) {
	case 's':	goto yy139;
	default:	goto yy77;
	}
yy138:
	yych = *++YYCURSOR;
	switch (yych) {
	case 's':	goto yy141;
	default:	goto yy77;
	}
yy139:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '\'':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case '_':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy76;
	default:	goto yy140;
	}
yy140:
#line 73 "lexer.xch"
	{ return PlogGrammar::parser::token:: ATTDEFKEYWORD; }
#line 1193 "<stdout>"
yy141:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '\'':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case '_':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy76;
	default:	goto yy142;
	}
yy142:
#line 74 "lexer.xch"
	{ return PlogGrammar::parser::token:: STMTDEFKEYWORD; }
#line 1266 "<stdout>"
}
#line 132 "lexer.xch"

    }
    assert(false);
    return 0;
}

#undef YYCTYPE
#undef YYCURSOR
#undef YYLIMIT
#undef YYMARKER
#undef YYFILL
#undef YYCTXMARKER
#undef YYGETCONDITION
#undef YYSETCONDITION
