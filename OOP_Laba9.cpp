#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Weapon
{
private:
    std::string Name = "Net oruzhiya, tol'ko kulaki";
    short int AddDamage = 0;
    short int AddCrit = -5;
    short int AddAccuracy = 15;

public:

std::string getName()
{
    return this->Name;
}
void setName(std::string Name1)
{
    this->Name = Name1;
}

short int getAddDamage()
{
    return this->AddDamage;
}
void setAddDamage(short int AddDamage1)
{
    this->AddDamage = AddDamage1;
}

short int getAddCrit()
{
    return this->AddCrit;
}
void setAddCrit(short int AddCrit1)
{
    this->AddCrit = AddCrit1;
}

short int getAddAccuracy()
{
    return this->AddAccuracy;
}
void setAddAccuracy(short int AddAccuracy1)
{
    this->AddAccuracy = AddAccuracy1;
}


void InspectCharacteristics()
{
    cout << "- - - - - - - -" << endl << endl;
    cout << "Oruzhie ''" << this->getName() << "'': " << endl << endl;
    cout << " 1)  Uron                          = " << this->getAddDamage() << endl;
    cout << " 2)  SHans kriticheskogo udara     = " << this->getAddCrit() << "%" << endl;
    cout << " 3)  Metkost'                      = " << this->getAddAccuracy() << endl;
}


protected:


};
































class Armor
{
private:
    std::string Name = "V chyom mat' rodila";
    short int AddDefence = 0;
    short int AddDodge = 0;

public:

std::string getName()
{
    return this->Name;
}
void setName(std::string Name1)
{
    this->Name = Name1;
}

short int getAddDefence()
{
    return this->AddDefence;
}
void setAddDefence(short int AddDefence1)
{
    this->AddDefence = AddDefence1;
}

short int getAddDodge()
{
    return this->AddDodge;
}
void setAddDodge(short int AddDodge1)
{
    this->AddDodge = AddDodge1;
}


void InspectCharacteristics()
{
    cout << "- - - - - - - -" << endl << endl;
    cout << "Dospeh ''" << this->getName() << "'': " << endl << endl;
    cout << " 1)  Zachshita                      = " << this->getAddDefence() << endl;
    cout << " 2)  Uklonenie                   = " << this->getAddDodge() << endl;
}

protected:


};

class Creature
{
private:
    std::string Name = "Suchshestvo";
    std::string Description = "Opisanie";

    short int MaxHP = 1;
    short int HP = MaxHP;
    short int BaseDamage = 1;
    short int Defence = 1;
    short int Crit = 1;
    short int Accuracy = 1;
    short int Dodge = 1;

    Weapon Weap;
    Armor Arm;
    short int Gold = 0;
    short int HealPotion = 0;
    short int Fireball = 0;

public:

std::string getName()
{
    return this->Name;
}
void setName(std::string Name1)
{
    this->Name = Name1;
}

std::string getDescription()
{
    return this->Description;
}
void setDescription(std::string Description1)
{
    this->Description = Description1;
}

short int getMaxHP()
{
    return this->MaxHP;
}
void setMaxHP(short int MaxHP1)
{
    this->MaxHP = MaxHP1;
}

short int getHP()
{
    return this->HP;
}
void setHP(short int HP1)
{
    this->HP = HP1;
}

short int getBaseDamage()
{
    return this->BaseDamage;
}
void setBaseDamage(short int BaseDamage1)
{
    this->BaseDamage = BaseDamage1;
}

short int getDefence()
{
    return this->Defence;
}
void setDefence(short int Defence1)
{
    this->Defence = Defence1;
}

short int getCrit()
{
    return this->Crit;
}
void setCrit(short int Crit1)
{
    this->Crit = Crit1;
}

short int getAccuracy()
{
    return this->Accuracy;
}
void setAccuracy(short int Accuracy1)
{
    this->Accuracy = Accuracy1;
}

short int getDodge()
{
    return this->Dodge;
}
void setDodge(short int Dodge1)
{
    this->Dodge = Dodge1;
}


short int getGold()
{
    return this->Gold;
}
void setGold(short int Gold1)
{
    this->Gold = Gold1;
}

short int getHealPotion()
{
    return this->HealPotion;
}
void setHealPotion(short int HealPotion1)
{
    this->HealPotion = HealPotion1;
}

short int getFireball()
{
    return this->Fireball;
}
void setFireball(short int Fireball1)
{
    this->Fireball = Fireball1;
}

Weapon getWeapon()
{
    return this->Weap;
}
void setWeapon(Weapon Weap1)
{
    this->Weap = Weap1;
}
void setWeapon(Weapon* Weap1)
{
    this->Weap = *Weap1;
}

Armor getArmor()
{
    return this->Arm;
}
void setArmor(Armor Arm1)
{
    this->Arm = Arm1;
}


void InspectCharacteristics()
{
    cout << "- - - - - - - -" << endl << endl;
    cout << "OSMOTR SUCHSHESTVA " << this->getName() << ": " << endl << endl;
    cout << " 1)  Maksimal'noe zdorov'e         = " << this->getMaxHP() << endl;
    cout << " 2)  Tekuchshee zdorov'e           = " << this->getHP() << endl;
    cout << " 3)  Uron                          = " << this->getBaseDamage()+this->getWeapon().getAddDamage() << endl;
    cout << " 4)  Zachshita                     = " << this->getDefence()+this->getArmor().getAddDefence() << endl;
    cout << " 5)  SHans kriticheskogo udara     = " << this->getCrit()+this->getWeapon().getAddCrit() << "%" << endl;
    cout << " 6)  Metkost'                      = " << this->getAccuracy()+this->getWeapon().getAddAccuracy() << endl;
    cout << " 7)  Uklonenie                     = " << this->getDodge()+this->getArmor().getAddDodge() << endl;

    cout << " 8)  Oruzhie                       = ''" << this->getWeapon().getName() << "''" << endl;
    cout << " 9)  Dospeh                        = ''" << this->getArmor().getName() << "''" << endl << endl;

    cout << " 10) Zolota v karmanah             = " << this->getGold() << endl;
    cout << " 11) Zeliy lecheniya v sumke       = " << this->getHealPotion() << endl;
    cout << " 12) Svitkov ''Ognennogo shara''   = " << this->getFireball() << endl;
}


protected:


};



class Dagger : public Weapon
{
private:

public:

    Dagger()
    {
        setName("Kinzhal");
        setAddDamage(3+(rand() % 5));
        setAddCrit(5+(rand() % 11));
        setAddAccuracy(0+(rand() % 21));
    }

protected:

};


class Club : public Weapon
{
private:

public:

    Club()
    {
        setName("Dubina");
        setAddDamage(10+(rand() % 21));
        setAddCrit(0+(rand() % 11));
        setAddAccuracy(-10+(rand() % 11));
    }

protected:

};

class Spear : public Weapon
{
private:

public:

    Spear()
    {
        setName("Kop'yo");
        setAddDamage(5+(rand() % 11));
        setAddCrit(5+(rand() % 21));
        setAddAccuracy(15+(rand() % 11));
    }

protected:

};

class Axe : public Weapon
{
private:

public:

    Axe()
    {
        setName("Topor");
        setAddDamage(10+(rand() % 41));
        setAddCrit(10+(rand() % 21));
        setAddAccuracy(-20+(rand() % 11));
    }

protected:

};

class Sword : public Weapon
{
private:

public:

    Sword()
    {
        setName("Mech");
        setAddDamage(15+(rand() % 21));
        setAddCrit(5+(rand() % 11));
        setAddAccuracy(0+(rand() % 11));
    }

protected:

};

class Hammer : public Weapon
{
private:

public:

    Hammer()
    {
        setName("Boevoy molot");
        setAddDamage(20+(rand() % 61));
        setAddCrit(-5+(rand() % 11));
        setAddAccuracy(-35+(rand() % 21));
    }

protected:

};

class OldClothes : public Armor
{
private:

public:

    OldClothes()
    {
        setName("Starye obmotki");
        setAddDefence(1+(rand() % 6));
        setAddDodge(0-(rand() % 4));
    }

protected:

};

