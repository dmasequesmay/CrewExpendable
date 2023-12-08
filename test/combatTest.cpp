#include <gtest/gtest.h>
#include <cassert>
#include "../header/storyTree.h"
#include "../header/Character.h"
#include "../header/Alien.h"
#include "../header/AlienType.h"
#include "../header/Player.h"
#include "../header/PlayerType.h"
#include "../header/Weapon.h"
#include "../header/WeaponType.h"
#include "../header/Combat.h"

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

TEST(combatTest, attack) {
    vector<string> inventory;
    Player player = Player("Player", 140.0, 16.0, TANKPLAYER, inventory, 15.0);
    Alien alien = Alien("Alien", 120.0, 15.0, SLIPPERYALIEN);
    Combat combat;
    combat.attack(alien, player);
    assert(player.getHealth() < 140);
    EXPECT_EQ(player.isAlive(), true);
    EXPECT_EQ(alien.getHealth(), 120);
    EXPECT_EQ(alien.isAlive(), true);
}

TEST(combatTest, block) {
    vector<string> inventory;
    Player player = Player("Player", 140.0, 16.0, TANKPLAYER, inventory, 15.0);
    Alien alien = Alien("Alien", 120.0, 15.0, SLIPPERYALIEN);
    Combat combat;
    combat.block(alien, player);
    EXPECT_EQ(player.getHealth(), 131);
    EXPECT_EQ(player.isAlive(), true);
    assert(alien.getHealth() == 120);
    EXPECT_EQ(alien.isAlive(), true);
}

TEST(combatTest, dodge) {
    vector<string> inventory;
    Player player = Player("Player", 140.0, 16.0, TANKPLAYER, inventory, 15.0);
    Alien alien = Alien("Alien", 120.0, 15.0, SLIPPERYALIEN);
    Combat combat;
    combat.dodge(alien, player);
    EXPECT_EQ(player.getHealth(), 140.0);
    EXPECT_EQ(player.isAlive(), true);
    assert(alien.getHealth() == 120.0);
    EXPECT_EQ(alien.isAlive(), true);
}
