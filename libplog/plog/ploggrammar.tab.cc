// A Bison parser, made by GNU Bison 3.0.4.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015 Free Software Foundation, Inc.

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

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// Take the name prefix into account.
#define yylex   PlogGrammar_lex

// First part of user declarations.
#line 47 "ploggrammar.yy" // lalr1.cc:404


#include "plogparser.hh"
#include "programbuilder.hh"
#include <climits>

#define BUILDER (lexer->builder())
#define LOGGER (lexer->logger())
#define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do {                                                               \
        if (N) {                                                       \
            (Current).beginFilename = YYRHSLOC (Rhs, 1).beginFilename; \
            (Current).beginLine     = YYRHSLOC (Rhs, 1).beginLine;     \
            (Current).beginColumn   = YYRHSLOC (Rhs, 1).beginColumn;   \
            (Current).endFilename   = YYRHSLOC (Rhs, N).endFilename;   \
            (Current).endLine       = YYRHSLOC (Rhs, N).endLine;       \
            (Current).endColumn     = YYRHSLOC (Rhs, N).endColumn;     \
        }                                                              \
        else {                                                         \
            (Current).beginFilename = YYRHSLOC (Rhs, 0).endFilename;   \
            (Current).beginLine     = YYRHSLOC (Rhs, 0).endLine;       \
            (Current).beginColumn   = YYRHSLOC (Rhs, 0).endColumn;     \
            (Current).endFilename   = YYRHSLOC (Rhs, 0).endFilename;   \
            (Current).endLine       = YYRHSLOC (Rhs, 0).endLine;       \
            (Current).endColumn     = YYRHSLOC (Rhs, 0).endColumn;     \
        }                                                              \
    }                                                                  \
    while (false)

int PlogGrammar_lex(void *value, Gringo::Location* loc, PlogParser *lexer) {
    return lexer->lex(value, *loc);
}


#line 73 "ploggrammar.tab.cc" // lalr1.cc:404

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

#include "ploggrammar.tab.hh"

// User implementation prologue.

#line 87 "ploggrammar.tab.cc" // lalr1.cc:412
// Unqualified %code blocks.
#line 82 "ploggrammar.yy" // lalr1.cc:413


void PlogGrammar::parser::error(DefaultLocation const &l, std::string const &msg) {
    lexer->parseError(l, msg);
}


#line 97 "ploggrammar.tab.cc" // lalr1.cc:413


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (/*CONSTCOND*/ false)
# endif


// Suppress unused-variable warnings by "using" E.
#define YYUSE(E) ((void) (E))

// Enable debugging if requested.
#if PLOGGRAMMAR_DEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << std::endl;                  \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yystack_print_ ();                \
  } while (false)

#else // !PLOGGRAMMAR_DEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE(Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void>(0)
# define YY_STACK_PRINT()                static_cast<void>(0)

#endif // !PLOGGRAMMAR_DEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

#line 19 "ploggrammar.yy" // lalr1.cc:479
namespace PlogGrammar {
#line 183 "ploggrammar.tab.cc" // lalr1.cc:479

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr = "";
        char const *yyp = yystr;

        for (;;)
          switch (*++yyp)
            {
            case '\'':
            case ',':
              goto do_not_strip_quotes;

            case '\\':
              if (*++yyp != '\\')
                goto do_not_strip_quotes;
              // Fall through.
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }


  /// Build a parser object.
  parser::parser (PlogParser *lexer_yyarg)
    :
#if PLOGGRAMMAR_DEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      lexer (lexer_yyarg)
  {}

  parser::~parser ()
  {}


  /*---------------.
  | Symbol types.  |
  `---------------*/

  inline
  parser::syntax_error::syntax_error (const location_type& l, const std::string& m)
    : std::runtime_error (m)
    , location (l)
  {}

  // basic_symbol.
  template <typename Base>
  inline
  parser::basic_symbol<Base>::basic_symbol ()
    : value ()
  {}

  template <typename Base>
  inline
  parser::basic_symbol<Base>::basic_symbol (const basic_symbol& other)
    : Base (other)
    , value ()
    , location (other.location)
  {
    value = other.value;
  }


