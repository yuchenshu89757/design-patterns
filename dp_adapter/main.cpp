#include "RobotDog.h"
#include "BioRobot.h"
#include "Translator.h"
#include "NativePlayer.h"

#define CLASS_ADAPTER_TEST  0
#define OBJECT_ADAPTER_TEST 1

int main(void)
{
#if OBJECT_ADAPTER_TEST
	Dog *dog = new Dog("Wangcai");
	Robot *robot = new RobotDog(dog);
	Robot *bioRobot = new BioRobot;

	robot->cry();
	robot->move();

	bioRobot->cry();
	bioRobot->move();

#endif

#if CLASS_ADAPTER_TEST
	Player *player_one = new NativePlayer;
	Player *player_two = new Translator;

	player_one->attack();
	player_one->defense();

	player_two->attack();
	player_two->defense();
#endif
	return 0;
}