#include <string>

class Fighter {
 private:
  std::string name;
  int health;
  int damagePerAttack;

 public:
  Fighter(std::string name, int health, int damagePerAttack) {
    this->name = name;
    this->health = health;
    this->damagePerAttack = damagePerAttack;
  }

  ~Fighter(){};
  std::string getName() { return name; }
  int getHealth() { return health; }
  int getDamagePerAttack() { return damagePerAttack; }
  void setHealth(int value) { health = value; }
};

std::string declareWinner(Fighter* fighter1, Fighter* fighter2,
                          std::string firstAttacker) {
  std::string winner = firstAttacker;
  if (fighter1->getName() == firstAttacker) {
    fighter2->setHealth(fighter2->getHealth() - fighter1->getDamagePerAttack());
  }

  while (fighter1->getHealth() > 0 && fighter2->getHealth() > 0) {
    fighter1->setHealth(fighter1->getHealth() - fighter2->getDamagePerAttack());
    if (fighter1->getHealth() <= 0) {
      winner = fighter2->getName();
      break;
    }
    fighter2->setHealth(fighter2->getHealth() - fighter1->getDamagePerAttack());
    if (fighter2->getHealth() <= 0) {
      winner = fighter1->getName();
      break;
    }
  }
  return winner;
}