  template <typename Base>
  inline
  parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const semantic_type& v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}


  /// Constructor for valueless symbols.
  template <typename Base>
  inline
  parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const location_type& l)
    : Base (t)
    , value ()
    , location (l)
  {}

  template <typename Base>
  inline
  parser::basic_symbol<Base>::~basic_symbol ()
  {
    clear ();
  }

  template <typename Base>
  inline
  void
  parser::basic_symbol<Base>::clear ()
  {
    Base::clear ();
  }

  template <typename Base>
  inline
  bool
  parser::basic_symbol<Base>::empty () const
  {
    return Base::type_get () == empty_symbol;
  }

  template <typename Base>
  inline
  void
  parser::basic_symbol<Base>::move (basic_symbol& s)
  {
    super_type::move(s);
    value = s.value;
    location = s.location;
  }

  // by_type.
  inline
  parser::by_type::by_type ()
    : type (empty_symbol)
  {}

  inline
  parser::by_type::by_type (const by_type& other)
    : type (other.type)
  {}

  inline
  parser::by_type::by_type (token_type t)
    : type (yytranslate_ (t))
  {}

  inline
  void
  parser::by_type::clear ()
  {
    type = empty_symbol;
  }

  inline
  void
  parser::by_type::move (by_type& that)
  {
    type = that.type;
    that.clear ();
  }

  inline
  int
  parser::by_type::type_get () const
  {
    return type;
  }


  // by_state.
  inline
  parser::by_state::by_state ()
    : state (empty_state)
  {}

  inline
  parser::by_state::by_state (const by_state& other)
    : state (other.state)
  {}

  inline
  void
  parser::by_state::clear ()
  {
    state = empty_state;
  }

  inline
  void
  parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  inline
  parser::by_state::by_state (state_type s)
    : state (s)
  {}

  inline
  parser::symbol_number_type
  parser::by_state::type_get () const
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

  inline
  parser::stack_symbol_type::stack_symbol_type ()
  {}


  inline
  parser::stack_symbol_type::stack_symbol_type (state_type s, symbol_type& that)
    : super_type (s, that.location)
  {
    value = that.value;
    // that is emptied.
    that.type = empty_symbol;
  }

  inline
  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    value = that.value;
    location = that.location;
    return *this;
  }


  template <typename Base>
  inline
  void
  parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);

    // User destructor.
    YYUSE (yysym.type_get ());
  }

#if PLOGGRAMMAR_DEBUG
  template <typename Base>
  void
  parser::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " ("
        << yysym.location << ": ";
    YYUSE (yytype);
    yyo << ')';
  }
#endif

  inline
  void
  parser::yypush_ (const char* m, state_type s, symbol_type& sym)
  {
    stack_symbol_type t (s, sym);
    yypush_ (m, t);
  }

  inline
  void
  parser::yypush_ (const char* m, stack_symbol_type& s)
  {
    if (m)
      YY_SYMBOL_PRINT (m, s);
    yystack_.push (s);
  }

  inline
  void
  parser::yypop_ (unsigned int n)
  {
    yystack_.pop (n);
  }