class FurArmor : public Armor
{
private:

public:

    FurArmor()
    {
        setName("Dospeh iz shkur");
        setAddDefence(5+(rand() % 6));
        setAddDodge(0-(rand() % 6));
    }

protected:

};

class Chainmail : public Armor
{
private:

public:

    Chainmail()
    {
        setName("Kol'chuga");
        setAddDefence(10+(rand() % 6));
        setAddDodge(-10-(rand() % 6));
    }

protected:

};

class Fullplate : public Armor
{
private:

public:

    Fullplate()
    {
        setName("Latnyy dospeh");
        setAddDefence(15+(rand() % 6));
        setAddDodge(-25-(rand() % 6));
    }

protected:

};
















class WeaponBuilder
{
public:
  virtual void CreateWeapon()
   {

   }

virtual void buildName()
{

}
virtual void buildAddDamage()
{

}
virtual void buildAddCrit()
{

}
virtual void buildAddAccuracy()
{

}
};




class DaggerBuilder
{
private:

public:

void buildName(Weapon* Current)
{
    int i = rand() % 5;
    if (i==0)
    {
        Current->setName("Kinzhal");
    }
    if (i==1)
    {
        Current->setName("Staryy nozh");
    }
    if (i==2)
    {
        Current->setName("Zatochka");
    }
    if (i==3)
    {
        Current->setName("Grubyy kinzhal");
    }
    if (i==4)
    {
        Current->setName("Krivoy nozh");
    }
}
void buildAddDamage(Weapon* Current)
{
    Current->setAddDamage(3+(rand() % 5));
}
void buildAddCrit(Weapon* Current)
{
    Current->setAddCrit(5+(rand() % 11));
}
void buildAddAccuracy(Weapon* Current)
{
    Current->setAddAccuracy(0+(rand() % 21));
}

  virtual Weapon* GetResult()
  {
    Dagger* Current = new Dagger();
    buildName(Current);
    buildAddDamage(Current);
    buildAddCrit(Current);
    buildAddAccuracy(Current);
    return Current;
  }

};
class ClubBuilder
{
private:

public:

void buildName(Weapon* Current)
{
    int i = rand() % 5;
    if (i==0)
    {
        Current->setName("Dubina");
    }
    if (i==1)
    {
        Current->setName("Bulava");
    }
    if (i==2)
    {
        Current->setName("Shestoper");
    }
    if (i==3)
    {
        Current->setName("Palica");
    }
    if (i==4)
    {
        Current->setName("Palka s gvozdyamy");
    }
}
void buildAddDamage(Weapon* Current)
{
    Current->setAddDamage(10+(rand() % 21));
}
void buildAddCrit(Weapon* Current)
{
    Current->setAddCrit(0+(rand() % 11));
}
void buildAddAccuracy(Weapon* Current)
{
    Current->setAddAccuracy(-10+(rand() % 11));
}

  virtual Weapon* GetResult()
  {
    Club* Current = new Club();
    buildName(Current);
    buildAddDamage(Current);
    buildAddCrit(Current);
    buildAddAccuracy(Current);
    return Current;
  }

};
class SpearBuilder
{
private:

public:

void buildName(Weapon* Current)
{
    int i = rand() % 5;
    if (i==0)
    {
        Current->setName("Kop'e");
    }
    if (i==1)
    {
        Current->setName("Pika");
    }
    if (i==2)
    {
        Current->setName("Protazan");
    }
    if (i==3)
    {
        Current->setName("Glefa");
    }
    if (i==4)
    {
        Current->setName("Boevaya kosa");
    }
}
void buildAddDamage(Weapon* Current)
{
    Current->setAddDamage(5+(rand() % 11));
}
void buildAddCrit(Weapon* Current)
{
    Current->setAddCrit(5+(rand() % 21));
}
void buildAddAccuracy(Weapon* Current)
{
    Current->setAddAccuracy(15+(rand() % 11));
}

  virtual Weapon* GetResult()
  {
    Spear* Current = new Spear();
    buildName(Current);
    buildAddDamage(Current);
    buildAddCrit(Current);
    buildAddAccuracy(Current);
    return Current;
  }

};
class AxeBuilder
{
private:

public:

void buildName(Weapon* Current)
{
    int i = rand() % 5;
    if (i==0)
    {
        Current->setName("Topor");
    }
    if (i==1)
    {
        Current->setName("Grubyy topor");
    }
    if (i==2)
    {
        Current->setName("Rzhavyy topor");
    }
    if (i==3)
    {
        Current->setName("Boevoy topor");
    }
    if (i==4)
    {
        Current->setName("Staryy topor");
    }
}
void buildAddDamage(Weapon* Current)
{
    Current->setAddDamage(10+(rand() % 41));
}
void buildAddCrit(Weapon* Current)
{
    Current->setAddCrit(10+(rand() % 21));
}
void buildAddAccuracy(Weapon* Current)
{
    Current->setAddAccuracy(-20+(rand() % 11));
}

  virtual Weapon* GetResult()
  {
    Axe* Current = new Axe();
    buildName(Current);
    buildAddDamage(Current);
    buildAddCrit(Current);
    buildAddAccuracy(Current);
    return Current;
  }

};
class SwordBuilder
{
private:

public:

void buildName(Weapon* Current)
{
    int i = rand() % 5;
    if (i==0)
    {
        Current->setName("Mech");
    }
    if (i==1)
    {
        Current->setName("Sablya");
    }
    if (i==2)
    {
        Current->setName("Yatagan");
    }
    if (i==3)
    {
        Current->setName("Palash");
    }
    if (i==4)
    {
        Current->setName("Falshion");
    }
}
void buildAddDamage(Weapon* Current)
{
    Current->setAddDamage(15+(rand() % 21));
}
void buildAddCrit(Weapon* Current)
{
    Current->setAddCrit(5+(rand() % 6));
}
void buildAddAccuracy(Weapon* Current)
{
    Current->setAddAccuracy(0+(rand() % 11));
}

  virtual Weapon* GetResult()
  {
    Sword* Current = new Sword();
    buildName(Current);
    buildAddDamage(Current);
    buildAddCrit(Current);
    buildAddAccuracy(Current);
    return Current;
  }

};
class HammerBuilder
{
private:

public:

void buildName(Weapon* Current)
{
    int i = rand() % 5;
    if (i==0)
    {
        Current->setName("Boevoy molot");
    }
    if (i==1)
    {
        Current->setName("Boevaya kuvalda");
    }
    if (i==2)
    {
        Current->setName("Tyazhoylyy klevec");
    }
    if (i==3)
    {
        Current->setName("Ogromnyy molot");
    }
    if (i==4)
    {
        Current->setName("Shipastyy molot");
    }
}
void buildAddDamage(Weapon* Current)
{
    Current->setAddDamage(20+(rand() % 61));
}
void buildAddCrit(Weapon* Current)
{
    Current->setAddCrit(-5+(rand() % 11));
}
void buildAddAccuracy(Weapon* Current)
{
    Current->setAddAccuracy(-35+(rand() % 21));
}

  virtual Weapon* GetResult()
  {
    Hammer* Current = new Hammer();
    buildName(Current);
    buildAddDamage(Current);
    buildAddCrit(Current);
    buildAddAccuracy(Current);
    return Current;
  }

};









class Player : public Creature
{
private:

public:

    Player(std::string nameplayer)
    {
        setName(nameplayer);
        setMaxHP(100);
        setHP(this->getMaxHP());
        setBaseDamage(10);
        setDefence(0);
        setCrit(10);
        setAccuracy(80);
        setDodge(20);
        setWeapon(Weapon());
        setArmor(Armor());
        setGold(0);
        setHealPotion(0);
    }

protected:

};



class Goblin : public Creature
{
private:

public:

