/*-----------------------------------------------------------------------------------------------*/
/*-----                             cattle_mutilation  Ver.1.0                              -----*/
/*-----------------------------------------------------------------------------------------------*/

/*
cattle_mutilation Ver.1.0

Copyright (c) 2021 gakeppuchi

This software is released under the MIT License.
http://opensource.org/licenses/mit-license.php
*/

  // OPタイトル1--黄色背景--------------------------------
void OP1() {
  img.fillRect(   0, 0, 320, 240, 0xff00);
}

  // OPタイトル2--黒背景---------------------------------
void OP2() {
  img.fillRect(   0, 0, 60, 240, 0x0000);
  img.fillRect(  60, 0, 10, 220, 0x0000);
  img.fillRect(  70, 0, 10, 200, 0x0000);
  img.fillRect(  80, 0, 10, 180, 0x0000);
  img.fillRect(  90, 0, 10, 160, 0x0000);
  img.fillRect( 100, 0, 10, 140, 0x0000);
  
  img.fillRect( 110, 0, 10, 120, 0x0000);
  img.fillRect( 120, 0, 10, 100, 0x0000);
  img.fillRect( 130, 0, 10,  80, 0x0000);
  img.fillRect( 140, 0, 10,  60, 0x0000);
  img.fillRect( 150, 0, 10,  40, 0x0000);
  img.fillRect( 160, 0, 10,  20, 0x0000);
  img.fillRect( 290, 0, 10,  50, 0x0000);
  img.fillRect( 300, 0, 10, 100, 0x0000);
  img.fillRect( 310, 0, 10, 150, 0x0000);
  img.fillRect( 320, 0, 10, 200, 0x0000);
}

  // OPタイトル3--牛の絵------------------------------------
void OP3(int x) {
  img.fillRect( 110, 170+x, 10,  20, 0x0000);
  img.fillRect( 120, 160+x, 10,  10, 0x0000);
  img.fillRect( 130, 150+x, 10,  50, 0x0000);
  img.fillRect( 140, 130+x, 10,  90, 0x0000);
  img.fillRect( 150, 120+x, 10,  60, 0x0000);
  img.fillRect( 160, 110+x, 10,  60, 0x0000);
  img.fillRect( 170, 100+x, 10,  90, 0x0000);
  img.fillRect( 180,  90+x, 10, 120, 0x0000);
  img.fillRect( 190,  40+x, 10, 110, 0x0000);
  img.fillRect( 200,  30+x, 10, 140, 0x0000);
  img.fillRect( 210,  20+x, 10,  20, 0x0000);
  img.fillRect( 210,  50+x, 10,  80, 0x0000);
  img.fillRect( 220,  50+x, 10,  80, 0x0000);
  img.fillRect( 230,  50+x, 10, 100, 0x0000);
  img.fillRect( 240,  50+x, 10, 120, 0x0000);
  img.fillRect( 250,  20+x, 10,  20, 0x0000);
  img.fillRect( 250,  50+x, 10,  70, 0x0000);
  img.fillRect( 260,  30+x, 10,  90, 0x0000);
  img.fillRect( 270,  90+x, 10,  30, 0x0000);
  img.fillRect( 210,  60+x, 10,  20, 0xffff);
  img.fillRect( 250,  60+x, 10,  20, 0xffff);
  img.fillRect( 230, 100+x, 10,  10, 0xffff);
  img.fillRect( 260, 100+x, 10,  10, 0xffff);
}

  // OPタイトル4---ゲーム名-----------------------------------
void OP4() {
  img.fillRect(  1, 31, 21,  6, 0xffff); //ki
  img.fillRect(  4, 40, 21,  6, 0xffff);
  img.fillRect(  7, 28,  6,  3, 0xffff);
  img.fillRect( 10, 37,  6,  3, 0xffff);
  img.fillRect( 13, 46,  6,  6, 0xffff);
  img.fillRect( 28, 40, 15,  6, 0xffff); //ya
  img.fillRect( 31, 37,  3, 15, 0xffff);
  img.fillRect( 37, 46,  6,  3, 0xffff);
  img.fillRect( 49, 28,  6, 24, 0xffff); //to
  img.fillRect( 55, 34,  3,  3, 0xffff);
  img.fillRect( 55, 37,  9,  6, 0xffff);
  img.fillRect( 67, 46,  6,  6, 0xffff); //ru
  img.fillRect( 70, 28,  6, 21, 0xffff);
  img.fillRect( 79, 28,  6, 24, 0xffff);
  img.fillRect( 85, 43,  6,  6, 0xffff);
  img.fillRect( 85, 49,  6,  3, 0xffff);
  img.fillRect(  1, 58, 18,  6, 0xffff); //mi
  img.fillRect(  1, 67, 18,  6, 0xffff);
  img.fillRect(  1, 76, 18,  6, 0xffff);
  img.fillRect( 22, 67, 12,  6, 0xffff); //yu
  img.fillRect( 28, 73,  6,  3, 0xffff);
  img.fillRect( 22, 76, 15,  6, 0xffff);
  img.fillRect( 40, 67, 24,  6, 0xffff); // -
  img.fillRect( 73, 58, 18,  6, 0xffff); //te
  img.fillRect( 70, 67, 24,  6, 0xffff);
  img.fillRect( 82, 73,  6,  6, 0xffff);
  img.fillRect( 76, 76,  9,  6, 0xffff);
  img.fillRect(100, 79,  6,  3, 0xffff); //i
  img.fillRect( 94, 76, 12,  3, 0xffff);
  img.fillRect( 97, 73,  9,  3, 0xffff);
  img.fillRect(100, 70,  9,  3, 0xffff);
  img.fillRect(103, 67,  6,  3, 0xffff);  
  img.fillRect(  1, 88,  6, 24, 0xffff); //re
  img.fillRect(  7,106,  9,  6, 0xffff);
  img.fillRect( 13,103,  6,  6, 0xffff);
  img.fillRect( 16,100,  6,  6, 0xffff);  
  img.fillRect( 25, 97, 24,  6, 0xffff); //-
  img.fillRect( 52, 88,  9,  6, 0xffff); //si
  img.fillRect( 52, 97,  6,  6, 0xffff);
  img.fillRect( 52,106, 18,  6, 0xffff);
  img.fillRect( 64,103,  6,  6, 0xffff);
  img.fillRect( 67, 88,  6, 18, 0xffff);
  img.fillRect( 76, 97,  6,  3, 0xffff); //yo
  img.fillRect( 76,103,  6,  3, 0xffff);
  img.fillRect( 76,109,  6,  3, 0xffff);
  img.fillRect( 82, 97,  6, 15, 0xffff);
  img.fillRect( 94, 91,  9,  6, 0xffff); //n
  img.fillRect( 94,106, 15,  6, 0xffff);
  img.fillRect(106,103,  6,  6, 0xffff); //n
  img.fillRect(109, 88,  6, 18, 0xffff);  
}
