/** \file
 *  This C header file was generated by $ANTLR version 3.3 Nov 30, 2010 12:45:30
 *
 *     -  From the grammar source file : /home/wingated/projects/sm/parser/matlab.g
 *     -                            On : 2011-09-01 16:55:31
 *     -                 for the lexer : matlabLexerLexer *
 * Editing it, at least manually, is not wise. 
 *
 * C language generator and runtime by Jim Idle, jimi|hereisanat|idle|dotgoeshere|ws.
 *
 *
 * The lexer matlabLexer has the callable functions (rules) shown below,
 * which will invoke the code for the associated rule in the source grammar
 * assuming that the input stream is pointing to a token/text stream that could begin
 * this rule.
 * 
 * For instance if you call the first (topmost) rule in a parser grammar, you will
 * get the results of a full parse, but calling a rule half way through the grammar will
 * allow you to pass part of a full token stream to the parser, such as for syntax checking
 * in editors and so on.
 *
 * The parser entry points are called indirectly (by function pointer to function) via
 * a parser context typedef pmatlabLexer, which is returned from a call to matlabLexerNew().
 *
 * As this is a generated lexer, it is unlikely you will call it 'manually'. However
 * the methods are provided anyway.
 * * The methods in pmatlabLexer are  as follows:
 *
 *  -  void      pmatlabLexer->BREAK(pmatlabLexer)
 *  -  void      pmatlabLexer->CASE(pmatlabLexer)
 *  -  void      pmatlabLexer->CATCH(pmatlabLexer)
 *  -  void      pmatlabLexer->CONTINUE(pmatlabLexer)
 *  -  void      pmatlabLexer->ELSE(pmatlabLexer)
 *  -  void      pmatlabLexer->ELSEIF(pmatlabLexer)
 *  -  void      pmatlabLexer->END(pmatlabLexer)
 *  -  void      pmatlabLexer->FOR(pmatlabLexer)
 *  -  void      pmatlabLexer->FUNCTION(pmatlabLexer)
 *  -  void      pmatlabLexer->GLOBAL(pmatlabLexer)
 *  -  void      pmatlabLexer->IF(pmatlabLexer)
 *  -  void      pmatlabLexer->OTHERWISE(pmatlabLexer)
 *  -  void      pmatlabLexer->PERSISTENT(pmatlabLexer)
 *  -  void      pmatlabLexer->RETURNS(pmatlabLexer)
 *  -  void      pmatlabLexer->SWITCH(pmatlabLexer)
 *  -  void      pmatlabLexer->TRY(pmatlabLexer)
 *  -  void      pmatlabLexer->VARARGIN(pmatlabLexer)
 *  -  void      pmatlabLexer->WHILE(pmatlabLexer)
 *  -  void      pmatlabLexer->CLEAR(pmatlabLexer)
 *  -  void      pmatlabLexer->ENDS(pmatlabLexer)
 *  -  void      pmatlabLexer->DOUBLE_EQ(pmatlabLexer)
 *  -  void      pmatlabLexer->LOG_OR(pmatlabLexer)
 *  -  void      pmatlabLexer->LOG_AND(pmatlabLexer)
 *  -  void      pmatlabLexer->LSTE(pmatlabLexer)
 *  -  void      pmatlabLexer->GRTE(pmatlabLexer)
 *  -  void      pmatlabLexer->NEQ(pmatlabLexer)
 *  -  void      pmatlabLexer->EL_TIMES(pmatlabLexer)
 *  -  void      pmatlabLexer->EL_LEFTDIV(pmatlabLexer)
 *  -  void      pmatlabLexer->EL_RIGHTDIV(pmatlabLexer)
 *  -  void      pmatlabLexer->EL_EXP(pmatlabLexer)
 *  -  void      pmatlabLexer->EL_CCT(pmatlabLexer)
 *  -  void      pmatlabLexer->EQ(pmatlabLexer)
 *  -  void      pmatlabLexer->BIN_OR(pmatlabLexer)
 *  -  void      pmatlabLexer->BIN_AND(pmatlabLexer)
 *  -  void      pmatlabLexer->LST(pmatlabLexer)
 *  -  void      pmatlabLexer->GRT(pmatlabLexer)
 *  -  void      pmatlabLexer->COLON(pmatlabLexer)
 *  -  void      pmatlabLexer->PLUS(pmatlabLexer)
 *  -  void      pmatlabLexer->MINUS(pmatlabLexer)
 *  -  void      pmatlabLexer->NEG(pmatlabLexer)
 *  -  void      pmatlabLexer->TIMES(pmatlabLexer)
 *  -  void      pmatlabLexer->LEFTDIV(pmatlabLexer)
 *  -  void      pmatlabLexer->RIGHTDIV(pmatlabLexer)
 *  -  void      pmatlabLexer->EXP(pmatlabLexer)
 *  -  void      pmatlabLexer->CCT(pmatlabLexer)
 *  -  void      pmatlabLexer->SEMI(pmatlabLexer)
 *  -  void      pmatlabLexer->LPAREN(pmatlabLexer)
 *  -  void      pmatlabLexer->RPAREN(pmatlabLexer)
 *  -  void      pmatlabLexer->LBRACE(pmatlabLexer)
 *  -  void      pmatlabLexer->RBRACE(pmatlabLexer)
 *  -  void      pmatlabLexer->LSBRACE(pmatlabLexer)
 *  -  void      pmatlabLexer->RSBRACE(pmatlabLexer)
 *  -  void      pmatlabLexer->AT(pmatlabLexer)
 *  -  void      pmatlabLexer->DOT(pmatlabLexer)
 *  -  void      pmatlabLexer->COMMA(pmatlabLexer)
 *  -  void      pmatlabLexer->NL(pmatlabLexer)
 *  -  void      pmatlabLexer->LINECOMMENT(pmatlabLexer)
 *  -  void      pmatlabLexer->THREEDOTS(pmatlabLexer)
 *  -  void      pmatlabLexer->ID(pmatlabLexer)
 *  -  void      pmatlabLexer->INT(pmatlabLexer)
 *  -  void      pmatlabLexer->FLOAT(pmatlabLexer)
 *  -  void      pmatlabLexer->STRING(pmatlabLexer)
 *  -  void      pmatlabLexer->WS(pmatlabLexer)
 *  -  void      pmatlabLexer->EXPONENT(pmatlabLexer)
 *  -  void      pmatlabLexer->HEX_DIGIT(pmatlabLexer)
 *  -  void      pmatlabLexer->ESC_SEQ(pmatlabLexer)
 *  -  void      pmatlabLexer->OCTAL_ESC(pmatlabLexer)
 *  -  void      pmatlabLexer->UNICODE_ESC(pmatlabLexer)
 *  -  void      pmatlabLexer->Tokens(pmatlabLexer)
 *
 * The return type for any particular rule is of course determined by the source
 * grammar file.
 */