    Goblin()
    {
        setName("Goblin-vor");
        setDescription("Ty vidish' malen'koe suchshestvo s zhyolto-zelyonoy kozhey. Ono odeto v kakie-to oshmyotki, v rukah u nego grubyy kinzhal. Zametiv tebya, ono brosaetsya v ataku!");
        setMaxHP(15+(rand() % 31));
        setHP(this->getMaxHP());
        setBaseDamage(1+(rand() % 6));
        setDefence(0+(rand() % 11));
        setCrit(10+(rand() % 21));
        setAccuracy(60+(rand() % 51));
        setDodge(20+(rand() % 41));
        DaggerBuilder* buil = new DaggerBuilder();
        setWeapon(buil->GetResult());
        delete buil;
        setArmor(OldClothes());
        setGold(0+(rand() % 27));
        setHealPotion(0);
        setFireball(0+(rand() % 2));
    }

protected:

};

class Barbarian : public Creature
{
private:

public:

    Barbarian()
    {
        setName("Dikar'-ohotnik");
        setDescription("Ty vidish' zarosshego borodatogo cheloveka s dubinkoy i v gruboy odezhde iz shkur. On zamechaet tebya i brosaetsya na tebya s zlobnym voplem!");
        setMaxHP(55+(rand() % 101));
        setHP(this->getMaxHP());
        setBaseDamage(10+(rand() % 16));
        setDefence(0);
        setCrit(0+(rand() % 11));
        setAccuracy(25+(rand() % 81));
        setDodge(5+(rand() % 21));
        ClubBuilder* buil = new ClubBuilder();
        setWeapon(buil->GetResult());
        delete buil;
        setArmor(FurArmor());
        setGold(0+(rand() % 79));
        setHealPotion(0+(rand() % 2));
        setFireball(0);
    }

protected:

};

class Skeleton : public Creature
{
private:

public:

    Skeleton()
    {
        setName("Skelet-kopeychshik");
        setDescription("Ty vidish' hodyachego skeleta s kop'yom i v staroy rzhavoy kol'chuge. On beryot kop'yo na izgotovku i medlenno shagaet v tvoyu storonu.");
        setMaxHP(40+(rand() % 81));
        setHP(this->getMaxHP());
        setBaseDamage(1+(rand() % 21));
        setDefence(0);
        setCrit(0+(rand() % 21));
        setAccuracy(50+(rand() % 41));
        setDodge(0+(rand() % 21));
        SpearBuilder* buil = new SpearBuilder();
        setWeapon(buil->GetResult());
        delete buil;
        setArmor(Chainmail());
        setGold(35+(rand() % 61));
        setHealPotion(1);
        setFireball(0+(rand() % 2));
    }

protected:

};

class Orc : public Creature
{
private:

public:

    Orc()
    {
        setName("Ork-voin");
        setDescription("Ty vidish' krupnogo klykastogo gumanoida s toporom i v odezhde iz shkur. Zametiv tebya, on rychit i nesyotsya na tebya, razmahivaya sekiroy!");
        setMaxHP(90+(rand() % 51));
        setHP(this->getMaxHP());
        setBaseDamage(15+(rand() % 7));
        setDefence(0+(rand() % 31));
        setCrit(0+(rand() % 31));
        setAccuracy(40+(rand() % 41));
        setDodge(0+(rand() % 11));
        AxeBuilder* buil = new AxeBuilder();
        setWeapon(buil->GetResult());
        delete buil;
        setArmor(FurArmor());
        setGold(0+(rand() % 171));
        setHealPotion(0+(rand() % 3));
        setFireball(0+(rand() % 2));
    }

protected:

};

class Marauder : public Creature
{
private:

public:

    Marauder()
    {
        setName("Marodyor-mechnik");
        setDescription("Ty vidish' cheloveka s mechom i v horoshey kol'chuge - vidimo, dezertir. On yavno opytnyy boec. Zametiv tebya on medlenno idyot k tebe.");
        setMaxHP(95+(rand() % 21));
        setHP(this->getMaxHP());
        setBaseDamage(15+(rand() % 11));
        setDefence(0);
        setCrit(0+(rand() % 21));
        setAccuracy(50+(rand() % 21));
        setDodge(0+(rand() % 21));
        SwordBuilder* buil = new SwordBuilder();
        setWeapon(buil->GetResult());
        delete buil;
        setArmor(Chainmail());
        setGold(109+(rand() % 81));
        setHealPotion(1+(rand() % 2));
        setFireball(0+(rand() % 2));
    }

protected:

};

class DarkKnight : public Creature
{
private:

public:

    DarkKnight()
    {
        setName("Tyomnyy rycar'-molotoboec");
        setDescription("Ty vidish' dvuhmetrovogo ambala v chyornyh latah i s gromadnym molotom. Vokrug nego tyomnaya aura. On zamechaet tebya i idyot v tvoyu storonu. Eto yavno budet slozhnaya bitva...");
        setMaxHP(120+(rand() % 21));
        setHP(this->getMaxHP());
        setBaseDamage(20+(rand() % 11));
        setDefence(0);
        setCrit(5+(rand() % 21));
        setAccuracy(60+(rand() % 21));
        setDodge(5+(rand() % 21));
        HammerBuilder* buil = new HammerBuilder();
        setWeapon(buil->GetResult());
        delete buil;
        setArmor(Fullplate());
        setGold(208+(rand() % 61));
        setHealPotion(1+(rand() % 3));
        setFireball(1+(rand() % 3));
    }

protected:

};


int BaseHit(Creature* Owner, Creature* Enemy)
{
    std::string NameHit = "Obychnyy udar";
    int damage = 0;
    int met = 0;
    int metcheck = 0;
    int critcheck = 0;

    met=(10+(Owner->getWeapon().getAddAccuracy()+Owner->getAccuracy())-(Enemy->getDodge()+Enemy->getArmor().getAddDodge()) + (rand() % 6));
    metcheck=rand() % 101;
    if (met>=metcheck)
    {

    damage=((Owner->getWeapon().getAddDamage()+Owner->getBaseDamage())-(Enemy->getDefence()+Enemy->getArmor().getAddDefence()) + (rand() % 6));
    if (damage>0)
    {
        critcheck=rand() % 101;
        if ((Owner->getCrit()+Owner->getWeapon().getAddCrit())>=critcheck)
            {
                damage=damage*2;
        cout << "CRITICHESKIY UDAR!" << endl;
            }
    cout << "''" << Owner->getName() << "'' b'yot ''" << Enemy->getName() << "'' priyomom ''" << NameHit << "'', nanosya pri etom " << damage << " urona." << endl << endl;
        return damage;
    }
    else
    {
    cout << "''" << Owner->getName() << "'' ne probivaet bronyu ''" << Enemy->getName() << "'' priyomom ''" << NameHit << "'', nanosya pri etom " << "0" << " urona." << endl << endl;
        return 0;
    }

    }
    else
    {
        cout << "''" << Owner->getName() << "'' promahivaetsya po ''" << Enemy->getName() << "'' priyomom ''" << NameHit << "''." << endl << endl;
        return 0;
    }
    return 0;
}

int MightHit(Creature* Owner, Creature* Enemy)
{
    std::string NameHit = "Moguchiy udar";
    int damage = 0;
    int met = 0;
    int metcheck = 0;
    int critcheck = 0;

    met=((Owner->getWeapon().getAddAccuracy()+Owner->getAccuracy())-(Enemy->getDodge()+Enemy->getArmor().getAddDodge()) + (rand() % 6));
    metcheck=rand() % 171;
    if (met>=metcheck)
    {

    damage=((2*(Owner->getWeapon().getAddDamage()+Owner->getBaseDamage()))-(Enemy->getDefence()+Enemy->getArmor().getAddDefence()) + (rand() % 6));
    if (damage>0)
    {
        critcheck=rand() % 101;
        if ((Owner->getCrit()+Owner->getWeapon().getAddCrit())>=critcheck)
            {
                damage=damage*2;
        cout << "CRITICHESKIY UDAR!" << endl;
            }
    cout << "''" << Owner->getName() << "'' b'yot ''" << Enemy->getName() << "'' priyomom ''" << NameHit << "'', nanosya pri etom " << damage << " urona." << endl << endl;
        return damage;
    }
    else
    {
    cout << "''" << Owner->getName() << "'' ne probivaet bronyu ''" << Enemy->getName() << "'' priyomom ''" << NameHit << "'', nanosya pri etom " << "0" << " urona." << endl << endl;
        return 0;
    }

    }
    else
    {
        cout << "''" << Owner->getName() << "'' promahivaetsya ''" << Enemy->getName() << "'' priyomom ''" << NameHit << "''." << endl << endl;
        return 0;
    }
    return 0;
}

