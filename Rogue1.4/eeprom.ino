#define EEPROM_HIGHSCORE 100

void saveHiScore(){
  for(uint8_t i = 0; i < 5; i++){
    EEPROM.put(EEPROM_HIGHSCORE + i * 5, glory[i]);
  }
}

void loadHiScore(){
  for(uint8_t i = 0; i < 5; i++){
    EEPROM.get(EEPROM_HIGHSCORE + i * 5, glory[i]);
  }
}

void clearHiScore(){
  for (uint8_t i = 0; i < 5; i++) {
    glory[i] = {0, 0};
  }
  saveHiScore();
}

void saveStatus(){
  EEPROM.put(120, hero);
  for(int i=0; i<26; i++){
    EEPROM.put(200+i*5, inv[i]);
  }
  for(int i=0; i<4; i++){
    for(int j=0; j<14; j++){
      EEPROM.put(400+1*4+j, ttab[i][j]);
    }
  }
  for(int i=0; i<4; i++){
    EEPROM.put(500+i*2, tknow[i]);
  }
}

void loadStatus(){
  EEPROM.get(120, hero);
  for(int i=0; i<26; i++){
    EEPROM.get(200+i*5, inv[i]);
  }
  for(int i=0; i<4; i++){
    for(int j=0; j<14; j++){
      EEPROM.get(400+1*4+j, ttab[i][j]);
    }
  }
  for(int i=0; i<4; i++){
    EEPROM.get(500+i*2, tknow[i]);
  }
}

