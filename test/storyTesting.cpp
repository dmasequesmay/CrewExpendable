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
TEST(node, paramConstructor) {
    string choice = "Choice A";
    string decision = "Decision A";
    Node n = Node(choice, decision, true);
    EXPECT_EQ(n.getChoice(), "Choice A");
    EXPECT_EQ(n.getDescription(), "Decision A");
    EXPECT_TRUE(n.isEncounter());
    EXPECT_EQ(n.getLeftChild(), nullptr);
    EXPECT_EQ(n.getRightChild(), nullptr);
}
TEST(storyTree, defaultConstructor) {
    storyTree t = storyTree();
    EXPECT_EQ(t.prev, nullptr);
    EXPECT_EQ(t.curr, t.v.at(0));
    EXPECT_EQ(t.v.size(), 16);
}
TEST(storyTree, leaf) {
    storyTree t = storyTree();
    EXPECT_FALSE(t.isLeaf(t.v.at(0)));
    EXPECT_TRUE(t.isLeaf(t.v.at(14)));
    EXPECT_TRUE(t.isLeaf(t.v.at(15)));
}
TEST(storyTree, leftOnce) {
    storyTree t = storyTree();
    t.moveLeft();
    EXPECT_EQ(t.prev, t.v.at(0));
    EXPECT_EQ(t.curr, t.v.at(1));
}
TEST(storyTree, rightOnce) {
    storyTree t = storyTree();
    t.moveRight();
    EXPECT_EQ(t.prev, t.v.at(0));
    EXPECT_EQ(t.curr, t.v.at(2));
}