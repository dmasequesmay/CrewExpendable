#include "gtest/gtest.h"
#include "../header/storyTree.h"

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

TEST(node, defaultConstructor) {
    Node n = Node();
    EXPECT_EQ(n.getChoice(), "");
    EXPECT_EQ(n.getDescription(), "");
    EXPECT_FALSE(n.isEncounter());
    EXPECT_EQ(n.getLeftChild(), nullptr);
    EXPECT_EQ(n.getRightChild(), nullptr);
}

TEST(node, paramConstructor1) {
    string choice = "Choice A";
    string decision = "Decision A";
    Node n = Node(choice, decision, true);
    EXPECT_EQ(n.getChoice(), "Choice A");
    EXPECT_EQ(n.getDescription(), "Decision A");
    EXPECT_TRUE(n.isEncounter());
    EXPECT_EQ(n.getLeftChild(), nullptr);
    EXPECT_EQ(n.getRightChild(), nullptr);
}