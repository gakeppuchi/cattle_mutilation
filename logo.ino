/*-----------------------------------------------------------------------------------------------*/
/*-----                             cattle_mutilation  Ver.1.0                              -----*/
/*-----------------------------------------------------------------------------------------------*/

/*
cattle_mutilation Ver.1.0

Copyright (c) 2021 gakeppuchi

This software is released under the MIT License.
http://opensource.org/licenses/mit-license.php
*/

//-ロゴマーク呼び出し----------------------------------

void logo() {
  M5.Lcd.setTextColor(0x0000);
  M5.Lcd.drawCentreString("Presented by", 130, 70, 2);
  GAKE2(80, 100, 0x0000);
  delay(1000);

  M5.Lcd.setTextColor(0x634c);
  M5.Lcd.drawCentreString("Presented by", 130, 70, 2);
  GAKE2(80, 100, 0x634c);
  delay(100);

  M5.Lcd.setTextColor(0xa554);
  M5.Lcd.drawCentreString("Presented by", 130, 70, 2);
  GAKE2(80, 100, 0xa554);
  delay(100);
  
  M5.Lcd.setTextColor(0xffff);
  M5.Lcd.drawCentreString("Presented by", 130, 70, 2); 
  GAKE2(80, 100, 0xffff);
  delay(1000);

  M5.Lcd.setTextColor(0xa554);
  M5.Lcd.drawCentreString("Presented by", 130, 70, 2);
  GAKE2(80, 100, 0xa554);
  delay(100);

  M5.Lcd.setTextColor(0x634c);
  M5.Lcd.drawCentreString("Presented by", 130, 70, 2);
  GAKE2(80, 100, 0x634c);
  delay(100);

  M5.Lcd.setTextColor(0x0000);
  M5.Lcd.drawCentreString("Presented by", 130, 70, 2);
  GAKE2(80, 100, 0x0000);
  delay(1000);
}

  //-----横長ロゴ----------------------------------