int AccuracyHit(Creature* Owner, Creature* Enemy)
{
    std::string NameHit = "Tochnyy udar";
    int damage = 0;


    damage=(((Owner->getWeapon().getAddDamage()+Owner->getBaseDamage()))-(10+Enemy->getDefence()+Enemy->getArmor().getAddDefence()) + (rand() % 6));
    if (damage>0)
    {
    cout << "''" << Owner->getName() << "'' b'yot ''" << Enemy->getName() << "'' priyomom ''" << NameHit << "'', nanosya pri etom " << damage << " urona." << endl << endl;
        return damage;
    }
    else
    {
    cout << "''" << Owner->getName() << "'' ne probivaet bronyu ''" << Enemy->getName() << "'' priyomom ''" << NameHit << "'', nanosya " << "0" << " urona." << endl << endl;
        return 0;
    }

    return 0;
}

int ArmorlessHit(Creature* Owner, Creature* Enemy)
{
    std::string NameHit = "Broneboynyy udar";
    int damage = 0;
    int met = 0;
    int metcheck = 0;
    int critcheck = 0;

    met=((Owner->getWeapon().getAddAccuracy()+Owner->getAccuracy())-(Enemy->getDodge()+Enemy->getArmor().getAddDodge()) + (rand() % 6));
    metcheck=rand() % 141;
    if (met>=metcheck)
    {

    damage=(((Owner->getWeapon().getAddDamage()+Owner->getBaseDamage()))-(rand() % 8));
    if (damage>0)
    {
        critcheck=rand() % 161;
        if ((Owner->getCrit()+Owner->getWeapon().getAddCrit())>=critcheck)
            {
                damage=damage*2;
        cout << "CRITICHESKIY UDAR!" << endl;
            }
    cout << "''" << Owner->getName() << "'' b'yot ''" << Enemy->getName() << "'' priyomom ''" << NameHit << "'', nanosya pri etom " << damage << " urona." << endl << endl;
        return damage;
    }
    else
    {
    cout << "''" << Owner->getName() << "'' ne probivaet bronyu ''" << Enemy->getName() << "'' priyomom ''" << NameHit << "'', nanosya pri etom " << "0" << " urona." << endl << endl;
        return 0;
    }

    }
    else
    {
        cout << "''" << Owner->getName() << "'' promahivaetsya po ''" << Enemy->getName() << "'' priyomom ''" << NameHit << "''." << endl << endl;
        return 0;
    }
    return 0;
}

