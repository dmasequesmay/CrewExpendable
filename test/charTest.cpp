#include <gtest/gtest.h>
#include "../header/storyTree.h"
#include "../header/Character.h"
#include "../header/Alien.h"
#include "../header/AlienType.h"
#include "../header/Player.h"
#include "../header/PlayerType.h"
#include "../header/Weapon.h"
#include "../header/WeaponType.h"

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

TEST(charTest, Alien) {
    Alien alien = Alien("Alien", 100, 20, TANKALIEN);
    EXPECT_EQ(alien.getName(), "Alien");
    EXPECT_EQ(alien.getHealth(), 100);
    EXPECT_EQ(alien.getAttackDamage(), 20);
    alien.damage(100);
    ASSERT_EQ(alien.isAlive(), false);
}

TEST(charTest, TankAlien) {
    TankAlien alien = TankAlien("TankAlien", 100, 20);
    EXPECT_EQ(alien.getName(), "TankAlien");
    EXPECT_EQ(alien.getHealth(), 100);
    EXPECT_EQ(alien.getAttackDamage(), 20);
    EXPECT_EQ(alien.getType(), TANKALIEN);
    alien.damage(100);
    ASSERT_EQ(alien.isAlive(), false);
}

TEST(charTest, SlipperyAlien) {
    SlipperyAlien alien = SlipperyAlien("SlipperyAlien", 100, 20);
    EXPECT_EQ(alien.getName(), "SlipperyAlien");
    EXPECT_EQ(alien.getHealth(), 100);
    EXPECT_EQ(alien.getAttackDamage(), 20);
    EXPECT_EQ(alien.getType(), SLIPPERYALIEN);
    alien.damage(100);
    ASSERT_EQ(alien.isAlive(), false);
}

TEST(charTest, BossAlien) {
    BossAlien alien = BossAlien("BossAlien", 100, 20);
    EXPECT_EQ(alien.getName(), "BossAlien");
    EXPECT_EQ(alien.getHealth(), 100);
    EXPECT_EQ(alien.getAttackDamage(), 20);
    EXPECT_EQ(alien.getType(), BOSSALIEN);
    alien.damage(100);
    ASSERT_EQ(alien.isAlive(), false);
}

TEST(charTest, Character) {
    Character alien = Character(ALIEN, "Alien", 100, 20);
    EXPECT_EQ(alien.getName(), "Alien");
    EXPECT_EQ(alien.getHealth(), 100);
    EXPECT_EQ(alien.getAttackDamage(), 20);
    alien.damage(100);
    ASSERT_EQ(alien.isAlive(), false);
}

TEST(charTest, Player) {
    vector<string> inventory = {"TEST"};
    Player player = Player("Player", 100, 20, TANKPLAYER, inventory, 20);
    EXPECT_EQ(player.getName(), "Player");
    EXPECT_EQ(player.getHealth(), 100);
    EXPECT_EQ(player.getAttackDamage(), 20);
    EXPECT_EQ(player.getHealVal(), 20);
    player.damage(100);
    ASSERT_EQ(player.isAlive(), false);
}

TEST(charTest, TankPlayer) {
    vector<string> inventory = {"TEST"};
    TankPlayer player = TankPlayer("TankPlayer", 100, 20, inventory, 20);
    EXPECT_EQ(player.getName(), "TankPlayer");
    EXPECT_EQ(player.getHealth(), 100);
    EXPECT_EQ(player.getAttackDamage(), 20);
    EXPECT_EQ(player.getType(), TANKPLAYER);
    EXPECT_EQ(player.getHealVal(), 20);
    player.damage(100);
    ASSERT_EQ(player.isAlive(), false);
}

TEST(charTest, AllRounderPlayer) {
    vector<string> inventory = {"TEST"};
    AllRounderPlayer player = AllRounderPlayer("AllRounderPlayer", 100, 20, inventory, 20);
    EXPECT_EQ(player.getName(), "AllRounderPlayer");
    EXPECT_EQ(player.getHealth(), 100);
    EXPECT_EQ(player.getAttackDamage(), 20);
    EXPECT_EQ(player.getType(), ALLROUNDERPLAYER);
    EXPECT_EQ(player.getHealVal(), 20);
    player.damage(100);
    ASSERT_EQ(player.isAlive(), false);
}

TEST(charTest, NimblePlayer) {
    vector<string> inventory = {"TEST"};
    NimblePlayer player = NimblePlayer("NimblePlayer", 100, 20, inventory, 20);
    EXPECT_EQ(player.getName(), "NimblePlayer");
    EXPECT_EQ(player.getHealth(), 100);
    EXPECT_EQ(player.getAttackDamage(), 20);
    EXPECT_EQ(player.getType(), NIMBLEPLAYER);
    EXPECT_EQ(player.getHealVal(), 20);
    player.damage(100);
    ASSERT_EQ(player.isAlive(), false);
}

TEST(charTest, Weapon) {
    Weapon weapon = Weapon(WeaponType::HEAVYWEAPON, "Heavy Weapon", 20.0, 15.0);
    EXPECT_EQ(weapon.getType(), WeaponType::HEAVYWEAPON);
    EXPECT_EQ(weapon.getName(), "Heavy Weapon");
    EXPECT_DOUBLE_EQ(weapon.getAttackDamage(), 20.0);
    EXPECT_DOUBLE_EQ(weapon.getCriticalChance(), 15.0);
}

TEST(charTest, HeavyWeapon) {
    HeavyWeapon weapon = HeavyWeapon("Heavy Weapon");
    EXPECT_EQ(weapon.getType(), WeaponType::HEAVYWEAPON);
    EXPECT_EQ(weapon.getName(), "Heavy Weapon");
    EXPECT_DOUBLE_EQ(weapon.getAttackDamage(), 20.0);
    EXPECT_DOUBLE_EQ(weapon.getCriticalChance(), 15.0);
}

TEST(charTest, MediumWeapon) {
    MediumWeapon weapon = MediumWeapon("Medium Weapon");
    EXPECT_EQ(weapon.getType(), WeaponType::MEDIUMWEAPON);
    EXPECT_EQ(weapon.getName(), "Medium Weapon");
    EXPECT_DOUBLE_EQ(weapon.getAttackDamage(), 15.0);
    EXPECT_DOUBLE_EQ(weapon.getCriticalChance(), 30.0);
}

TEST(charTest, LightWeapon) {
    LightWeapon weapon = LightWeapon("Light Weapon");
    EXPECT_EQ(weapon.getType(), WeaponType::LIGHTWEAPON);
    EXPECT_EQ(weapon.getName(), "Light Weapon");
    EXPECT_DOUBLE_EQ(weapon.getAttackDamage(), 10.0);
    EXPECT_DOUBLE_EQ(weapon.getCriticalChance(), 45.0);
}