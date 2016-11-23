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

TEST(basic_check, test_eq) {
    EXPECT_EQ(ft_strlen("ok"), 1);
}

TEST(basic_check, test_neq) {
    EXPECT_NE(1, 0);
}