class Room
{
private:
    std::string Name = "Komnata";
    std::string Description = "Opisanie komnaty";
    short int RoomType = -1;
    std::string DescriptionType = "Opisanie tipa komnaty";

public:

void setRandomNameAndDescription(short int rn)
{
    if (rn == 0) { this->Name = "Zabroshennyy malyy zal"; this->Description = "Ty vidish' nebol'shuyu komnatu s kamennymi stenami."; }
    if (rn == 1) { this->Name = "Zabroshennaya komnata s potuhshim kostrom"; this->Description = "Ty vidish' nebol'shuyu komnatu, v kotoroy est' ostatki davnym-davno potuhshego kostra."; }
    if (rn == 2) { this->Name = "Pokosivshayasya kirpichnaya komnata"; this->Description = "Ty vidish' komnatu so stenami iz krasnogo kirpicha. Steny mestami osypalis'."; }
    if (rn == 3) { this->Name = "Staraya komnata s obvalivshimsya potolkom"; this->Description = "Ty vidish' nebol'shuyu komnatu. Potolok obvalilsya, povsyudu kamni i oblomki. Hodit' zdes' trudno. No pridyotsya."; }
    if (rn == 4) { this->Name = "Pechshernyy zal so stalaktitami"; this->Description = "Ty vidish' pechshernyy zal so stalaktitami. Gde-to ryadom kapaet voda."; }
    if (rn == 5) { this->Name = "Komnata s gribochkami"; this->Description = "Ty vidish' komnatu s kuchey gribov. Vryad li oni s'edobny..."; }
    if (rn == 6) { this->Name = "Porosshiy mhom pechshernyy zal"; this->Description = "Ty vidish' komnatu, steny kotoroy pokryty mhom. Vdaleke razdayutsya tihie shagi."; }
    if (rn == 7) { this->Name = "Pechshernyy zal s ozerom"; this->Description = "Ty vidish' bol'shuyu komnatu s ozerom v centre. Vdaleke slyshny shorohi."; }
    if (rn == 8) { this->Name = "Ogromnyy pechshernyy zal s propast'yu"; this->Description = "Ty vidish' ogromnuyu komnatu, v centre kotoroy gigantskaya propast'. Luchshe ne smotret' vniz..."; }
    if (rn == 9) { this->Name = "Komnata pod otkrytym nebom"; this->Description = "Ty vidish' komnatu bez potolka. Daleko vverhu mozhno uvidet' nochnoe nebo. Priyatno dyshat' svezhim vozduhom... no, k sozhaleniyu, zdes' tebe ne vylezti: steny komnaty slishkom kruty."; }
    if (rn == 10) { this->Name = "Komnata s ventilyaciey"; this->Description = "Ty vidish' komnatu s reshyotkami i slyshish' gromkiy gul. Kazhetsya, zdes' est' svezhiy vozduh. No ventilyaciya slishkom uzka, chtoby mozhno bylo prolezt'."; }
    if (rn == 11) { this->Name = "Zabroshennyy zaboy"; this->Description = "Ty vidish' byvshuyu shahtu, v kotoroy uzhe davno nichego ne dobyvayut. Gde-to vdaleke kto-to hodit..."; }
    if (rn == 12) { this->Name = "Ostavlennaya stoyanka"; this->Description = "Ty vidish' komnatu s neskol'kimi pustymi palatkami. Gde-to v otdalenii slyshny shagi."; }
    if (rn == 13) { this->Name = "Staroe pozharichshe"; this->Description = "Ty vidish' komnatu, otdelannuyu chyornym derevom. No, prismotrevshis', zamechaesh', chto derevyannoe pokrytie obgorelo. Vsya komnata zavalena peplom. Vrode by zdes' tiho... vrode by."; }
    if (rn == 14) { this->Name = "Zabroshennaya kamenolomnya"; this->Description = "Ty vidish' komnatu, gde kogda-to dobyvali kamen'. Povsyudu kamennaya kroshka. No seychas eto mesto zabrosheno."; }
    if (rn == 15) { this->Name = "Zabroshennyy podzemnyy barak"; this->Description = "Ty vidish' bol'shuyu komnatu s derevyannym sooruzheniem v centre. Kogda-to ono bylo obitaemo, no seychas ot nego ostalis' lish' ruiny."; }
    if (rn == 16) { this->Name = "Opustevshiy podzemnyy lager'"; this->Description = "Ty vidish' krupnuyu komnatu s zabroshennymi palatkami i ostavlennymi kostrami. Otkuda-to slyshny strannye shorohi..."; }
    if (rn == 17) { this->Name = "Zabroshennaya stolovaya"; this->Description = "Ty vidish' krupnuyu komnatu s ryadami stolov i posudoy, no, pohozhe, ona uzhe davno ne ispol'zuetsya."; }
    if (rn == 18) { this->Name = "Podzemnaya kazarma"; this->Description = "Ty vidish' komnatu s kuchey krovatey. Krovati uzhe prognili... vidimo, eto mesto neobitaemo. No nepodalyoku razdayutsya shagi."; }
    if (rn == 19) { this->Name = "Staryy podzemnyy shtab"; this->Description = "Ty vidish' komnatu s kuchey kart, per'ev, chernil, stolov i stul'ev. Vsyo eto v uzhasnom sostoyanii i davno ne ispol'zovalos'. Vokrug tiho."; }
    if (rn == 20) { this->Name = "Opustevshaya laboratoriya"; this->Description = "Ty vidish' komnatu s kuchey pustyh kolb i sklyanok."; }
    if (rn == 21) { this->Name = "Opustevshiy bol'shoy zal"; this->Description = "Ty vidish' krupnyy kruglyy zal. Nepodalyoku razdayutsya shagi i stuki. Po bokam zala neskol'ko zapertyh dverey."; }
    if (rn == 22) { this->Name = "Staraya zabroshennaya tyur'ma"; this->Description = "Ty vidish' komnatu so razbrosannymi povsyudu kostyami, reshetkami i stul'yami. Vrode by zdes' pusto... ili net?"; }
    if (rn == 23) { this->Name = "Staraya grobnica"; this->Description = "Ty vidish' nebol'shuyu komnatu s sarkofagami. Vse sarkofagi otkryty i pusty, chto stranno."; }
    if (rn == 24) { this->Name = "Staryy mogil'nik"; this->Description = "Ty vidish' komnatu s kuchey razrytyh mogil. V mogilah nichego i nikogo ne vidno... vrode by oni pustye."; }
    if (rn == 25) { this->Name = "Starye podzemnye ruiny"; this->Description = "Ty vidish' ostatki kakogo-to drevnego podzemnogo kompleksa sooruzheniy."; }
    if (rn == 26) { this->Name = "Zabroshennaya komnata s kanalami"; this->Description = "Ty vidish' ogromnuyu komnatu, peresechyonnuyu kuchey kanalov. V nih, vidimo, dolzhna byt' voda, no seychas oni peresohli."; }
    if (rn == 27) { this->Name = "Zabroshennyy kanalizacionnyy kollektor"; this->Description = "Ty vidish'... kanalizaciyu? Stranno. Vokrug shumit voda, a v otdalenii slyshny shagi."; }
    if (rn == 28) { this->Name = "Byvshiy tronnyy zal"; this->Description = "Ty vidish' zal s razbitoy plitkoy i tronom v centre. Sostoyanie zala posredstvennoe. Zdes' davno nikto ne pravit."; }
    if (rn == 29) { this->Name = "Vulkanicheskiy tonnel'"; this->Description = "Ty vidish' pechshernuyu komnatu s chyornymi stenami i krasnovatym svecheniem. Vokrug zharko. Gde-to ryadom slyshny strannye zvuki."; }
    if (rn == 30) { this->Name = "Vulkanicheskiy zal s ozerom lavy"; this->Description = "Ty vidish' pechshernuyu komnatu s chyornymi stenami i ozerom lavy v centre. Vokrug ochen' zharko... Lava burlit."; }
    if (rn == 31) { this->Name = "Kapichshe"; this->Description = "Ty vidish' zal s idolami i zhertvennikom v centre. V otlichie ot bol'shinstva komnat, v etoy yavno kto-to nedavno byl. Pyli malo, na zhertvennike pyatna svezhey krovi. Poblizosti slyshny shagi."; }
    if (rn == 32) { this->Name = "Zabroshennaya pytochnaya"; this->Description = "Ty vidish' komnatu s pytochnymi instrumentami. Est' otnositel'no svezhie sledy krovi. Hm..."; }
    if (rn == 33) { this->Name = "Zal s trupnoy yamoy"; this->Description = "Ty vidish' komnatu, v centre kotoroy yama, do krayov zapolnennaya gniyuchshimi trupami. Svezhimi, hm..."; }
    if (rn == 34) { this->Name = "Tyomnyy hram"; this->Description = "Ty vidish' ogromnuyu komnatu s kolonnami i zhertvennikom. Tebe stanovitsya durno i tyazhelo. Hochetsya uyti otsyuda kak mozhno skoree..."; }
    if (rn == 35) { this->Name = "Pokoi nekromanta"; this->Description = "Ty vidish' komnatu s kuchey grobov i svezhih trupov. Pohozhe, zdes' provodili kakie-to opyty. Vrode by v komnate nikogo net, no takoe chuvstvo, chto za toboy nablyudayut."; }
    if (rn == 36) { this->Name = "Kostyanoe svyatilichshe"; this->Description = "Ty vidish' komnatu, gde vse steny, pol i potolok sdelany iz kostey. Tebe stanovitsya ne po sebe. Ty ne mozhesh' otdelat'sya ot ochshuchsheniya, chto luchshe zdes' ne zaderzhivat'sya."; }
    if (rn == 37) { this->Name = "Post chyornoy strazhi"; this->Description = "Ty vidish' komnatu, gde nahoditsya lager'. On pust, no on svezhiy: dazhe kostyor echshyo ne pogas. Kazhetsya, zdes' ustraivali zasadu... vozmozhno, na tebya. Nedaleko slyshny shagi i stuki."; }
    if (rn == 38) { this->Name = "Hram shyopota"; this->Description = "Ty vidish' komnatu s kuchey cherepov. V tvoey golove razdayutsya strannye golosa: tebe kazhetsya, chto cherepa razgovarivayut s toboy. Pohozhe, gallyucinacii. No luchshe uhodit' otsyuda."; }
    if (rn == 39) { this->Name = "CHyornaya kuznica"; this->Description = "Ty vidish' komnatu s s kuznechnymi instrumentami i chastyami dospehov i oruzhiya. Kuznica yavno ispol'zovalas' sovsem nedavno."; }
}

std::string getName()
{
    return this->Name;
}
void setName(std::string Name1)
{
    this->Name = Name1;
}
std::string getDescription()
{
    return this->Description;
}
void setDescription(std::string Description1)
{
    this->Description = Description1;
}
std::string getDescriptionType()
{
    return this->DescriptionType;
}
void setDescriptionType(std::string DescriptionType1)
{
    this->DescriptionType = DescriptionType1;
}
short int getRoomType()
{
    return this->RoomType;
}
void setRoomType(short int RoomType1)
{
    this->RoomType = RoomType1;
}

void setRandomType(short int rn2)
{
    if (rn2 == 0)  { this->RoomType = 0;  this->DescriptionType = "Ty beglo osmatrivaesh' komnatu i ne vidish' v ney nichego, chto moglo by prigodit'sya. Zatem osmatrivaesh' vnimatel'nee, no vsyo ravno nichego poleznogo ne zamechaesh'. Kazhetsya, zdes' nechego delat'..."; }
    if (rn2 == 1)  { this->RoomType = 1;  this->DescriptionType = "Prismotrevshis', ty zamechaesh', chto v komnate stoit sunduk. Ryadom s nim lezhat shkatulka i para meshochkov... Ty proveryaesh' soderzhimoe i nahodish' nemnogo zolotyh monet. Hm... luchshe, chem nichego."; }
    if (rn2 == 2)  { this->RoomType = 2;  this->DescriptionType = "Oglyadevshis', ty obnaruzhivaesh' stoyki s oruzhiem. Na odnoy iz nih dazhe lezhit chto-to..."; }
    if (rn2 == 3)  { this->RoomType = 3;  this->DescriptionType = "Vnezapno ty slyshish' gromkie i rezkie shagi iz tunnelya na protivopolozhnom konce zala. Kakoe-to melkoe suchshestvo stremitel'no bezhit syuda!.. Tebya obnaruzhili, i vremeni pryatat'sya uzhe net. Tebe ostayotsya lish' gotovit'sya k hudshemu..."; }
    if (rn2 == 4)  { this->RoomType = 4;  this->DescriptionType = "Posmotrev po storonam, ty zamechaesh', chto zdes' zavalyalsya meshok s kuchey steklotary. Prismotrevshis', ty obnaruzhivaesh', chto ne vse butylki pusty. Kazhetsya, zdes' mozhno otyskat' odno ili neskol'ko lechebnyh zeliy. Nu-ka..."; }
    if (rn2 == 5)  { this->RoomType = 5;  this->DescriptionType = "Izuchiv zal, ty obnaruzhivaesh' stoyku s dospehami. Kak ni stranno, koe-chto na ney ostalos'..."; }
    if (rn2 == 6)  { this->RoomType = 6;  this->DescriptionType = "I tut ty slyshish', kak syuda kto-to idyot. Sudya po shagam - chelovek ili sopostavimoe s chelovekom po razmeram suchshestvo. Vot-vot ono vyydyot iz tunnelya, veduchshego v sleduyuchshuyu komnatu..."; }
    if (rn2 == 7)  { this->RoomType = 7;  this->DescriptionType = "Ty zamechaesh' stopku bumag. Sredi nih mozhno otyskat' magicheskie svitki! Eto nuzhno proverit'..."; }
    if (rn2 == 8)  { this->RoomType = 8;  this->DescriptionType = "Gromkie shagi razdayutsya iz drugogo vhoda v komnatu. S toy storony kto-to idyot - i on idyot k tebe..."; }
    if (rn2 == 9)  { this->RoomType = 9;  this->DescriptionType = "Rezko tebe stanovitsya ochen' durno. Kazhetsya, gde-to ryadom ochen' moguchshestvennoe suchshestvo, vladeyuchshee magiey. Ty slyshish' gromkie shagi, napravlyayuchshiesya k tebe. Bezhat' uzhe pozdno..."; }
    if (rn2 == 10) { this->RoomType = 10; this->DescriptionType = "Osmotrevshis' vnimatel'nee, ty ponyal, chto eto ne prostoe mesto. Vpervye za dolgoe vremya ty vstrechaesh' komnatu... s razvilkoy! Sprava est' edva zametnyy put' na volyu, proch' iz etogo podzemel'ya! S drugoy storony, sleva est' tunnel', veduchshiy dal'she, vglub'..."; }
}

Room()
{

}

protected:


};





