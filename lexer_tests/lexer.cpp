//
// Created by AK on 13/10/15.
//

#include "gtest/gtest.h"

#if __cplusplus
extern "C" {
#endif

#include "lexer.h"

#if __cplusplus
}
#endif

TEST(InitStatuses, test_eq) {
	t_status	statuses_t[TK_COUNT];

	init_sts(statuses_t);
    EXPECT_EQ(1, 1);
}

TEST(basic_check, test_neq) {
    EXPECT_NE(1, 0);
}
