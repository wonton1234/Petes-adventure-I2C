#include <LiquidCrystal_I2C.h>

byte mario[8] = {
  B01110,
  B01110,
  B00100,
  B01110,
  B10101,
  B00100,
  B01010,
  B10001
};
byte spike[8] = {
  B00000,
  B00000,
  B00000,
  B00100,
  B01110,
  B01110,
  B11111,
  B11111
};
byte box[8] = {
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111
};
byte shot[8] = {
  B00000,
  B00000,
  B00000,
  B01000,
  B11100,
  B01000,
  B00000,
  B00000
};
byte enemy[8] = {
  B00000,
  B00000,
  B00000,
  B00100,
  B01110,
  B10101,
  B11111,
  B01010
};
byte boss[8] = {
  B10101,
  B01110,
  B11111,
  B10101,
  B11111,
  B11011,
  B11111,
  B00000
};
byte rubbel[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00010,
  B10011,
  B11111
};
byte shot2[8] = {
  B00010,
  B00111,
  B00010,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
};

// use 0x3E if it dosent work
LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {
  lcd.begin(16,2);
  lcd.init();
  lcd.backlight();
  lcd.createChar(0, mario);
  lcd.createChar(1, spike);
  lcd.createChar(2, box);
  lcd.createChar(3, shot);
  lcd.createChar(4, enemy);
  lcd.createChar(5, boss);
  lcd.createChar(6, rubbel);
  lcd.createChar(7, shot2);
}

