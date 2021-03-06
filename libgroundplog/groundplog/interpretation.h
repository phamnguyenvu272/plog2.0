//
// Created by evgenii on 12/16/16.
//

#ifndef PLOG_INTERPRETATION_H
#define PLOG_INTERPRETATION_H

#include<vector>
#include<groundplog/program_types.h>
#include<limits>
#include <unordered_map>


using GroundPlog::ATTID ;
using GroundPlog::ValueRep ;
using GroundPlog::Lit_t;

const ValueRep UNDEFINED = std::numeric_limits<ValueRep>::max();
const ValueRep UNASSIGNED = std::numeric_limits<ValueRep>::max()-1;


namespace GroundPlog {
    class State;
    class Interpretation {

        friend class State;

        std::vector<ValueRep> values;
        std::vector<unsigned> level;
        std::vector<ATTID> trail;

        std::vector<std::vector<char>> imposVals;
        std::vector<std::pair<ATTID, ValueRep>> trailOnImposVals;
        std::vector<unsigned> levelOnImposVals;

        unsigned current_level = 0;
    public:
        void assign(ATTID attid, ValueRep val);

        ValueRep getVal(const ATTID attid) const;

        std::vector<ATTID> getAllAssignAtts() const;

        bool guarantees(const Lit_t &lit) const;


        bool guaranteesByNegativeAssignments(const Lit_t &lit);
        bool guaranteesByPositiveAssignments(const Lit_t &lit);
        bool guaranteedBefore(const Lit_t &lit, ATTID attid, ValueRep val, bool is_impossible);

        bool falsifies(const Lit_t &lit) const;

        bool decides(const Lit_t &lit) const;

        bool guarantees(const std::vector<Lit_t> &body) const;

     //   bool weakly_satisfies(const std::vector<Lit_t> &body,
     //                         const std::unordered_map<ATTID, std::unordered_set<ValueRep>> &map) const;

        bool weakly_satisfies(const std::vector<Lit_t> &body,
                                         const std::vector<std::vector<char>> &pvmap) const;


        bool falsifies(const std::vector<Lit_t> &body) const;

        bool decides(const std::vector<Lit_t> &body) const;

        void make_impossible(ATTID attid, ValueRep val);

        bool is_impossible_val(ATTID attid, ValueRep val) const;

        void increaseLevel();

        void backtrackLastLevel();

        Interpretation(const GroundPlog::Program&);

    private:
        void grow(unsigned index);

       // bool satisfied_by_posvals(const Lit_t &, const std::unordered_map<ATTID, std::unordered_set<ValueRep>> &) const;

        bool satisfied_by_posvals(const Lit_t &lit,
                                                 const std::vector<std::vector<char>> &pvmap) const;

        unsigned int getLevel(const ATTID attid) const;
    };
}


#endif //PLOG_INTERPRETATION_H