void Battle(Creature* Play, Creature Enemy)
{
    int Action = 100;
    int ActionEnemy = 100;
    unsigned int raund = 1;
    cout << Enemy.getDescription() << endl << endl;
    cout << "Na tebya napadaet " << Enemy.getName() << endl;
    cout << "/ / / / / / / / /" << endl;
    cout << " Bitva nachalas'!" << endl << endl;


    while ((Play->getHP() >0) && (Enemy.getHP() >0))
    {
    cout << "+   +   +   + " << endl;
    cout << "RAUND " << raund << ": " <<  endl << endl;
    cout << "HP " << Play->getName() << " = " << Play->getHP() << "           i         " << "HP " << Enemy.getName() << " = " << Enemy.getHP() << endl << endl;


    Action = 100;
    ActionEnemy = (rand() % 4) + 1;

if ((Play->getHP() >0) && (Enemy.getHP() >0))
    {
    while ((Action>6) or (Action<1))
    {
    cout << "Chto budesh' primenyat'?" << endl;
    cout << "  1  -  Obychnyy udar          (standartnyy)." << endl;
    cout << "  2  -  Moguchiy udar          (ochen' mnogo urona, nizkiy shans popadaniya)." << endl;
    cout << "  3  -  Tochnyy udar           (vsegda popadaet, nemnogo nizhe uron, krit nevozmozhen)." << endl;
    cout << "  4  -  Broneboynyy udar       (ignoriruet bronyu, snizheny uron, i metkost, i krit)." << endl;
    cout << "  5  -  Lechebnoe zel'e        (polnost'yu vosstanavlivaet HP; odnorazovaya)." << endl;
    cout << "  6  -  Svitok 'Ognennyy shar' (nanosit bol'shoy uron; odnorazovyy)." << endl;


    cin >> Action;

    if (Action==1)
    {
        Enemy.setHP(Enemy.getHP()-BaseHit(Play, &Enemy));
    }
    if (Action==2)
    {
        Enemy.setHP(Enemy.getHP()-MightHit(Play, &Enemy));
    }
    if (Action==3)
    {
        Enemy.setHP(Enemy.getHP()-AccuracyHit(Play, &Enemy));
    }
    if (Action==4)
    {
        Enemy.setHP(Enemy.getHP()-ArmorlessHit(Play, &Enemy));
    }
    if (Action==5)
    {
        if (Play->getHealPotion()>0)
        {
        Play->setHP(Play->getMaxHP());
        Play->setHealPotion(Play->getHealPotion()-1);
        cout << "HP vosstanovleno!" << endl;
        }
        else
        {
            cout << "U tebya net zeliy! Ochen' zhal'... no ty potratil svoy hod, poka eto proveryal." << endl;
        }
    }
    if (Action==6)
    {
        if (Play->getFireball()>0)
        {
        Play->setFireball(Play->getFireball()-1);
        Enemy.setHP(Enemy.getHP()-50);
        if (Enemy.getHP()<0)
        {
        Enemy.setHP(0);

        }
        }
        else
        {
            cout << "U tebya net svitkov! Ochen' zhal'... no ty potratil svoy hod, poka eto proveryal." << endl;
        }
    }

            if ((Action>6) or (Action<1))
            {
            cout << "Ty chto-to ne to delaesh'. Poprobuy snova..." << endl;
            }
    }


    }
     if ((Play->getHP() >0) && (Enemy.getHP() >0))
    {

    if (ActionEnemy==1)
    {
        Play->setHP(Play->getHP()-BaseHit(&Enemy, Play));
    }
    if (ActionEnemy==2)
    {
        Play->setHP(Play->getHP()-MightHit(&Enemy, Play));
    }
    if (ActionEnemy==3)
    {
        Play->setHP(Play->getHP()-AccuracyHit(&Enemy, Play));
    }
    if (ActionEnemy==4)
    {
        Play->setHP(Play->getHP()-ArmorlessHit(&Enemy, Play));
    }

    }


    ++raund;
    }

    if ((Play->getHP() >0))
    {
    cout << endl << endl << "+ + + + + + +" << endl << "TY POBEDIL!" << endl << endl;
    cout << "Obyskav trup, ty koe-chto nashyol..." << endl;
    cout << "Polucheno zolota                    : " << Enemy.getGold() << endl;
    Play->setGold(Play->getGold()+Enemy.getGold());
    cout << "Polucheno zeliy lecheniya           : " << Enemy.getHealPotion() << endl;
    Play->setHealPotion(Play->getHealPotion()+Enemy.getHealPotion());
    cout << "Polucheno svitkov 'Ognennogo shara' : " << Enemy.getFireball() << endl << endl;
    Play->setFireball(Play->getFireball()+Enemy.getFireball());
    cout << endl << endl << endl << endl;






                    cout << "...Osmotrev trup, ty nashyol oruzhie: " << endl;

                    Enemy.getWeapon().InspectCharacteristics();

                    cout << "Pri etom tvoyo oruzhie: " << endl;
                    Play->getWeapon().InspectCharacteristics();


    Action = 100;
    while ((Action!=1) && (Action!=2))
    {
    cout << "Mesta u tebya hvatit lish' na odno oruzhie. I chto delat'?" << endl;
    cout << "1 - vzyat' oruzhie s trupa vmesto svoego." << endl;
    cout << "2 - ne trogat' trup." << endl;


            cin >> Action;
    if (Action==1)
    {

        Play->setWeapon(Enemy.getWeapon());
    }
            if ((Action>2))
            {
            cout << "Ty chto-to ne to delaesh'. Poprobuy snova..." << endl;
            }
    }
    cout << endl << endl << endl << endl;










                        cout << "...Osmotrev trup, ty nashyol dospehi: " << endl;

                    Enemy.getArmor().InspectCharacteristics();

                    cout << "Pri etom tvoi dospehi: " << endl;
                    Play->getArmor().InspectCharacteristics();


    Action = 100;
    while ((Action!=1) && (Action!=2))
    {
    cout << "Mesta u tebya hvatit lish' na odin dospeh. I chto delat'?" << endl;
    cout << "1 - vzyat' dospeh s trupa vmesto svoego." << endl;
    cout << "2 - ne trogat' trup." << endl;


            cin >> Action;
    if (Action==1)
    {

        Play->setArmor(Enemy.getArmor());
    }
            if ((Action>2))
            {
            cout << "Ty chto-to ne to delaesh'. Poprobuy snova..." << endl;
            }
    }



    cout << endl << endl << endl << endl;






















    cout << "Vremya prodolzhat' put'..." << endl << endl << "/ / / / / / /" << endl << endl;
    }
    else
    {
    cout << "......................" << endl;
    cout << "PORAZHENIE!" << endl;
    cout << "......................" << endl;
    }
}