// [The "BSD licence"]
// Copyright (c) 2005-2009 Jim Idle, Temporal Wave LLC
// http://www.temporal-wave.com
// http://www.linkedin.com/in/jimidle
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
// 3. The name of the author may not be used to endorse or promote products
//    derived from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
// OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
// NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
// THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef	_matlabLexer_H
#define _matlabLexer_H
/* =============================================================================
 * Standard antlr3 C runtime definitions
 */
#include    <antlr3.h>

/* End of standard antlr 3 runtime definitions
 * =============================================================================
 */
 
#ifdef __cplusplus
extern "C" {
#endif

// Forward declare the context typedef so that we can use it before it is
// properly defined. Delegators and delegates (from import statements) are
// interdependent and their context structures contain pointers to each other
// C only allows such things to be declared if you pre-declare the typedef.
//
typedef struct matlabLexer_Ctx_struct matlabLexer, * pmatlabLexer;



#ifdef	ANTLR3_WINDOWS
// Disable: Unreferenced parameter,							- Rules with parameters that are not used
//          constant conditional,							- ANTLR realizes that a prediction is always true (synpred usually)
//          initialized but unused variable					- tree rewrite variables declared but not needed
//          Unreferenced local variable						- lexer rule declares but does not always use _type
//          potentially unitialized variable used			- retval always returned from a rule 
//			unreferenced local function has been removed	- susually getTokenNames or freeScope, they can go without warnigns
//
// These are only really displayed at warning level /W4 but that is the code ideal I am aiming at
// and the codegen must generate some of these warnings by necessity, apart from 4100, which is
// usually generated when a parser rule is given a parameter that it does not use. Mostly though
// this is a matter of orthogonality hence I disable that one.
//
#pragma warning( disable : 4100 )
#pragma warning( disable : 4101 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4505 )
#pragma warning( disable : 4701 )
#endif

/** Context tracking structure for matlabLexer
 */
struct matlabLexer_Ctx_struct
{
    /** Built in ANTLR3 context tracker contains all the generic elements
     *  required for context tracking.
     */
    pANTLR3_LEXER    pLexer;


     void (*mBREAK)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mCASE)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mCATCH)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mCONTINUE)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mELSE)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mELSEIF)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mEND)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mFOR)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mFUNCTION)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mGLOBAL)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mIF)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mOTHERWISE)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mPERSISTENT)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mRETURNS)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mSWITCH)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mTRY)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mVARARGIN)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mWHILE)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mCLEAR)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mENDS)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mDOUBLE_EQ)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mLOG_OR)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mLOG_AND)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mLSTE)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mGRTE)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mNEQ)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mEL_TIMES)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mEL_LEFTDIV)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mEL_RIGHTDIV)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mEL_EXP)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mEL_CCT)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mEQ)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mBIN_OR)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mBIN_AND)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mLST)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mGRT)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mCOLON)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mPLUS)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mMINUS)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mNEG)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mTIMES)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mLEFTDIV)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mRIGHTDIV)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mEXP)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mCCT)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mSEMI)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mLPAREN)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mRPAREN)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mLBRACE)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mRBRACE)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mLSBRACE)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mRSBRACE)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mAT)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mDOT)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mCOMMA)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mNL)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mLINECOMMENT)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mTHREEDOTS)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mID)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mINT)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mFLOAT)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mSTRING)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mWS)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mEXPONENT)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mHEX_DIGIT)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mESC_SEQ)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mOCTAL_ESC)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mUNICODE_ESC)	(struct matlabLexer_Ctx_struct * ctx);
     void (*mTokens)	(struct matlabLexer_Ctx_struct * ctx);
    const char * (*getGrammarFileName)();
    void            (*reset)  (struct matlabLexer_Ctx_struct * ctx);
    void	    (*free)   (struct matlabLexer_Ctx_struct * ctx);
        
};

