//
// Created by iensen on 6/6/20.
//
#include "gtest/gtest.h"
#include "utils.h"

TEST(NEWVERSION, 0) {
    ASSERT_NEAR(compute_query("plogapp/tests/p1.plog"), 0.30, 1e-8);
}

TEST(NEWVERSION, 1) {
    ASSERT_NEAR(compute_query("plogapp/tests/triv0.plog"), 1.0, 1e-8);
}

TEST(NEWVERSION, 2) {
    ASSERT_NEAR(compute_query("plogapp/tests/triv1.plog"), 0.0, 1e-8);
}

TEST(NEWVERSION, 3) {
    ASSERT_NEAR(compute_query("plogapp/tests/rels0.plog"), 1.0, 1e-8);
}


TEST(NEWVERSION, 4) {
    ASSERT_NEAR(compute_query("plogapp/tests/rels.plog"), 0.5, 1e-8);
}

TEST(NEWVERSION, 5) {
    ASSERT_NEAR(compute_query("plogapp/tests/rshort.plog"), 1.0 / 3.0, 1e-5);
}

TEST(NEWVERSION, 6) {
    ASSERT_NEAR(compute_query("plogapp/tests/obs1.plog"), 1.0, 1e-5);
}


TEST(NEWVERSION, 7) {
    ASSERT_NEAR(compute_query("plogapp/tests/obs2.plog"), 0.0, 1e-5);
}


TEST(NEWVERSION, 8) {
    ASSERT_NEAR(compute_query("plogapp/tests/paper/dice1.plog"), 0.15, 1e-5);
}

TEST(NEWVERSION, 9) {
    ASSERT_NEAR(compute_query("plogapp/tests/paper/dice2.plog"), 0.15, 1e-5);
}

TEST(NEWVERSION, 10) {
    ASSERT_NEAR(compute_query("plogapp/tests/paper/dice3.plog"), 1.0 / 6.0, 1e-5);
}


TEST(NEWVERSION, 11) {
    ASSERT_NEAR(compute_query("plogapp/tests/paper/monty1.plog"), 0.33333, 1e-5);
}


TEST(NEWVERSION, 12) {
    ASSERT_NEAR(compute_query("plogapp/tests/paper/monty2.plog"), 0.0, 1e-5);
}

TEST(NEWVERSION, 13) {
    ASSERT_NEAR(compute_query("plogapp/tests/paper/monty3.plog"), 0.66666, 1e-5);
}


TEST(NEWVERSION, 14) {
    ASSERT_NEAR(compute_query("plogapp/tests/rsort.plog"), 0.111111, 1e-5);
}

TEST(NEWVERSION, 15) {
    ASSERT_NEAR(compute_query("plogapp/tests/do1.plog"), 0.3, 1e-5);
}

TEST(NEWVERSION, CLINGO_CONSEQUENCES) {
    ASSERT_NEAR(compute_query("plogapp/tests/clingocons.plog"), 0.5, 1e-5);
}


TEST(PERF_NEWVERSION_NASA, _l4) {
    ASSERT_NEAR(compute_query("plogapp/tests/nasa/A4n.plog"), 0.059235, 1e-5);
}


TEST(PERF_NEWVERSION_NASA, _fgl4) {
    ASSERT_NEAR(compute_query("plogapp/tests/nasa/F.plog"), 0.905719, 1e-5);
}

// this example never finishes the run
//TEST(NEWVERSION_NASA, _fgl4rdn) {
//    ASSERT_NEAR(compute_query("../../plog/plogapp/tests/nasa/F2.plog"), 0.905719, 1e-5);
//}

TEST(NEWVERSION_BLOCKS, _20x1) {
    ASSERT_NEAR(compute_query("plogapp/tests/weijuns_testsuite/Blocks/blockmap20_1.plg"), 0.8, 1e-5);
}

TEST(NEWVERSION_BLOCKS, _20x2) {
    ASSERT_NEAR(compute_query("plogapp/tests/weijuns_testsuite/Blocks/blockmap20_2.plg"), 0.621053, 1e-5);
}

TEST(PERF_NEWVERSION_BLOCKS, _20x3) {
    ASSERT_NEAR(compute_query("plogapp/tests/weijuns_testsuite/Blocks/blockmap20_3.plg"), 0.454386, 1e-5);
}


TEST(PERF_NEWVERSION_BLOCKS, _20x4) {
    ASSERT_NEAR(compute_query("plogapp/tests/weijuns_testsuite/Blocks/blockmap20_4.plg"), 0.308153, 1e-5);
}


TEST(PERF_NEWVERSION_BLOCKS, _20x5) {
    ASSERT_NEAR(compute_query("plogapp/tests/weijuns_testsuite/Blocks/blockmap20_5.plg"), 0.191692, 1e-5);
}


TEST(NEWVERSION_POKER, _5x3) {
    ASSERT_NEAR(compute_query("plogapp/tests/weijuns_testsuite/Poker/poker_5_3.txt"), 0.545455, 1e-5);
}


TEST(PERF_NEWVERSION_POKER, _5x4) {
    ASSERT_NEAR(compute_query("plogapp/tests/weijuns_testsuite/Poker/poker_5_4.txt"), 0.417582, 1e-5);
}

TEST(PERF_NEWVERSION_POKER, _5x5) {
    ASSERT_NEAR(compute_query("plogapp/tests/weijuns_testsuite/Poker/poker_5_5.txt"), 0.399897, 1e-5);
}

TEST(PERF_NEWVERSION_POKER, _5x6) {
    ASSERT_NEAR(compute_query("plogapp/tests/weijuns_testsuite/Poker/poker_5_6.txt"), 0.547344, 1e-5);
}

TEST(PERF_NEWVERSION_POKER, _5x4x36) {
    ASSERT_NEAR(compute_query("plogapp/tests/weijuns_testsuite/Poker/poker_5_4_36.txt"), 0.372804, 1e-5);
}


TEST(PERF_NEWVERSION_SQ, _1) {
    ASSERT_NEAR(compute_query("plogapp/tests/squirrel.plog"), 0.152380, 1e-4);
}