int main()
{
    unsigned int MaxRoomCount=100;
    srand(time(0));
    std::string nameplayer;
    cout << "Vvedi imya svoego personazha: " << endl;
    cin >> nameplayer;

    Player* Pl = new Player(nameplayer);


    cout << "Dobro pozhalovat', " << Pl->getName() << "!" << endl << endl << "______________________________" << endl << endl;

    unsigned int RoomCounter = 1;
    unsigned short int Action = 100;

    cout << "Ty prishyol v sebya v pustoy komnate podzemel'ya. Ryadom nikogo net. Fakel na stene koe-kak osvechshaet pomechshenie." << endl;
    cout << "U tebya voobchshe nichego net i ty nichego ne pomnish'. Kak ty zdes' okazalsya?.." << endl;
    cout << "..." << endl;
    cout << "..Vdaleke slyshny shagi i stuki. Ty ne vpolne ponimaesh', otkuda oni razdayutsya." << endl;
    cout << "..CHyort voz'mi, nado vybirat'sya otsyuda! CHto by eto ni bylo za mesto." << endl << endl;
    cout << "Iz komnaty, v kotoroy ty nahodish'sya, vyhodit odin tunnel'. Dver' nezaperta." << endl << endl;

    Action = 100;
    while ((Action!=1))
    {
    cout << "CHto budesh' delat'?" << endl;
    cout << "1 - idti vperyod po tunnelyu." << endl;
    cout << "2 - osmotret'sya." << endl;
    cout << "3 - proverit' svoi harakteristiki." << endl;

            cin >> Action;

            if ((Action==2))
            {
            cout << "OSMOTR KOMNATY: " << endl;
            cout << "Pustaya komnata. Na stene fakel. Steny kamennye. Otnositel'no temno. Net nichego osobo interesnogo." << endl << endl;
            cout << "Eto komnata nomer " << RoomCounter << "." << endl << endl;
            }
                        if ((Action==3))
            {
                Pl->InspectCharacteristics();
            }
            if ((Action>3))
            {
            cout << "Ty chto-to ne to delaesh'. Poprobuy snova..." << endl;
            }
    }
    cout << endl << "...Sobravshis' s duhom, ty idyosh' dal'she po tunnelyu. Vperedi koridor rasshiryaetsya, i..." << endl << endl;
       ++RoomCounter;

    Room roomarray[MaxRoomCount];
    Weapon weaparray[MaxRoomCount];
    Armor armarray[MaxRoomCount];
    Creature crearray[MaxRoomCount];
    short int rn = 0;
    for (unsigned short int j = 2; j<MaxRoomCount; ++j)
    {

    if ((j<=40) && (j>0))
    {
    rn = (rand() % j);
    }
    else
    {
    rn = (rand() % 40);
    }
    roomarray[j].setRandomNameAndDescription(rn);

                        if (j<((MaxRoomCount)/20))
    {
        rn = 0;
    }
    else
    {
                        if (j<((MaxRoomCount)/10))
        {
            rn = (rand() % 2);
        }
        else
        {
                        if (j<((MaxRoomCount)/7))
            {
            rn = (rand() % 4);
            }
            else
            {
                        if (j<((MaxRoomCount)/5))
                {
                    rn = (rand() % 7);
                }
                else
                {
                        if (j<((MaxRoomCount)/3))
                    {
                        rn = (rand() % 9);
                    }
                    else
                    {
                        if (j<((MaxRoomCount*3)/4))
                        {
                            rn = (rand() % 10);

                        }
                        else
                        {
                                rn = (rand() % 11);
                        }
                    }
                }
            }
        }
    }


    roomarray[j].setRandomType(rn);

    }

    while ((RoomCounter<MaxRoomCount))
    {

       cout << "_______________________________________" << endl << endl;
       cout << "...Ty zahodish' v novuyu komnatu - ''" << roomarray[RoomCounter].getName() << "''. Eto uzhe " << RoomCounter << "-y zal na tvoyom puti." << endl << endl;
       cout << "Tvoya statistika: " << Pl->getHP() << "/" << Pl->getMaxHP() << " zdorov'ya, " << Pl->getGold() << " zolotyh monet, " << Pl->getHealPotion() << " lechebnyh zeliy, " << Pl->getFireball() << " svitkov ''Ognennyy shar'', " << Pl->getWeapon().getName() << ", " << Pl->getArmor().getName() << ". " << endl << endl << endl;
       cout << roomarray[RoomCounter].getDescription() << endl << roomarray[RoomCounter].getDescriptionType() << endl;
       if (roomarray[RoomCounter].getRoomType()==1)
       {
           rn = RoomCounter+3+(rand() % (RoomCounter+1));
           Pl->setGold((Pl->getGold()+rn));
           cout << "...Razoriv eto mesto, ty poluchil " << rn << " zolotyh monet. I to neploho." << endl;
       }
       else
       {
        if (roomarray[RoomCounter].getRoomType()==4)
       {
           rn = 1+(rand() % ((RoomCounter/20)+1) );
           Pl->setHealPotion((Pl->getHealPotion()+rn));
           cout << "...Pereryv steklotaru, ty nashyol " << rn << " lechebnyh zeliy. Navernyaka prigodyatsya v buduchshem..." << endl;
       }
       else
       {
           if (roomarray[RoomCounter].getRoomType()==7)
           {
           rn = 1+(rand() % ((RoomCounter/30)+1) );
           Pl->setFireball((Pl->getFireball()+rn));
           cout << "...Pokopavshis' v bumagah, ty otyskal " << rn << " svitkov s zaklinaniem ''Ognennyy shar''. CHto zhe, lishnimi oni ne budut!" << endl;
           }
           else
            {
                if (roomarray[RoomCounter].getRoomType()==2)
                {
                    rn = 1+(rand() % ((RoomCounter/((MaxRoomCount)/5))+1) );
                    cout << "...Osmotrev vnimatel'no stoyku, ty nashyol oruzhie: " << endl;
                    if (rn==1) { DaggerBuilder* buil = new DaggerBuilder(); weaparray[RoomCounter] = *(buil->GetResult()); delete buil; }
                    if (rn==2) { ClubBuilder* buil = new ClubBuilder(); weaparray[RoomCounter] = *(buil->GetResult()); delete buil; }
                    if (rn==3) { SpearBuilder* buil = new SpearBuilder(); weaparray[RoomCounter] = *(buil->GetResult()); delete buil; }
                    if (rn==4) { AxeBuilder* buil = new AxeBuilder(); weaparray[RoomCounter] = *(buil->GetResult()); delete buil; }
                    if (rn==5) { SwordBuilder* buil = new SwordBuilder(); weaparray[RoomCounter] = *(buil->GetResult()); delete buil; }
                    if (rn==6) { HammerBuilder* buil = new HammerBuilder(); weaparray[RoomCounter] = *(buil->GetResult()); delete buil; }
                    weaparray[RoomCounter].InspectCharacteristics();

                    cout << "Pri etom tvoyo oruzhie: " << endl;
                    Pl->getWeapon().InspectCharacteristics();


    Action = 100;
    while ((Action!=1) && (Action!=2))
    {
    cout << "Mesta u tebya hvatit lish' na odno oruzhie. I chto delat'?" << endl;
    cout << "1 - vzyat' oruzhie so stoyki vmesto svoego." << endl;
    cout << "2 - ne trogat' stoyku." << endl;


            cin >> Action;
    if (Action==1)
    {

        Pl->setWeapon(weaparray[RoomCounter]);
    }
            if ((Action>2))
            {
            cout << "Ty chto-to ne to delaesh'. Poprobuy snova..." << endl;
            }
    }
                }
            else
            {
                if (roomarray[RoomCounter].getRoomType()==5)
                {
                    rn = 1+(rand() % ((RoomCounter/((MaxRoomCount)/3))+1) );
                    cout << "...Proveriv stoyku, ty nashyol dospehi: " << endl;
                    if (rn==1) { armarray[RoomCounter]=OldClothes(); }
                    if (rn==2) { armarray[RoomCounter]=FurArmor(); }
                    if (rn==3) { armarray[RoomCounter]=Chainmail(); }
                    if (rn==4) { armarray[RoomCounter]=Fullplate(); }
                    armarray[RoomCounter].InspectCharacteristics();

                    cout << "Pri etom tvoi dospehi: " << endl;
                    Pl->getArmor().InspectCharacteristics();


    Action = 100;
    while ((Action!=1) && (Action!=2))
    {
    cout << "Ty mozhesh' nadet' lish' odin dospeh. I chto delat'?" << endl;
    cout << "1 - vzyat' dospeh so stoyki vmesto svoego." << endl;
    cout << "2 - ne trogat' stoyku." << endl;


            cin >> Action;
    if (Action==1)
    {
        Pl->setArmor(armarray[RoomCounter]);
    }
            if ((Action>2))
            {
            cout << "Ty chto-to ne to delaesh'. Poprobuy snova..." << endl;
            }
    }
                }
            }
            }
       }
       }
       if (roomarray[RoomCounter].getRoomType()==3)
       {
          Battle(Pl, Goblin());
          if (Pl->getHP()<=0)
          {
            cout << endl << endl << "......................" << endl;
            cout << "TY BYL UBIT, DOYDYA DO " << RoomCounter << " KOMNATY I SOBERYA " << Pl->getGold() << " ZOLOTYH MONET!" << endl;
            cout << "......................" << endl;
            return -1;
          }
       }
       else
       {
       if (roomarray[RoomCounter].getRoomType()==9)
       {
          Battle(Pl, DarkKnight());
          if (Pl->getHP()<=0)
          {
            cout << endl << endl << "......................" << endl;
            cout << "TY BYL UBIT, DOYDYA DO " << RoomCounter << " KOMNATY I SOBERYA " << Pl->getGold() << " ZOLOTYH MONET!" << endl;
            cout << "......................" << endl;
            return -1;
          }
       }
       else
       {
       if (roomarray[RoomCounter].getRoomType()==6)
       {
          rn = (rand() % 2);
          if (rn == 1)
          {
          Battle(Pl, Skeleton());
          if (Pl->getHP()<=0)
          {
            cout << endl << endl << "......................" << endl;
            cout << "TY BYL UBIT, DOYDYA DO " << RoomCounter << " KOMNATY I SOBERYA " << Pl->getGold() << " ZOLOTYH MONET!" << endl;
            cout << "......................" << endl;
            return -1;
          }
          }
          else
          {
          Battle(Pl, Barbarian());
          if (Pl->getHP()<=0)
          {
            cout << endl << endl << "......................" << endl;
            cout << "TY BYL UBIT, DOYDYA DO " << RoomCounter << " KOMNATY I SOBERYA " << Pl->getGold() << " ZOLOTYH MONET!" << endl;
            cout << "......................" << endl;
            return -1;
          }
          }
       }
       else
       {
       if (roomarray[RoomCounter].getRoomType()==8)
       {
          rn = (rand() % 2);
          if (rn == 1)
          {
          Battle(Pl, Orc());
          if (Pl->getHP()<=0)
          {
            cout << endl << endl << "......................" << endl;
            cout << "TY BYL UBIT, DOYDYA DO " << RoomCounter << " KOMNATY I SOBERYA " << Pl->getGold() << " ZOLOTYH MONET!" << endl;
            cout << "......................" << endl;
            return -1;
          }
          }
          else
          {
          Battle(Pl, Marauder());
          if (Pl->getHP()<=0)
          {
            cout << endl << endl << "......................" << endl;
            cout << "TY BYL UBIT, DOYDYA DO " << RoomCounter << " KOMNATY I SOBERYA " << Pl->getGold() << " ZOLOTYH MONET!" << endl;
            cout << "......................" << endl;
            return -1;
          }
          }
       }
       }
       }
       }



       if (roomarray[RoomCounter].getRoomType()==10)
       {
    Action = 100;
    while ((Action!=1))
    {
    cout << "Itak, ty na rasput'e. Mozhno otpravit'sya dal'she, chtoby poluchit' bol'she zolota, a mozhno, nakonec, pokinut' podzemel'e..." << endl << endl;
    cout << "...I chto ty teper' budesh' delat'?" << endl;
    cout << "1 - idti dal'she vglub' podzemel'ya." << endl;
    cout << "2 - pokinut' podzemel'e (KONEC IGRY)." << endl;
    cout << "3 - proverit' svoi harakteristiki." << endl;

            cin >> Action;

            if ((Action==2))
            {
            cout << "+++++++++++++++++++++++++" << endl << endl;
            cout << "Posle dolgih bluzhdaniy tebe, nakonec, ulybnulas' udacha." << endl;
            cout << "Ty smog pokinut' eto proklyatoe mesto. Ura!" << endl;
            cout << "V processe svoih stranstviy ty razdobyl " << Pl->getGold() << " zolotyh monet. Navernyaka mozhno bylo by dobyt' i bol'she, no, navernoe, na pervoe vremya etogo hvatit..." << endl;
            cout << "Kak by to ni bylo, ty zhiv. I eto glavnoe!" << endl << endl;
            cout << "... Vremya podvesti itogi tvoih stranstviy ..." << endl << endl;
                Pl->InspectCharacteristics();
            cout << endl << "... Vremya podvesti itogi tvoih stranstviy ..." << endl << endl;
            cout << "... I eto vsyo? ..." << endl << endl;
            cout << "Da, vsyo." << endl << endl;
            cout << "KONEC" << endl;
            return 0;
            }
            if ((Action==3))
            {
                Pl->InspectCharacteristics();
            }
            if ((Action>3))
            {
            cout << "Ty chto-to ne to delaesh'. Poprobuy snova..." << endl;
            }
    }
    cout << endl << "...Sobravshis' s duhom, ty idyosh' dal'she po tunnelyu. Vperedi koridor rasshiryaetsya, i..." << endl << endl;
       ++RoomCounter;
    }
else
{
    Action = 100;
    while ((Action!=1))
    {
    cout << "Vperyod vedyot odin tunnel'..." << endl << endl;
    cout << "...I chto ty teper' budesh' delat'?" << endl;
    cout << "1 - idti vperyod po tunnelyu." << endl;
    cout << "2 - proverit' svoi harakteristiki." << endl;

            cin >> Action;

            if ((Action==2))
            {
                Pl->InspectCharacteristics();
            }
            if ((Action>2))
            {
            cout << "Ty chto-to ne to delaesh'. Poprobuy snova..." << endl;
            }
    }
    cout << endl << "...Sobravshis' s duhom, ty idyosh' dal'she po tunnelyu. Vperedi koridor rasshiryaetsya, i..." << endl << endl;
       ++RoomCounter;
    }
       }



            cout << "...Ty proshyol uzhe mnogo komnat. Ochen' mnogo. I ochen' ustal. No vdrug ty zametil svet vperedi tunnelya. Nado posmotret' poblizhe!" << endl;
            cout << "I... chto? Eto... eto vyhod?" << endl << endl;
            cout << "+++++++++++++++++++++++++" << endl << endl;
            cout << "Posle dolgih bluzhdaniy tebe, nakonec, ulybnulas' udacha." << endl;
            cout << "Ty smog pokinut' eto proklyatoe mesto. Ura!" << endl;
            cout << "V processe svoih stranstviy ty razdobyl " << Pl->getGold() << " zolotyh monet. Navernyaka mozhno bylo by dobyt' i bol'she, no, navernoe, na pervoe vremya etogo hvatit..." << endl;
            cout << "Kak by to ni bylo, ty zhiv. I eto glavnoe!" << endl << endl;
            cout << "... Vremya podvesti itogi tvoih stranstviy ..." << endl << endl;
                Pl->InspectCharacteristics();
            cout << endl << "... Vremya podvesti itogi tvoih stranstviy ..." << endl << endl;
            cout << "... I eto vsyo? ..." << endl << endl;
            cout << "Da, vsyo." << endl << endl;
            cout << "KONEC" << endl;
            return 0;
}