#if PLOGGRAMMAR_DEBUG
  std::ostream&
  parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  parser::debug_level_type
  parser::debug_level () const
  {
    return yydebug_;
  }

  void
  parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // PLOGGRAMMAR_DEBUG

  inline parser::state_type
  parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  inline bool
  parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  inline bool
  parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  parser::parse ()
  {
    // State.
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

    // FIXME: This shoud be completely indented.  It is not yet to
    // avoid gratuitous conflicts when merging into the master branch.
    try
      {
    YYCDEBUG << "Starting parse" << std::endl;


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, yyla);

    // A new symbol was pushed on the stack.
  yynewstate:
    YYCDEBUG << "Entering state " << yystack_[0].state << std::endl;

    // Accept?
    if (yystack_[0].state == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    // Backup.
  yybackup:

    // Try to take a decision without lookahead.
    yyn = yypact_[yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token: ";
        try
          {
            yyla.type = yytranslate_ (yylex (&yyla.value, &yyla.location, lexer));
          }
        catch (const syntax_error& yyexc)
          {
            error (yyexc);
            goto yyerrlab1;
          }
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      goto yydefault;

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", yyn, yyla);
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_(yystack_[yylen].state, yyr1_[yyn]);
      /* If YYLEN is nonzero, implement the default value of the
         action: '$$ = $1'.  Otherwise, use the top of the stack.

         Otherwise, the following line sets YYLHS.VALUE to garbage.
         This behavior is undocumented and Bison users should not rely
         upon it.  */
      if (yylen)
        yylhs.value = yystack_[yylen - 1].value;
      else
        yylhs.value = yystack_[0].value;

      // Compute the default @$.
      {
        slice<stack_symbol_type, stack_type> slice (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, slice, yylen);
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
      try
        {
          switch (yyn)
            {
  case 43:
#line 276 "ploggrammar.yy" // lalr1.cc:859
    {  }
#line 663 "ploggrammar.tab.cc" // lalr1.cc:859
    break;

  case 44:
#line 277 "ploggrammar.yy" // lalr1.cc:859
    {  }
#line 669 "ploggrammar.tab.cc" // lalr1.cc:859
    break;

  case 45:
#line 278 "ploggrammar.yy" // lalr1.cc:859
    {  }
#line 675 "ploggrammar.tab.cc" // lalr1.cc:859
    break;

  case 46:
#line 279 "ploggrammar.yy" // lalr1.cc:859
    {  }
#line 681 "ploggrammar.tab.cc" // lalr1.cc:859
    break;

  case 47:
#line 280 "ploggrammar.yy" // lalr1.cc:859
    {  }
#line 687 "ploggrammar.tab.cc" // lalr1.cc:859
    break;

  case 48:
#line 284 "ploggrammar.yy" // lalr1.cc:859
    {  }
#line 693 "ploggrammar.tab.cc" // lalr1.cc:859
    break;

  case 49:
#line 285 "ploggrammar.yy" // lalr1.cc:859
    {  }
#line 699 "ploggrammar.tab.cc" // lalr1.cc:859
    break;

  case 50:
#line 289 "ploggrammar.yy" // lalr1.cc:859
    {  }
#line 705 "ploggrammar.tab.cc" // lalr1.cc:859
    break;

  case 51:
#line 290 "ploggrammar.yy" // lalr1.cc:859
    {  }
#line 711 "ploggrammar.tab.cc" // lalr1.cc:859
    break;

  case 52:
#line 291 "ploggrammar.yy" // lalr1.cc:859
    { }
#line 717 "ploggrammar.tab.cc" // lalr1.cc:859
    break;

  case 53:
#line 292 "ploggrammar.yy" // lalr1.cc:859
    {  }
#line 723 "ploggrammar.tab.cc" // lalr1.cc:859
    break;

  case 59:
#line 306 "ploggrammar.yy" // lalr1.cc:859
    {  }
#line 729 "ploggrammar.tab.cc" // lalr1.cc:859
    break;

  case 60:
#line 307 "ploggrammar.yy" // lalr1.cc:859
    {  }
#line 735 "ploggrammar.tab.cc" // lalr1.cc:859
    break;

  case 61:
#line 308 "ploggrammar.yy" // lalr1.cc:859
    {  }
#line 741 "ploggrammar.tab.cc" // lalr1.cc:859
    break;

  case 62:
#line 309 "ploggrammar.yy" // lalr1.cc:859
    {  }
#line 747 "ploggrammar.tab.cc" // lalr1.cc:859
    break;

  case 63:
#line 310 "ploggrammar.yy" // lalr1.cc:859
    {  }
#line 753 "ploggrammar.tab.cc" // lalr1.cc:859
    break;

  case 64:
#line 311 "ploggrammar.yy" // lalr1.cc:859
    {  }
#line 759 "ploggrammar.tab.cc" // lalr1.cc:859
    break;

  case 65:
#line 312 "ploggrammar.yy" // lalr1.cc:859
    {  }
#line 765 "ploggrammar.tab.cc" // lalr1.cc:859
    break;

  case 66:
#line 313 "ploggrammar.yy" // lalr1.cc:859
    {  }
#line 771 "ploggrammar.tab.cc" // lalr1.cc:859
    break;

  case 67:
#line 314 "ploggrammar.yy" // lalr1.cc:859
    {  }
#line 777 "ploggrammar.tab.cc" // lalr1.cc:859
    break;

  case 68:
#line 315 "ploggrammar.yy" // lalr1.cc:859
    {  }
#line 783 "ploggrammar.tab.cc" // lalr1.cc:859
    break;

  case 69:
#line 316 "ploggrammar.yy" // lalr1.cc:859
    {  }
#line 789 "ploggrammar.tab.cc" // lalr1.cc:859
    break;

  case 70:
#line 322 "ploggrammar.yy" // lalr1.cc:859
    {  }
#line 795 "ploggrammar.tab.cc" // lalr1.cc:859
    break;

  case 71:
#line 323 "ploggrammar.yy" // lalr1.cc:859
    {  }
#line 801 "ploggrammar.tab.cc" // lalr1.cc:859
    break;

  case 72:
#line 327 "ploggrammar.yy" // lalr1.cc:859
    {   }
#line 807 "ploggrammar.tab.cc" // lalr1.cc:859
    break;

  case 73:
#line 328 "ploggrammar.yy" // lalr1.cc:859
    {   }
#line 813 "ploggrammar.tab.cc" // lalr1.cc:859
    break;

  case 75:
#line 334 "ploggrammar.yy" // lalr1.cc:859
    {  }
#line 819 "ploggrammar.tab.cc" // lalr1.cc:859
    break;

  case 76:
#line 335 "ploggrammar.yy" // lalr1.cc:859
    {  }
#line 825 "ploggrammar.tab.cc" // lalr1.cc:859
    break;

  case 77:
#line 336 "ploggrammar.yy" // lalr1.cc:859
    {  }
#line 831 "ploggrammar.tab.cc" // lalr1.cc:859
    break;

  case 78:
#line 337 "ploggrammar.yy" // lalr1.cc:859
    {  }
#line 837 "ploggrammar.tab.cc" // lalr1.cc:859
    break;

  case 79:
#line 338 "ploggrammar.yy" // lalr1.cc:859
    {  }
#line 843 "ploggrammar.tab.cc" // lalr1.cc:859
    break;

  case 80:
#line 339 "ploggrammar.yy" // lalr1.cc:859
    {  }
#line 849 "ploggrammar.tab.cc" // lalr1.cc:859
    break;

  case 81:
#line 340 "ploggrammar.yy" // lalr1.cc:859
    {  }
#line 855 "ploggrammar.tab.cc" // lalr1.cc:859
    break;

  case 82:
#line 341 "ploggrammar.yy" // lalr1.cc:859
    {  }
#line 861 "ploggrammar.tab.cc" // lalr1.cc:859
    break;

  case 83:
#line 342 "ploggrammar.yy" // lalr1.cc:859
    {  }
#line 867 "ploggrammar.tab.cc" // lalr1.cc:859
    break;

  case 84:
#line 343 "ploggrammar.yy" // lalr1.cc:859
    {  }
#line 873 "ploggrammar.tab.cc" // lalr1.cc:859
    break;

  case 85:
#line 344 "ploggrammar.yy" // lalr1.cc:859
    {  }
#line 879 "ploggrammar.tab.cc" // lalr1.cc:859
    break;

  case 86:
#line 351 "ploggrammar.yy" // lalr1.cc:859
    {  }
#line 885 "ploggrammar.tab.cc" // lalr1.cc:859
    break;

  case 87:
#line 352 "ploggrammar.yy" // lalr1.cc:859
    {  }
#line 891 "ploggrammar.tab.cc" // lalr1.cc:859
    break;

  case 88:
#line 356 "ploggrammar.yy" // lalr1.cc:859
    {  }
#line 897 "ploggrammar.tab.cc" // lalr1.cc:859
    break;

  case 89:
#line 357 "ploggrammar.yy" // lalr1.cc:859
    {  }
#line 903 "ploggrammar.tab.cc" // lalr1.cc:859
    break;

  case 90:
#line 363 "ploggrammar.yy" // lalr1.cc:859
    {  }
#line 909 "ploggrammar.tab.cc" // lalr1.cc:859
    break;

  case 91:
#line 364 "ploggrammar.yy" // lalr1.cc:859
    {  }
#line 915 "ploggrammar.tab.cc" // lalr1.cc:859
    break;

  case 92:
#line 365 "ploggrammar.yy" // lalr1.cc:859
    {  }
#line 921 "ploggrammar.tab.cc" // lalr1.cc:859
    break;

  case 93:
#line 366 "ploggrammar.yy" // lalr1.cc:859
    {  }
#line 927 "ploggrammar.tab.cc" // lalr1.cc:859
    break;

  case 94:
#line 367 "ploggrammar.yy" // lalr1.cc:859
    {  }
#line 933 "ploggrammar.tab.cc" // lalr1.cc:859
    break;

  case 95:
#line 368 "ploggrammar.yy" // lalr1.cc:859
    {  }
#line 939 "ploggrammar.tab.cc" // lalr1.cc:859
    break;

  case 99:
#line 374 "ploggrammar.yy" // lalr1.cc:859
    { }
#line 945 "ploggrammar.tab.cc" // lalr1.cc:859
    break;


#line 949 "ploggrammar.tab.cc" // lalr1.cc:859
            default:
              break;
            }
        }
      catch (const syntax_error& yyexc)
        {
          error (yyexc);
          YYERROR;
        }
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, yylhs);
    }
    goto yynewstate;

  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yyla.location, yysyntax_error_ (yystack_[0].state, yyla));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:

    /* Pacify compilers like GCC when the user code never invokes
       YYERROR and the label yyerrorlab therefore never appears in user
       code.  */
    if (false)
      goto yyerrorlab;
    yyerror_range[1].location = yystack_[yylen - 1].location;
    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yyterror_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
                {
                  yyn = yytable_[yyn];
                  if (0 < yyn)
                    break;
                }
            }

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yyerror_range[1].location = yystack_[0].location;
          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = yyn;
      yypush_ ("Shifting", error_token);
    }
    goto yynewstate;

    // Accept.
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    // Abort.
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack"
                 << std::endl;
        // Do not try to display the values of the reclaimed symbols,
        // as their printer might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
  }

  void
  parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what());
  }

  // Generate an error message.
  std::string
  parser::yysyntax_error_ (state_type yystate, const symbol_type& yyla) const
  {
    // Number of reported tokens (one for the "unexpected", one per
    // "expected").
    size_t yycount = 0;
    // Its maximum.
    enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
    // Arguments of yyformat.
    char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];

    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state
         merging (from LALR or IELR) and default reductions corrupt the
         expected token list.  However, the list is correct for
         canonical LR with one exception: it will still contain any
         token that will not be accepted due to an error action in a
         later state.
    */
    if (!yyla.empty ())
      {
        int yytoken = yyla.type_get ();
        yyarg[yycount++] = yytname_[yytoken];
        int yyn = yypact_[yystate];
        if (!yy_pact_value_is_default_ (yyn))
          {
            /* Start YYX at -YYN if negative to avoid negative indexes in
               YYCHECK.  In other words, skip the first -YYN actions for
               this state because they are default actions.  */
            int yyxbegin = yyn < 0 ? -yyn : 0;
            // Stay within bounds of both yycheck and yytname.
            int yychecklim = yylast_ - yyn + 1;
            int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
            for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
              if (yycheck_[yyx + yyn] == yyx && yyx != yyterror_
                  && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
                {
                  if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                    {
                      yycount = 1;
                      break;
                    }
                  else
                    yyarg[yycount++] = yytname_[yyx];
                }
          }
      }

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
        YYCASE_(0, YY_("syntax error"));
        YYCASE_(1, YY_("syntax error, unexpected %s"));
        YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    size_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += yytnamerr_ (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const signed char parser::yypact_ninf_ = -120;

  const signed char parser::yytable_ninf_ = -59;

  const short int
  parser::yypact_[] =
  {
      17,    21,     6,  -120,  -120,  -120,   -33,  -120,  -120,    11,
      23,    19,    43,  -120,    44,    23,  -120,    54,    79,  -120,
      85,  -120,   108,    54,   133,   204,  -120,   140,    98,   108,
     108,  -120,    90,   105,  -120,   113,    97,   114,    20,  -120,
      65,  -120,  -120,   204,   204,  -120,  -120,   201,  -120,   170,
     118,  -120,   108,   140,    52,     8,  -120,  -120,   101,  -120,
    -120,    -2,    14,    26,    86,    68,   108,   108,   108,   108,
     108,   108,   108,  -120,    40,   106,   -33,   204,   204,  -120,
     126,   123,   222,    80,   204,   204,  -120,  -120,  -120,  -120,
    -120,   204,  -120,   204,   204,   204,   204,   204,  -120,   105,
     147,   130,    91,   121,  -120,   189,  -120,   189,   189,   140,
    -120,   108,   152,   155,  -120,   139,   107,    68,   105,   105,
      68,   107,   196,  -120,   109,   162,   224,   224,   172,   150,
    -120,    64,   204,  -120,   154,   224,    80,   224,   224,    80,
     161,   224,   108,  -120,  -120,  -120,   181,   166,  -120,   166,
      39,   105,  -120,  -120,  -120,   204,  -120,  -120,   184,   164,
    -120,   204,   205,  -120,   182,   145,   105,  -120,     7,  -120,
    -120,   177,   186,    15,   224,   204,  -120,   204,   214,  -120,
     220,   224,   224,   190,   192,   211,   206,  -120,   198,   208,
     221,  -120,   226,   223,  -120
  };

  const unsigned char
  parser::yydefact_[] =
  {
       7,     0,     0,     1,    12,    35,     0,     6,     8,     0,
       0,    10,    33,     5,     0,     0,    42,     0,     0,    11,
       0,    34,    58,     0,    40,    74,     3,    27,     0,    58,
      58,    69,    68,     9,     2,    57,     0,     0,    50,    41,
       0,    48,    49,    74,    74,    84,    85,    83,    96,     0,
       0,    18,    58,    27,     5,     0,    14,    15,    16,    17,
      19,     0,    37,     0,     0,    65,    58,    58,    58,    58,
      58,    58,    58,    47,     0,     0,     0,    74,    74,    43,
      57,    83,     0,    80,    74,    74,    94,    92,    90,    93,
      91,    74,    95,    74,    74,    74,    74,    74,   104,    70,
      72,     0,     0,     0,    31,    27,    13,    27,    27,    27,
      26,    58,     0,     0,    67,     0,    59,    61,    63,    64,
      62,    60,    74,    46,     0,     0,    53,    86,    88,     0,
      44,     0,    74,    82,     0,    98,    76,    78,    79,    77,
      75,    99,    58,    32,    23,    25,    27,    20,    21,    22,
       0,    24,    39,    36,    66,    74,   100,    56,     0,     0,
      57,    74,    51,    45,     0,    81,    71,    29,    30,    28,
     101,     0,     0,     0,    87,    74,    81,    74,     0,    54,
       0,    52,    97,     0,     0,     0,     0,   102,     0,     0,
       0,   103,     0,     0,    55
  };

  const short int
  parser::yypgoto_[] =
  {
    -120,  -120,    -6,  -120,  -120,  -120,  -120,  -120,  -120,   -41,
    -120,  -120,  -120,  -120,  -120,  -120,  -120,   244,  -120,  -120,
    -120,   246,  -120,  -120,  -120,   -16,  -120,   -79,    32,  -120,
     197,   -38,  -120,   -82,  -120,  -119,  -120,  -120,   239
  };

  const short int
  parser::yydefgoto_[] =
  {
      -1,     1,    32,     2,     7,     8,     9,    11,    19,    55,
      56,    57,    58,   110,    59,   146,    60,    10,    12,    21,
      63,    17,    24,    39,    40,    48,    42,    74,    61,   100,
     101,    49,   128,   129,    97,    50,   157,   187,    26
  };

  const short int
  parser::yytable_[] =
  {
      14,   131,   134,   156,    67,    82,    83,    13,    41,     4,
       5,   111,   102,   105,   105,     5,     6,    -4,    38,    47,
     106,     3,    68,   -38,   122,    69,    70,    77,    16,   -38,
      18,   107,   107,    71,    72,   112,   170,    81,    81,   126,
     127,   113,    78,   108,   108,   105,   127,   135,   180,   122,
     164,    22,   123,   136,    33,   137,   138,   139,   140,   141,
     125,    64,    65,   107,   147,   103,   148,   149,   150,   169,
      38,    81,    81,   122,   104,   108,   163,    79,    81,    81,
      25,   173,    80,    20,    99,    81,    27,    81,    81,    81,
      81,    81,    67,    28,   127,    69,    70,   105,    99,   116,
     117,   118,   119,   120,   121,   168,   114,    93,    94,    62,
      68,    67,    66,    69,    70,   107,    47,   158,   159,    75,
     109,    71,    72,   174,   144,    73,    81,   108,    29,    68,
      98,    68,    69,    70,    69,    70,    76,   181,   130,   182,
      71,    72,    71,   151,    30,   132,   124,    31,    13,    47,
      35,    51,   175,   -58,   -51,    81,   142,   -51,    52,   143,
      29,   145,    53,   152,    36,    37,   153,   -58,   -58,    81,
     177,    81,   154,    13,   166,   -58,    30,    86,   -51,    31,
      54,   161,   160,   162,    87,    91,    88,   165,    93,    94,
     107,    89,    51,    90,    91,    92,    95,    93,    94,    52,
      51,    29,   171,    53,   172,    95,    96,    52,    77,    29,
     -50,    53,   175,   -50,   167,   176,    43,    30,   178,   179,
      31,    54,   183,    84,    43,    30,    85,   184,    31,    54,
     185,   186,    44,   188,   -50,    45,    13,    46,   155,   190,
      44,   189,   133,    45,    13,    46,    91,   191,    91,    93,
      94,    93,    94,    15,   192,   193,   194,    95,    96,    95,
      96,    23,    34,   115
  };

  const unsigned char
  parser::yycheck_[] =
  {
       6,    80,    84,   122,     6,    43,    44,    40,    24,     3,
       4,    13,    53,     6,     6,     4,    10,     0,    24,    25,
      12,     0,    24,     9,     9,    27,    28,     7,     5,    15,
      11,    24,    24,    35,    36,     9,   155,    43,    44,    77,
      78,    15,    22,    36,    36,     6,    84,    85,    33,     9,
     132,     7,    12,    91,    22,    93,    94,    95,    96,    97,
      76,    29,    30,    24,   105,    13,   107,   108,   109,    30,
      76,    77,    78,     9,    22,    36,    12,    12,    84,    85,
      26,   160,    17,    40,    52,    91,     7,    93,    94,    95,
      96,    97,     6,     8,   132,    27,    28,     6,    66,    67,
      68,    69,    70,    71,    72,   146,    20,    27,    28,    11,
      24,     6,    22,    27,    28,    24,   122,     8,     9,    22,
      19,    35,    36,   161,    33,    12,   132,    36,    20,    24,
      12,    24,    27,    28,    27,    28,    22,   175,    12,   177,
      35,    36,    35,   111,    36,    22,    40,    39,    40,   155,
      17,    11,     7,    13,     9,   161,     9,    12,    18,    29,
      20,    40,    22,    11,    31,    32,    11,    27,    28,   175,
      25,   177,    33,    40,   142,    35,    36,     7,    33,    39,
      40,     9,    20,    33,    14,    24,    16,    33,    27,    28,
      24,    21,    11,    23,    24,    25,    35,    27,    28,    18,
      11,    20,    18,    22,    40,    35,    36,    18,     7,    20,
       9,    22,     7,    12,    33,    33,    20,    36,    41,    33,
      39,    40,     8,    22,    20,    36,    25,     7,    39,    40,
      40,    39,    36,    22,    33,    39,    40,    41,    42,    41,
      36,    35,    20,    39,    40,    41,    24,    39,    24,    27,
      28,    27,    28,     9,    33,    29,    33,    35,    36,    35,
      36,    15,    23,    66
  };

  const unsigned char
  parser::yystos_[] =
  {
       0,    45,    47,     0,     3,     4,    10,    48,    49,    50,
      61,    51,    62,    40,    46,    61,     5,    65,    11,    52,
      40,    63,     7,    65,    66,    26,    82,     7,     8,    20,
      36,    39,    46,    72,    82,    17,    31,    32,    46,    67,
      68,    69,    70,    20,    36,    39,    41,    46,    69,    75,
      79,    11,    18,    22,    40,    53,    54,    55,    56,    58,
      60,    72,    11,    64,    72,    72,    22,     6,    24,    27,
      28,    35,    36,    12,    71,    22,    22,     7,    22,    12,
      17,    46,    75,    75,    22,    25,     7,    14,    16,    21,
      23,    24,    25,    27,    28,    35,    36,    78,    12,    72,
      73,    74,    53,    13,    22,     6,    12,    24,    36,    19,
      57,    13,     9,    15,    20,    74,    72,    72,    72,    72,
      72,    72,     9,    12,    40,    69,    75,    75,    76,    77,
      12,    71,    22,    20,    77,    75,    75,    75,    75,    75,
      75,    75,     9,    29,    33,    40,    59,    53,    53,    53,
      53,    72,    11,    11,    33,    42,    79,    80,     8,     9,
      20,     9,    33,    12,    77,    33,    72,    33,    53,    30,
      79,    18,    40,    71,    75,     7,    33,    25,    41,    33,
      33,    75,    75,     8,     7,    40,    39,    81,    22,    35,
      41,    39,    33,    29,    33
  };

  const unsigned char
  parser::yyr1_[] =
  {
       0,    44,    45,    45,    45,    46,    47,    47,    48,    49,
      50,    51,    51,    52,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    54,    55,    56,    56,    57,    58,
      59,    59,    60,    61,    62,    62,    63,    63,    64,    64,
      65,    66,    66,    67,    67,    67,    67,    67,    68,    68,
      69,    69,    69,    69,    70,    70,    71,    71,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      73,    73,    74,    74,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    76,    76,    77,    77,
      78,    78,    78,    78,    78,    78,    79,    79,    79,    79,
      80,    80,    67,    81,    82
  };

  const unsigned char
  parser::yyr2_[] =
  {
       0,     2,     5,     4,     0,     1,     2,     0,     1,     4,
       2,     2,     0,     4,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     2,     0,     3,     4,
       2,     0,     3,     2,     2,     0,     5,     3,     1,     3,
       2,     2,     0,     2,     3,     4,     3,     2,     1,     1,
       1,     4,     6,     3,     6,    13,     3,     0,     0,     3,
       3,     3,     3,     3,     3,     2,     4,     3,     1,     1,
       1,     3,     1,     0,     0,     3,     3,     3,     3,     3,
       2,     4,     3,     1,     1,     1,     1,     3,     1,     0,
       1,     1,     1,     1,     1,     1,     1,     6,     3,     3,
       1,     2,     8,     3,     3
  };



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const parser::yytname_[] =
  {
  "\"<EOF>\"", "error", "$undefined", "SORTDEFKEYWORD", "ATTDEFKEYWORD",
  "STMTDEFKEYWORD", "\"+\"", "\"=\"", "\":\"", "\",\"", "\"#const\"",
  "SORT_NAME", "\".\"", "\"..\"", "\">=\"", "\"->\"", "\">\"", "\":-\"",
  "\"{\"", "\"[\"", "\"|\"", "\"<=\"", "\"(\"", "\"<\"", "\"*\"", "\"!=\"",
  "\"?\"", "\"\\\\\"", "\"^\"", "\"}\"", "\"]\"", "\"random\"", "\"pr\"",
  "\")\"", "\";\"", "\"/\"", "\"-\"", "UBNOT", "UMINUS", "\"<NUMBER>\"",
  "\"<IDENTIFIER>\"", "\"<VARIABLE>\"", "\"not\"", "AND", "$accept",
  "program", "identifier", "directives", "directive", "const_decl",
  "sorts_sec", "sort_defs", "sort_def", "sort_expr", "numericRange",
  "identifierRange", "concatenation", "concat_elem", "functional_symbol",
  "sort_expr_list", "curly_brackets", "atts_sec", "att_defs", "att_def",
  "sort_name_list", "stmts_sec", "stmts", "stmt", "head", "atom",
  "random_atom", "body", "constterm", "consttermvec", "constargvec",
  "term", "ntermvec", "termvec", "cmp", "literal", "e_literal",
  "probability", "query", YY_NULLPTR
  };

#if PLOGGRAMMAR_DEBUG
  const unsigned short int
  parser::yyrline_[] =
  {
       0,   167,   167,   168,   168,   172,   181,   182,   185,   188,
     197,   200,   201,   204,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   220,   223,   226,   227,   230,   233,
     236,   237,   240,   247,   249,   250,   253,   254,   257,   258,
     265,   268,   269,   276,   277,   278,   279,   280,   284,   285,
     289,   290,   291,   292,   295,   296,   300,   301,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     322,   323,   327,   328,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   351,   352,   356,   357,
     363,   364,   365,   366,   367,   368,   371,   372,   373,   374,
     377,   378,   382,   385,   388
  };

  // Print the state stack on the debug stream.
  void
  parser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << i->state;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  parser::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):" << std::endl;
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // PLOGGRAMMAR_DEBUG

  // Symbol number corresponding to token number t.
  inline
  parser::token_number_type
  parser::yytranslate_ (int t)
  {
    static
    const token_number_type
    translate_table[] =
    {
     0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43
    };
    const unsigned int user_token_number_max_ = 298;
    const token_number_type undef_token_ = 2;

    if (static_cast<int>(t) <= yyeof_)
      return yyeof_;
    else if (static_cast<unsigned int> (t) <= user_token_number_max_)
      return translate_table[t];
    else
      return undef_token_;
  }

#line 19 "ploggrammar.yy" // lalr1.cc:1167
} // PlogGrammar
#line 1520 "ploggrammar.tab.cc" // lalr1.cc:1167