// Function protoypes for the constructor functions that external translation units
// such as delegators and delegates may wish to call.
//
ANTLR3_API pmatlabLexer matlabLexerNew         (pANTLR3_INPUT_STREAM instream);
ANTLR3_API pmatlabLexer matlabLexerNewSSD      (pANTLR3_INPUT_STREAM instream, pANTLR3_RECOGNIZER_SHARED_STATE state);

/** Symbolic definitions of all the tokens that the lexer will work with.
 * \{
 *
 * Antlr will define EOF, but we can't use that as it it is too common in
 * in C header files and that would be confusing. There is no way to filter this out at the moment
 * so we just undef it here for now. That isn't the value we get back from C recognizers
 * anyway. We are looking for ANTLR3_TOKEN_EOF.
 */
#ifdef	EOF
#undef	EOF
#endif
#ifdef	Tokens
#undef	Tokens
#endif 
#define EOF      -1
#define PROGRAM      4
#define FUNCTION      5
#define FUNCTION_RETURN      6
#define PARAMETER_LIST      7
#define FUNCTION_PARAMETER_LIST      8
#define STATEMENT_LIST      9
#define EXPRESSION      10
#define EXPR_STMT      11
#define NULL_STMT      12
#define ASSIGN      13
#define APPLY      14
#define FIELDACCESS      15
#define DYNFIELDACCESS      16
#define CELLACCESS      17
#define MATRIX      18
#define VECTOR      19
#define CELL      20
#define CLEAR      21
#define LHS      22
#define RHS      23
#define ID_NODE      24
#define PARENS      25
#define COMMA      26
#define SEMI      27
#define ID      28
#define END      29
#define EQ      30
#define LSBRACE      31
#define RSBRACE      32
#define LPAREN      33
#define RPAREN      34
#define IF      35
#define ELSEIF      36
#define ELSE      37
#define FOR      38
#define WHILE      39
#define SWITCH      40
#define CASE      41
#define OTHERWISE      42
#define TRY      43
#define CATCH      44
#define RETURNS      45
#define BREAK      46
#define CONTINUE      47
#define GLOBAL      48
#define PERSISTENT      49
#define NEQ      50
#define DOUBLE_EQ      51
#define GRTE      52
#define GRT      53
#define LSTE      54
#define LST      55
#define PLUS      56
#define MINUS      57
#define LEFTDIV      58
#define RIGHTDIV      59
#define TIMES      60
#define EL_LEFTDIV      61
#define EL_RIGHTDIV      62
#define EL_TIMES      63
#define EXP      64
#define EL_EXP      65
#define CCT      66
#define EL_CCT      67
#define NEG      68
#define LOG_OR      69
#define LOG_AND      70
#define BIN_OR      71
#define BIN_AND      72
#define COLON      73
#define INT      74
#define FLOAT      75
#define STRING      76
#define AT      77
#define DOT      78
#define LBRACE      79
#define RBRACE      80
#define VARARGIN      81
#define ENDS      82
#define NL      83
#define LINECOMMENT      84
#define THREEDOTS      85
#define EXPONENT      86
#define ESC_SEQ      87
#define WS      88
#define HEX_DIGIT      89
#define UNICODE_ESC      90
#define OCTAL_ESC      91
#ifdef	EOF
#undef	EOF
#define	EOF	ANTLR3_TOKEN_EOF
#endif

#ifndef TOKENSOURCE
#define TOKENSOURCE(lxr) lxr->pLexer->rec->state->tokSource
#endif

/* End of token definitions for matlabLexer
 * =============================================================================
 */
/** \} */

#ifdef __cplusplus
}
#endif

#endif

/* END - Note:Keep extra line feed to satisfy UNIX systems */