void loop() { 
  int screen = 0;
  //Scene 0
  if(screen == 0){
    lcd.setCursor(3,0);
    lcd.write("PETE'S");
    delay(1000);
    lcd.setCursor(5,1);
    lcd.write("ADVENTURE");
    delay(1500);

    lcd.clear();
    
    lcd.setCursor(3,1);
    lcd.write("the anime");
    delay(250);
  }
  lcd.clear();

  

  
  //Scene 1 _________________________________________________________
  screen = 1;
  if(screen == 1){
  lcd.setCursor(6,1);
  lcd.write(1);
  lcd.setCursor(10,1);
  lcd.write(2);

  //Mario walks up to the spike
  for(int i = 0; i < 6; i++){
    lcd.setCursor(i,1);
    lcd.write(byte(0));
    delay(400);
    lcd.setCursor(i,1);
    lcd.write(" ");
  }
  
  //Mario jumps
  lcd.setCursor(6,0);
  lcd.write(byte(0));
  delay(400);
  lcd.setCursor(6,0);
  lcd.write(" ");
  
  lcd.setCursor(7,1);
  lcd.write(byte(0));
  delay(400);
  lcd.setCursor(7,1);
  lcd.write(" ");


  //Mario walks one more step
  lcd.setCursor(8,1);
  lcd.write(byte(0));
  delay(400);
  lcd.setCursor(8,1);
  lcd.write(" ");


  //Mario jumps on the box and down
  lcd.setCursor(9,0);
  lcd.write(byte(0));
  delay(400);
  lcd.setCursor(9,0);
  lcd.write(" ");
  
  lcd.setCursor(10,0);
  lcd.write(byte(0));
  delay(400);
  lcd.setCursor(10,0);
  lcd.write(" ");

  lcd.setCursor(11,0);
  lcd.write(byte(0));
  delay(400);
  lcd.setCursor(11,0);
  lcd.write(" ");

  lcd.setCursor(12,1);
  lcd.write(byte(0));
  delay(400);
  lcd.setCursor(12,1);
  lcd.write(" ");

  //Mario walks out of the screen
  for(int i = 12; i < 17; i++){
    lcd.setCursor(i,1);
    lcd.write(byte(0));
    delay(400);
    lcd.setCursor(i,1);
    lcd.write(" ");
  }
  lcd.clear();
  }

  
  //NEW SCREEN _____________________________________________________
  screen = 2;
  if(screen == 2){
   
  //Building the scene
   lcd.setCursor(3,1);
   lcd.write(2);

  //Mario walks to the box
  for(int i = 0; i < 2; i++){
    lcd.setCursor(i,1);
    lcd.write(byte(0));
    delay(400);
    lcd.setCursor(i,1);
    lcd.write(" ");
  }

  //Mario jumps on the box and down
  lcd.setCursor(2,0);
  lcd.write(byte(0));
  delay(400);
  lcd.setCursor(2,0);
  lcd.write(" ");

  lcd.setCursor(3,0);
  lcd.write(byte(0));
  delay(400);

  //Enemy walks in
  for(int i = 16; i >= 11; i--){
    lcd.setCursor(i,1);
    lcd.write(byte(4));
    delay(400);
    lcd.setCursor(i,1);
    lcd.write(" ");
  }
  lcd.setCursor(10,1);
  lcd.write(byte(4));
  delay(1000);

  lcd.setCursor(3,0);
  lcd.write(" ");
  
  lcd.setCursor(4,0);
  lcd.write(byte(0));
  delay(400);
  lcd.setCursor(4,0);
  lcd.write(" ");
   
  //Mario walks to the enemy
  for(int i = 5; i < 9; i++){
    lcd.setCursor(i,1);
    lcd.write(byte(0));
    delay(400);
    lcd.setCursor(i,1);
    lcd.write(" ");
  }
  
  //Mario jumps on the enemy
  lcd.setCursor(9,0);
  lcd.write(byte(0));
  delay(400);
  lcd.setCursor(9,0);
  lcd.write(" ");

  lcd.setCursor(10,0);
  lcd.write(byte(0));
  delay(400);
  lcd.setCursor(10,0);
  lcd.write(" ");
  
  lcd.setCursor(10,1);
  lcd.write(byte(0));
  delay(400);
  lcd.setCursor(10,1);
  lcd.write(" ");

  //Mario walks out of the screen
  for(int i = 10; i < 17; i++){
    lcd.setCursor(i,1);
    lcd.write(byte(0));
    delay(400);
    lcd.setCursor(i,1);
    lcd.write(" ");
  }
  lcd.clear();
  }
  //NEW SCREEN _______________________________________________________
  screen = 3;
  if(screen == 3){
  //Building the scene
  lcd.setCursor(3,1);
  lcd.write(1);
  lcd.setCursor(9,1);
  lcd.write(2);
  lcd.setCursor(9,0);
  lcd.write(2);

  //Mario walks to the spike
   for(int i = 0; i < 3; i++){
    lcd.setCursor(i,1);
    lcd.write(byte(0));
    delay(400);
    lcd.setCursor(i,1);
    lcd.write(" ");
  }
  //Mario jumps
  lcd.setCursor(3,0);
  lcd.write(byte(0));
  delay(400);
  lcd.setCursor(3,0);
  lcd.write(" ");
  
  lcd.setCursor(4,1);
  lcd.write(byte(0));
  delay(400);
  lcd.setCursor(4,1);
  lcd.write(" ");

  //Mario walks to the wall
  for(int i = 4; i < 7; i++){
    lcd.setCursor(i,1);
    lcd.write(byte(0));
    delay(400);
    lcd.setCursor(i,1);
    lcd.write(" ");
  }
  lcd.setCursor(7,1);
  lcd.write(byte(0));
  delay(2700);

  //Mario shoots
  lcd.setCursor(8,1);
  lcd.write(byte(3));
  delay(400);
  lcd.setCursor(8,1);
  lcd.write(" ");
  delay(400);
  
  //Wall breaks
  lcd.setCursor(9,0);
  lcd.write(" ");
  lcd.setCursor(9,1);
  lcd.write(byte(6));
  lcd.setCursor(10,1);
  lcd.write(byte(6));
  delay(2000);

  //Mario walks out of the screen
  for(int i = 7; i < 17; i++){
    lcd.setCursor(i,1);
    lcd.write(byte(0));
    delay(400);
    lcd.setCursor(i,1);
    lcd.write(" ");
  }
  lcd.clear();
  }
  
  //NEW SCREEN _________________________________________________________
  screen = 4;
  if(screen == 4){

  //Pete walks in
  for(int i = 0; i < 4; i++){
    lcd.setCursor(i,1);
    lcd.write(byte(0));
    delay(400);
    lcd.setCursor(i,1);
    lcd.write(" ");
  }
  lcd.setCursor(4,1);
  lcd.write(byte(0));
  delay(2000);

  //Boss flies in
  for(int i = 16; i >= 13; i--){
    lcd.setCursor(i,0);
    lcd.write(byte(5));
    delay(400);
    lcd.setCursor(i,0);
    lcd.write(" ");
  }
  lcd.setCursor(12,0);
  lcd.write(byte(5));
  delay(2000);

  //Spikes fall down
  lcd.setCursor(0,0);
  lcd.write(byte(1));
  lcd.setCursor(1,0);
  lcd.write(byte(1));
  lcd.setCursor(2,0);
  lcd.write(byte(1));

  lcd.setCursor(15,0);
  lcd.write(byte(1));
  lcd.setCursor(14,0);
  lcd.write(byte(1));
  lcd.setCursor(13,0);
  lcd.write(byte(1));
  delay(400);
  lcd.setCursor(0,0);
  lcd.write(" ");
  lcd.setCursor(1,0);
  lcd.write(" ");
  lcd.setCursor(2,0);
  lcd.write(" ");

  lcd.setCursor(15,0);
  lcd.write(" ");
  lcd.setCursor(14,0);
  lcd.write(" ");
  lcd.setCursor(13,0);
  lcd.write(" ");
  
  lcd.setCursor(0,1);
  lcd.write(byte(1));
  lcd.setCursor(1,1);
  lcd.write(byte(1));
  lcd.setCursor(2,1);
  lcd.write(byte(1));

  lcd.setCursor(15,1);
  lcd.write(byte(1));
  lcd.setCursor(14,1);
  lcd.write(byte(1));
  lcd.setCursor(13,1);
  lcd.write(byte(1));
  delay(1000);
  
  //Boss talks
  lcd.setCursor(0,0);
  lcd.write("I WILL END U");
  delay(1500);

  //clear the text
  for(int i = 0; i < 12; i++){
  lcd.setCursor(i,0);
  lcd.write(" ");
  }
  //Boss goes down one
  lcd.setCursor(12,0);
  lcd.write(" ");
  lcd.setCursor(12,1);
  lcd.write(byte(5));
  delay(500);
  
  //Boss shoots
  for(int i = 11; i >= 5; i--){
    lcd.setCursor(i,1);
    lcd.write(byte(3));
    delay(300);
    lcd.setCursor(i,1);
    lcd.write(" ");
  }
  delay(100);
  //Pete jumps over the bullet
  lcd.setCursor(4,0);
  lcd.write(byte(0));
  
  lcd.setCursor(4,1);
  lcd.write(" ");
 
  //Bullet passes under Pete
  lcd.setCursor(4,1);
  lcd.write(byte(3));
  delay(300);
  lcd.setCursor(4,1);
  lcd.write(" ");

  lcd.setCursor(3,1);
  lcd.write(byte(3));
  delay(300);
  lcd.setCursor(3,1);
  lcd.write(" ");
  delay(100);
  //Pete lands
  lcd.setCursor(4,1);
  lcd.write(byte(0));
  lcd.setCursor(4,0);
  lcd.write(" ");

  delay(1000);

  //Boss moves up again
  lcd.setCursor(12,0);
  lcd.write(byte(5));
  lcd.setCursor(12,1);
  lcd.write(" ");
  
  delay(700);

  //Spikes from the floor
  for(int i = 12; i >= 5; i--){
    lcd.setCursor(i,1);
    lcd.write(byte(1));
    delay(300);
    lcd.setCursor(i,1);
    lcd.write(" ");
  }
  //Pete jumps
  lcd.setCursor(4,0);
  lcd.write(byte(0));
  lcd.setCursor(4,1);
  lcd.write(" ");

  //Spikes move under Pete
  lcd.setCursor(4,1);
  lcd.write(byte(1));
  delay(300);
  lcd.setCursor(4,1);
  lcd.write(" ");

  lcd.setCursor(3,1);
  lcd.write(byte(1));
  delay(300);
  lcd.setCursor(3,1);
  lcd.write(" ");

  //Pete lands
  lcd.setCursor(4,1);
  lcd.write(byte(0));
  lcd.setCursor(4,0);
  lcd.write(" ");

  delay(1000);

  
  //Boss goes out of screen
  for(int i = 12; i < 17; i++){
    lcd.setCursor(i,0);
    lcd.write(byte(5));
    delay(400);
    lcd.setCursor(i,0);
    lcd.write(" ");
  }
  //Boss flies above Pete
  for(int i = 0; i < 5; i++){
    lcd.setCursor(i,0);
    lcd.write(byte(5));
    delay(400);
    if(i == 4) break;
    lcd.setCursor(i,0);
    lcd.write(" ");
  }
  //Pete moves to the right
    lcd.setCursor(4,1);
    lcd.write(" ");
    lcd.setCursor(5,1);
    lcd.write(byte(0));
    delay(300);

  //Boss crashes down
  lcd.setCursor(4,1);
  lcd.write(byte(5));
  lcd.setCursor(4,0);
  lcd.write(" ");
  delay(700);
  //Boss goes back up
  lcd.setCursor(4,0);
  lcd.write(byte(5));
  lcd.setCursor(4,1);
  lcd.write(" ");
  delay(400);
  
  //Boss goes to the right of Pete
  for(int i = 4; i < 9; i++){
    lcd.setCursor(i,0);
    lcd.write(byte(5));
    delay(400);
    if(i == 8) break;
    lcd.setCursor(i,0);
    lcd.write(" ");
  }

  //Pete shoots
  lcd.setCursor(6,1);
  lcd.write(byte(3));
  delay(400);
  lcd.setCursor(6,1);
  lcd.write(" ");
  
  lcd.setCursor(7,0);
  lcd.write(byte(7));
  delay(200);
  lcd.setCursor(7,0);
  lcd.write(" ");

  //Boss dies
  lcd.setCursor(8,0);
  lcd.write(byte(6));
  delay(500);
  lcd.setCursor(8,0);
  lcd.write(" ");
  
  //Rubbel falls down
  lcd.setCursor(8,1);
  lcd.write(byte(6));
  delay(500);

  //Pete wins
  lcd.setCursor(3,0);
  lcd.write("PETE WINS!");

  delay(1000);
  for(int i = 0; i < 17; i++){
    lcd.setCursor(i,1);
    lcd.write(" ");
  }
  delay(3000);
  lcd.clear();
  }
  delay(2000);
}