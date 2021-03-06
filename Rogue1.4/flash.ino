void flashHero(){
  if(hero.hblnd==0) {
    drawMap();
    drawThing();
    drawMonst();
  }
//  arduboy.setTextBackground(WHITE);
//  arduboy.fillRect(hx*6+1, hy*8, 6,8,WHITE);
//  font5x7.setTextColor(BLACK);
  locate(hero.hx, hero.hy);
//  font5x7.print('@');
  font5x7.print('/');
  arduboy.display();
  delay(100);
//  arduboy.setTextBackground(BLACK);
//  font5x7.setTextColor(WHITE);
}

void flashMonst(byte num){
  if(hero.hblnd==0) {
    drawMap();
    drawThing();
    drawMonst();
  }
//  arduboy.setTextBackground(WHITE);
//  arduboy.fillRect(mx[num]*6+1, my[num]*8, 6,8,WHITE);
//  font5x7.setTextColor(BLACK);
  locate(mx[num], my[num]);
  if(hero.hblnd == 0 && bitRead(m1[num],6)==0){
//    font5x7.print((char)pgm_read_byte(mname+(ms[num] % 32)));
    font5x7.print('/');
  } else {
    font5x7.print(' ');    
  }
  arduboy.display();
  delay(100);
//  arduboy.setTextBackground(BLACK);
//  font5x7.setTextColor(WHITE);
}

void initHero(){

  for(int i=0; i<IMAX; i++){
    deleteItem(i);
//    ii[i]=0;
//    i1[i]=0;
//    i2[i]=0;
//    i3[i]=0;
//    i4[i]=0;
  }

  hero.hx = 0, hero.hy = 0, 
  
  hero.im = 5, hero.dlv = 1, hero.st = 16, hero.stm = 16, hero.lv = 1;

  hero.hconf = 0, hero.hblnd = 0, hero.hhall = 0, hero.hfast = 0, hero.hslep = 0;
  hero.hmdet = 0, hero.hisee = 0, hero.hlevi = 0, hero.hheld = 0;
  hero.rdex = 0, hero.rstr = 0;

  hero.au = 0, hero.hp = 16, hero.hpm = 16, hero.ex = 0, hero.ht = 0, hero.hh = 400, hero.nl = 10;

  inv[0].ii = 2 * 16 + 0; inv[0].i1 =  1; inv[0].i2 = 0; inv[0].i3 = 0; inv[0].i4 = 0b10000000;
  inv[1].ii = 3 * 16 + 0; inv[1].i1 =  1; inv[1].i2 = 1; inv[1].i3 = 1; inv[1].i4 = 0b00110000;
  inv[2].ii = 3 * 16 + 3; inv[2].i1 =  1; inv[2].i2 = 1; inv[2].i3 = 0; inv[2].i4 = 0b00100000;
  inv[3].ii = 3 * 16 + 5; inv[3].i1 = 30; inv[3].i2 = 0; inv[3].i3 = 0; inv[3].i4 = 0b10100000;
  inv[4].ii = 4 * 16 + 1; inv[4].i1 =  1; inv[4].i2 = 1; inv[4].i3 = 0; inv[4].i4 = 0b00110000;
//  ii[5] = 6 * 16 + findScroll(11); i1[5] = 5; i2[5] = 0; i3[5] = 0; i4[5] = 0b10000000;

}

void initTable(){
  const byte vari[4] = {POMAX, SCMAX, RGMAX, WDMAX};
  for (int v = 0; v < 4; v++) {
    for (int i = 0; i < 50; i++) {
      byte r1 = random(vari[v]);
      byte r2 = random(vari[v]);
      byte tmp = ttab[v][r1];
      ttab[v][r1] = ttab[v][r2];
      ttab[v][r2] = tmp;
    }
  }
  for(int i=0; i<4; i++){
    tknow[i]=0;
  }
}
