#include "BigTrouser.h"
#include "LeatherShoes.h"
#include "Sneakers.h"
#include "Suit.h"
#include "Tie.h"
#include "TShirts.h"

int main(void)
{
	Person *liMing = new Person("李明");

	std::cout << "第一种装扮：" << std::endl;
	Sneakers *sneakers = new Sneakers;
	BigTrouser *bigTrouser = new BigTrouser;
	TShirts *tShirts = new TShirts;

	sneakers->decorate(liMing);
	bigTrouser->decorate(sneakers);
	tShirts->decorate(bigTrouser);

	tShirts->show();

	std::cout << "第二种装扮：" << std::endl;
	LeatherShoes *leatherShoes = new LeatherShoes;
	Tie *tie = new Tie;
	Suit *suit = new Suit;

	leatherShoes->decorate(liMing);
	tie->decorate(leatherShoes);
	suit->decorate(tie);

	suit->show();

	return 0;
}