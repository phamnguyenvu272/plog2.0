//
// Created by iensen on 9/16/16.
//

#ifndef PLOG_STATEMENT_H_H
#define PLOG_STATEMENT_H_H

#include <gringo/printable.hh>
#include <gringo/locatable.hh>
#include <plog/literal.h>
#include <gringo/input/types.hh>
#include <gringo/input/literals.hh>
#include "types.h"

#include<gringo/input/literals.hh>
#include<gringo/input/programbuilder.hh>
#include<gringo/input/aggregates.hh>
#include<clingo.hh>

enum class StatementType { RULE, PR_ATOM, QUERY};
using Gringo::Input::ToGroundArg;
using UGLit = std::unique_ptr<Gringo::Input::Literal>;
using Gringo::Input::UHeadAggr ;
using UGStm = Gringo::Input::UStm ;
using Gringo::Input::UBodyAggrVec ;
using Gringo::Input::UBodyAggr;

struct Statement : Gringo::Printable, Gringo::Locatable {
    Statement(ULit &&query);
    Statement(ULit &&head, ULitVec &&body);
    Statement(ULit &&head, ULitVec &&body,UProb && prob);

    virtual void print(std::ostream &out) const;
    virtual void check(Logger &log) const;
    virtual void replace(Defines &dx);
    // this should ground the statement and store the result in stms (collection of gringo statements!)
    virtual void toGround(ToGroundArg &x, UStmVec &stms) const;
    virtual ~Statement();
    std::vector<Clingo::AST::Statement> toGringoAST(const UAttDeclVec & attdecls, const USortDefVec &sortDefVec);
    StatementType  getType();

private:
    Clingo::AST::BodyLiteral  gringobodyelast(ULit &lit);
    std::vector<Clingo::AST::BodyLiteral> gringobodyast(const UAttDeclVec & attdecls, const USortDefVec &sortDefVec);
    std::pair<Gringo::UTerm,bool> term(ULit & lit);

    std::unordered_set<std::string> getVariables();
    std::unordered_set<std::string> getVariables(const UTerm &term);

    std::vector<Clingo::AST::Statement> prAtomToGringoAST(const UAttDeclVec & attdecls, const USortDefVec &sortDefVec);
    std::vector<Clingo::AST::Statement>queryToGringoAST();
    std::vector<Clingo::AST::Statement> ruleToGringoAST(const UAttDeclVec & attdecls, const USortDefVec &sortDefVec);
    std::string int_to_str(int n);
    static int rule_id;
    ULit     head_;
    ULitVec  body_;
    UProb probability_;
    StatementType type_;
    std::vector<Clingo::AST::BodyLiteral> getSortAtoms(const ULit &lit,const USortDefVec &sortDefVec,const UAttDeclVec & attdecls);
    std::vector<Clingo::AST::BodyLiteral> getSortAtoms(const USortDefVec &sortDefVec,const UAttDeclVec & attdecl);
    static  std::vector<String> findArgSorts(String attName, const UAttDeclVec & attdecls);
    Clingo::AST::Term make_external_term();


public:
    static Clingo::AST::BodyLiteral make_body_lit(String name, std::vector<Clingo::AST::Term> args);
    static Clingo::AST::Literal make_lit(String name, std::vector<Clingo::AST::Term> args);

};

#endif //PLOG_STATEMENT_H_H