void GAKE2(int x, int y, int z) {
  //ga-------------------------------------------------
    M5.lcd.fillRect(15+x, 2+y, 2, 1, z);
    M5.lcd.fillRect(15+x, 3+y, 3, 1, z);
    M5.lcd.fillRect(15+x, 4+y, 4, 1, z);
    M5.lcd.fillRect(15+x, 5+y, 5, 1, z);
    M5.lcd.fillRect(15+x, 6+y, 6, 6, z);
    M5.lcd.fillRect(14+x, 12+y, 7, 2, z);
    M5.lcd.fillRect(13+x, 14+y, 8, 3, z);
    M5.lcd.fillRect(13+x, 17+y, 13, 1, z);
    M5.lcd.fillRect(12+x, 18+y, 15, 1, z);
    M5.lcd.fillRect(8+x, 19+y, 20, 1, z);
    M5.lcd.fillRect(0+x, 17+y, 1, 1, z);
    M5.lcd.fillRect(0+x, 18+y, 3, 1, z);
    M5.lcd.fillRect(1+x, 19+y, 5, 1, z);
    M5.lcd.fillRect(2+x, 20+y, 27, 1, z);
    M5.lcd.fillRect(3+x, 21+y, 20, 1, z);
    M5.lcd.fillRect(4+x, 22+y, 16, 1, z);
    M5.lcd.fillRect(6+x, 23+y, 13, 1, z);
    M5.lcd.fillRect(10+x, 24+y, 9, 1, z);
    M5.lcd.fillRect(10+x, 25+y, 8, 1, z);
    M5.lcd.fillRect(9+x, 26+y, 9, 1, z);
    M5.lcd.fillRect(9+x, 27+y, 9, 1, z);
    M5.lcd.fillRect(8+x, 28+y, 9, 1, z);
    M5.lcd.fillRect(8+x, 29+y, 9, 1, z);
    M5.lcd.fillRect(7+x, 30+y, 9, 1, z);
    M5.lcd.fillRect(7+x, 31+y, 9, 1, z);
    M5.lcd.fillRect(7+x, 32+y, 8, 1, z);
    M5.lcd.fillRect(7+x, 32+y, 7, 1, z);
    M5.lcd.fillRect(5+x, 33+y, 9, 1, z);
    M5.lcd.fillRect(4+x, 34+y, 9, 1, z);
    M5.lcd.fillRect(2+x, 35+y, 10, 2, z);
    M5.lcd.fillRect(3+x, 37+y, 7, 2, z);
    M5.lcd.fillRect(4+x, 39+y, 5, 1, z);
    M5.lcd.fillRect(5+x, 40+y, 3, 1, z);
    
    M5.lcd.fillRect(28+x, 10+y, 1, 1, z);
    M5.lcd.fillRect(29+x, 11+y, 2, 1, z);
    M5.lcd.fillRect(30+x, 12+y, 2, 1, z);
    M5.lcd.fillRect(30+x, 13+y, 3, 1, z);
    M5.lcd.fillRect(31+x, 14+y, 3, 1, z);
    M5.lcd.fillRect(31+x, 15+y, 4, 1, z);
    M5.lcd.fillRect(32+x, 16+y, 4, 1, z);
    M5.lcd.fillRect(33+x, 17+y, 4, 1, z);
    M5.lcd.fillRect(33+x, 18+y, 5, 1, z);
    M5.lcd.fillRect(34+x, 19+y, 5, 1, z);
    M5.lcd.fillRect(35+x, 20+y, 5, 1, z);
    M5.lcd.fillRect(35+x, 21+y, 6, 1, z);
    M5.lcd.fillRect(36+x, 22+y, 6, 1, z);
    M5.lcd.fillRect(37+x, 23+y, 6, 1, z);
    M5.lcd.fillRect(38+x, 24+y, 6, 1, z);
    M5.lcd.fillRect(39+x, 25+y, 5, 1, z);
    M5.lcd.fillRect(39+x, 26+y, 6, 1, z);
    M5.lcd.fillRect(37+x, 27+y, 8, 1, z);
    M5.lcd.fillRect(37+x, 28+y, 9, 2, z);
    M5.lcd.fillRect(38+x, 30+y, 8, 1, z);
    M5.lcd.fillRect(40+x, 31+y, 6, 1, z);
    M5.lcd.fillRect(41+x, 32+y, 2, 1, z);

    M5.lcd.fillRect(25+x, 21+y, 5, 3, z);
    M5.lcd.fillRect(25+x, 24+y, 6, 2, z);
    M5.lcd.fillRect(25+x, 26+y, 5, 5, z);
    M5.lcd.fillRect(24+x, 31+y, 5, 2, z);
    M5.lcd.fillRect(23+x, 33+y, 6, 2, z);
    M5.lcd.fillRect(22+x, 34+y, 6, 1, z);
    M5.lcd.fillRect(21+x, 35+y, 7, 1, z);
    M5.lcd.fillRect(21+x, 36+y, 6, 1, z);
    M5.lcd.fillRect(21+x, 37+y, 5, 1, z);
    M5.lcd.fillRect(22+x, 38+y, 4, 1, z);
    M5.lcd.fillRect(23+x, 39+y, 2, 1, z);
    
    M5.lcd.fillRect(38+x, 12+y, 1, 1, z);
    M5.lcd.fillRect(38+x, 13+y, 3, 1, z);
    M5.lcd.fillRect(38+x, 14+y, 4, 1, z);
    M5.lcd.fillRect(39+x, 15+y, 5, 1, z);
    M5.lcd.fillRect(40+x, 16+y, 5, 1, z);
    M5.lcd.fillRect(41+x, 17+y, 6, 1, z);
    M5.lcd.fillRect(42+x, 18+y, 5, 1, z);
    M5.lcd.fillRect(43+x, 19+y, 4, 1, z);

    M5.lcd.fillRect(43+x, 10+y, 2, 1, z);
    M5.lcd.fillRect(43+x, 11+y, 4, 1, z);
    M5.lcd.fillRect(44+x, 12+y, 5, 1, z);
    M5.lcd.fillRect(45+x, 13+y, 4, 1, z);
    M5.lcd.fillRect(46+x, 14+y, 3, 1, z);
    
   //ke-------------------------------------------------
    M5.lcd.fillRect(52+x, 7+y, 2, 1, z);
    M5.lcd.fillRect(52+x, 8+y, 3, 1, z);
    M5.lcd.fillRect(53+x, 9+y, 4, 1, z);
    M5.lcd.fillRect(54+x, 10+y, 5, 5, z);
    M5.lcd.fillRect(52+x, 15+y, 6, 4, z);
    M5.lcd.fillRect(51+x, 19+y, 7, 2, z);
    M5.lcd.fillRect(51+x, 21+y, 6, 1, z);
    M5.lcd.fillRect(61+x, 19+y, 1, 1, z);
    M5.lcd.fillRect(60+x, 20+y, 2, 1, z);
    M5.lcd.fillRect(59+x, 21+y, 3, 1, z);
    M5.lcd.fillRect(51+x, 22+y, 10, 3, z);
    M5.lcd.fillRect(52+x, 25+y, 9, 1, z);
    M5.lcd.fillRect(53+x, 26+y, 8, 1, z);
    M5.lcd.fillRect(54+x, 27+y, 6, 1, z);
    M5.lcd.fillRect(55+x, 28+y, 4, 1, z);

    M5.lcd.fillRect(53+x, 8+y, 1, 1, z);
    M5.lcd.fillRect(54+x, 9+y, 3, 1, z);
    
    M5.lcd.fillRect(70+x, 4+y, 4, 1, z);
    M5.lcd.fillRect(72+x, 5+y, 4, 1, z);
    M5.lcd.fillRect(72+x, 6+y, 5, 3, z);
    M5.lcd.fillRect(71+x, 9+y, 7, 2, z);
    M5.lcd.fillRect(71+x, 11+y, 6, 1, z);
    M5.lcd.fillRect(79+x, 11+y, 2, 1, z);
    M5.lcd.fillRect(71+x, 12+y, 12, 1, z);
    M5.lcd.fillRect(72+x, 13+y, 12, 1, z);
    M5.lcd.fillRect(71+x, 14+y, 13, 1, z);
    M5.lcd.fillRect(65+x, 15+y, 18, 1, z);
    M5.lcd.fillRect(66+x, 16+y, 16, 1, z);
    M5.lcd.fillRect(69+x, 17+y, 10, 1, z);
    M5.lcd.fillRect(72+x, 18+y, 5, 5, z);
    
    M5.lcd.fillRect(71+x, 23+y, 6, 3, z);
    M5.lcd.fillRect(71+x, 26+y, 5, 1, z);
    M5.lcd.fillRect(70+x, 27+y, 6, 1, z);
    M5.lcd.fillRect(69+x, 28+y, 7, 1, z);
    M5.lcd.fillRect(68+x, 29+y, 8, 1, z);
    M5.lcd.fillRect(68+x, 30+y, 7, 1, z);
    M5.lcd.fillRect(67+x, 31+y, 7, 1, z);
    M5.lcd.fillRect(66+x, 32+y, 7, 1, z);
    M5.lcd.fillRect(64+x, 33+y, 8, 1, z);
    M5.lcd.fillRect(63+x, 34+y, 6, 1, z);

   //tu-------------------------------------------------
    M5.lcd.fillRect(76+x, 35+y, 2, 1, z);
    M5.lcd.fillRect(77+x, 36+y, 3, 1, z);
    
    M5.lcd.fillRect(86+x, 34+y, 7, 1, z);
    M5.lcd.fillRect(84+x, 35+y, 10, 1, z);
    M5.lcd.fillRect(82+x, 36+y, 13, 1, z);
    
    M5.lcd.fillRect(78+x, 37+y, 11, 1, z);
    M5.lcd.fillRect(79+x, 38+y, 9, 1, z);
    M5.lcd.fillRect(81+x, 39+y, 5, 1, z);
    M5.lcd.fillRect(82+x, 40+y, 2, 1, z);
    
    M5.lcd.fillRect(91+x, 37+y, 5, 4, z);
    M5.lcd.fillRect(90+x, 41+y, 6, 1, z);
    M5.lcd.fillRect(89+x, 42+y, 7, 1, z);
    M5.lcd.fillRect(88+x, 43+y, 7, 1, z);
    M5.lcd.fillRect(87+x, 44+y, 8, 1, z);
    M5.lcd.fillRect(85+x, 45+y, 7, 1, z);

   //pu-------------------------------------------------
    M5.lcd.fillRect(96+x, 19+y, 1, 1, z);
    M5.lcd.fillRect(96+x, 20+y, 2, 1, z);
    M5.lcd.fillRect(95+x, 21+y, 3, 2, z);
    M5.lcd.fillRect(94+x, 23+y, 4, 1, z);
    M5.lcd.fillRect(93+x, 24+y, 5, 1, z);
    M5.lcd.fillRect(92+x, 25+y, 6, 1, z);
    M5.lcd.fillRect(91+x, 26+y, 7, 1, z);
    M5.lcd.fillRect(91+x, 27+y, 6, 3, z);
    M5.lcd.fillRect(92+x, 30+y, 4, 1, z);
    M5.lcd.fillRect(94+x, 31+y, 2, 1, z);

    M5.lcd.fillRect(101+x, 1+y, 1, 1, z);
    M5.lcd.fillRect(102+x, 2+y, 2, 1, z);
    M5.lcd.fillRect(102+x, 3+y, 3, 1, z);
    M5.lcd.fillRect(104+x, 4+y, 2, 1, z);
    M5.lcd.fillRect(104+x, 5+y, 4, 1, z);
    M5.lcd.fillRect(105+x, 6+y, 11, 1, z);
    M5.lcd.fillRect(107+x, 7+y, 11, 1, z);
    M5.lcd.fillRect(109+x, 8+y, 10, 1, z);
    M5.lcd.fillRect(108+x, 9+y, 10, 1, z);
    M5.lcd.fillRect(107+x, 10+y, 9, 1, z);

    M5.lcd.fillRect(107+x, 11+y, 9, 1, z);
    M5.lcd.fillRect(111+x, 12+y, 2, 1, z);
    
    M5.lcd.fillRect(105+x, 13+y, 2, 1, z);
    M5.lcd.fillRect(105+x, 14+y, 3, 2, z);
    M5.lcd.fillRect(106+x, 16+y, 2, 1, z);
    M5.lcd.fillRect(107+x, 17+y, 3, 1, z);
    M5.lcd.fillRect(108+x, 18+y, 3, 1, z);
    M5.lcd.fillRect(109+x, 19+y, 4, 1, z);
    M5.lcd.fillRect(109+x, 20+y, 5, 1, z);
    
    M5.lcd.fillRect(110+x, 21+y, 5, 1, z);
    M5.lcd.fillRect(110+x, 22+y, 6, 1, z);
    M5.lcd.fillRect(111+x, 23+y, 5, 1, z);
    M5.lcd.fillRect(111+x, 24+y, 5, 1, z);
    M5.lcd.fillRect(111+x, 25+y, 5, 1, z);
    M5.lcd.fillRect(111+x, 26+y, 5, 1, z);
    M5.lcd.fillRect(109+x, 27+y, 8, 1, z);

    M5.lcd.fillRect(103+x, 28+y, 2, 1, z);
    M5.lcd.fillRect(108+x, 28+y, 9, 1, z);
    M5.lcd.fillRect(104+x, 29+y, 13, 1, z);
    M5.lcd.fillRect(105+x, 30+y, 11, 1, z);
    M5.lcd.fillRect(106+x, 31+y, 10, 1, z);
    M5.lcd.fillRect(106+x, 32+y, 9, 1, z);
    M5.lcd.fillRect(107+x, 33+y, 7, 1, z);
    M5.lcd.fillRect(109+x, 34+y, 3, 1, z);

    M5.lcd.fillRect(123+x, 0+y, 6, 1, z);
    M5.lcd.fillRect(122+x, 1+y, 8, 1, z);
    M5.lcd.fillRect(121+x, 2+y, 6, 1, z);
    M5.lcd.fillRect(129+x, 2+y, 2, 1, z);
    M5.lcd.fillRect(121+x, 3+y, 5, 1, z);
    M5.lcd.fillRect(129+x, 3+y, 3, 1, z);
    M5.lcd.fillRect(121+x, 4+y, 4, 1, z);
    M5.lcd.fillRect(129+x, 4+y, 3, 1, z);
    
    M5.lcd.fillRect(121+x, 5+y, 3, 1, z);
    M5.lcd.fillRect(129+x, 5+y, 3, 1, z);
    M5.lcd.fillRect(122+x, 6+y, 2, 1, z);
    M5.lcd.fillRect(127+x, 6+y, 5, 1, z);
    M5.lcd.fillRect(122+x, 7+y, 10, 1, z);
    M5.lcd.fillRect(123+x, 8+y, 9, 1, z);
    M5.lcd.fillRect(125+x, 9+y, 5, 1, z);
    
    M5.lcd.fillRect(121+x, 18+y, 2, 1, z);
    M5.lcd.fillRect(122+x, 19+y, 3, 1, z);
    M5.lcd.fillRect(123+x, 20+y, 4, 1, z);
    M5.lcd.fillRect(123+x, 21+y, 5, 1, z);
    M5.lcd.fillRect(124+x, 22+y, 5, 1, z);
    M5.lcd.fillRect(125+x, 23+y, 5, 2, z);
    M5.lcd.fillRect(124+x, 25+y, 7, 1, z);
    M5.lcd.fillRect(123+x, 26+y, 8, 1, z);
    M5.lcd.fillRect(124+x, 27+y, 7, 1, z);
    M5.lcd.fillRect(127+x, 28+y, 4, 1, z);
    
   //chi-------------------------------------------------
    M5.lcd.fillRect(131+x, 13+y, 1, 1, z);
    M5.lcd.fillRect(131+x, 14+y, 2, 1, z);
    M5.lcd.fillRect(132+x, 15+y, 2, 1, z);
    M5.lcd.fillRect(133+x, 16+y, 3, 1, z);
    
    M5.lcd.fillRect(142+x, 9+y, 1, 1, z);
    M5.lcd.fillRect(142+x, 10+y, 3, 1, z);
    M5.lcd.fillRect(142+x, 11+y, 5, 2, z);
    M5.lcd.fillRect(142+x, 13+y, 4, 2, z);
    
    M5.lcd.fillRect(151+x, 10+y, 3, 1, z);
    M5.lcd.fillRect(151+x, 11+y, 5, 1, z);
    M5.lcd.fillRect(150+x, 12+y, 7, 1, z);
    M5.lcd.fillRect(149+x, 13+y, 9, 1, z);
    M5.lcd.fillRect(148+x, 14+y, 10, 1, z);
    
    M5.lcd.fillRect(142+x, 15+y, 15, 1, z);
    M5.lcd.fillRect(141+x, 16+y, 13, 1, z);
    
    M5.lcd.fillRect(134+x, 17+y, 18, 1, z);
    M5.lcd.fillRect(134+x, 18+y, 16, 1, z);
    M5.lcd.fillRect(136+x, 19+y, 12, 1, z);
    M5.lcd.fillRect(137+x, 20+y, 7, 1, z);
    M5.lcd.fillRect(139+x, 21+y, 5, 1, z);
    M5.lcd.fillRect(139+x, 22+y, 4, 1, z);
    M5.lcd.fillRect(138+x, 23+y, 5, 1, z);
    M5.lcd.fillRect(137+x, 24+y, 14, 1, z);
    M5.lcd.fillRect(137+x, 25+y, 17, 1, z);
    M5.lcd.fillRect(136+x, 26+y, 19, 1, z);
    M5.lcd.fillRect(135+x, 27+y, 10, 1, z);
    M5.lcd.fillRect(135+x, 28+y, 8, 1, z);
    M5.lcd.fillRect(136+x, 29+y, 5, 1, z);
    M5.lcd.fillRect(137+x, 30+y, 3, 1, z);
    
    M5.lcd.fillRect(152+x, 27+y, 4, 1, z);
    M5.lcd.fillRect(153+x, 28+y, 4, 1, z);
    M5.lcd.fillRect(153+x, 29+y, 5, 1, z);
    M5.lcd.fillRect(152+x, 30+y, 6, 3, z);
    M5.lcd.fillRect(151+x, 33+y, 7, 1, z);
    M5.lcd.fillRect(150+x, 34+y, 8, 1, z);
    M5.lcd.fillRect(149+x, 35+y, 9, 1, z);
    M5.lcd.fillRect(148+x, 36+y, 9, 1, z);
    M5.lcd.fillRect(147+x, 37+y, 9, 1, z);
    M5.lcd.fillRect(146+x, 38+y, 10, 1, z);
    M5.lcd.fillRect(142+x, 39+y, 13, 1, z);
    M5.lcd.fillRect(134+x, 40+y, 20, 1, z);
    M5.lcd.fillRect(136+x, 41+y, 17, 1, z);
    M5.lcd.fillRect(138+x, 42+y, 13, 1, z);
    M5.lcd.fillRect(141+x, 43+y, 9, 1, z);    
}
