/*-----------------------------------------------------------------------------------------------*/
/*-----                             cattle_mutilation  Ver.1.0                              -----*/
/*-----------------------------------------------------------------------------------------------*/

/*
cattle_mutilation Ver.1.0

Copyright (c) 2021 gakeppuchi

This software is released under the MIT License.
http://opensource.org/licenses/mit-license.php
*/

/*---------------------------------------     以下  関数     --------------------------------------*/
/*-----  list.1 : ufo_B, ufo_D, ufo_F,                                                      -----*/
/*-----  list.2 : usi1_A, usi0_B, usi1_B, usi2_B, usi3_B, usi4_B, usi0_D, usi1_D, usi2_D,   -----*/
/*-----           usi3_D, usi4_D, usi0_F, usi1_F, usi2_F, usi3_F, usi4_F, usi1_G,           -----*/
/*-----  list.3 : tonbi_A, tonbi_B, tonbi_C, tonbi_D, tonbi_E, tonbi_F, tonbi_G,            -----*/
/*-----  list.4 : tori_A, tori_B, tori_C, tori_D, tori_E, tori_F, tori_G,                   -----*/
/*-----  list.5 : hikari1_B, hikari2_B, hikari3_B, hikari4_B, hikari1_D, hikari2_D,         -----*/
/*-----           hikari3_D, hikari4_D, hikari1_F, hikari2_F, hikari3_F, hikari4_F,         -----*/
/*-----  list.6 : kusa1_B, kusa2_B, kusa1_D, kusa2_D, kusa1_F, kusa2_F,                     -----*/
/*-----  list.7 : taberu, aruku,                                                            -----*/
/*-----  list.8 : MISS_1, MISS_2, MISS_3,                                                   -----*/

// ufo_B----------------------------------------------
void ufo_B(int z){
  img.fillRect( 20+72,  0+8, 12,  2,  z  );
  img.fillRect( 18+72,  2+8, 18,  2,  z  );
  img.fillRect( 16+72,  4+8, 22,  2,  z  );
  img.fillRect( 14+72,  6+8, 24,  2,  z  );
  img.fillRect( 16+72,  8+8, 24,  2,  z  );
  img.fillRect( 18+72, 10+8, 22,  2,  z  );
  img.fillRect( 20+72, 12+8, 20,  2,  z  );
  img.fillRect( 26+72, 14+8, 12,  2,  z  );
  img.fillRect( 10+72,  8+8,  4,  2,  z  );
  img.fillRect(  6+72, 10+8,  8,  2,  z  );
  img.fillRect(  2+72, 12+8, 14,  2,  z  );
  img.fillRect(  0+72, 14+8, 18,  2,  z  );
  img.fillRect(  2+72, 16+8, 22,  2,  z  );
  img.fillRect(  4+72, 18+8, 46,  2,  z  );
  img.fillRect(  6+72, 20+8, 46,  2,  z  );
  img.fillRect(  8+72, 22+8, 46,  2,  z  );
  img.fillRect( 12+72, 24+8, 38,  2,  z  );
  img.fillRect( 16+72, 26+8, 30,  2,  z  );
  img.fillRect( 24+72, 28+8, 14,  2,  z  );
  img.fillRect( 42+72, 12+8,  2,  2,  z  );
  img.fillRect( 42+72, 14+8,  4,  2,  z  );
  img.fillRect( 40+72, 16+8,  8,  2,  z  );
  img.fillRect(  2+72, 20+8,  2,  2,  z  );
  img.fillRect(  2+72, 22+8,  4,  2,  z  );
  img.fillRect(  4+72, 24+8,  4,  2,  z  );
  img.fillRect(  6+72, 26+8,  4,  2,  z  );
  img.fillRect( 16+72, 30+8,  6,  2,  z  );
  img.fillRect( 18+72, 32+8, 12,  2,  z  );
  img.fillRect( 20+72, 34+8,  8,  2,  z  );
  img.fillRect( 46+72, 28+8,  4,  2,  z  );
  img.fillRect( 40+72, 30+8,  8,  2,  z  );
}

// ufo_D----------------------------------------------
void ufo_D(int z){
  img.fillRect( 24+134, 10, 12,  2,  z  );
  img.fillRect( 20+134, 12, 18,  2,  z  );
  img.fillRect( 18+134, 14, 22,  2,  z  );
  img.fillRect( 16+134, 16, 26,  4,  z  );
  img.fillRect( 18+134, 20, 24,  2,  z  );
  img.fillRect( 22+134, 22, 16,  2,  z  );
  img.fillRect( 12+134, 20,  2,  2,  z  );
  img.fillRect( 10+134, 22,  6,  2,  z  );
  img.fillRect(  6+134, 24, 14,  2,  z  );
  img.fillRect(  2+134, 26, 48,  2,  z  );
  img.fillRect(  0+134, 28, 52,  2,  z  );
  img.fillRect(  4+134, 30, 50,  2,  z  );
  img.fillRect(  6+134, 32, 50,  2,  z  );
  img.fillRect( 10+134, 34, 42,  2,  z  );
  img.fillRect( 16+134, 36, 30,  2,  z  );
  img.fillRect( 22+134, 38, 18,  2,  z  );
  img.fillRect( 44+134, 22,  2,  2,  z  );
  img.fillRect( 40+134, 24,  8,  2,  z  );
  img.fillRect(  6+134, 36,  4,  2,  z  );
  img.fillRect(  8+134, 38,  8,  2,  z  );
  img.fillRect( 10+134, 40,  4,  2,  z  );
  img.fillRect( 22+134, 42, 12,  2,  z  );
  img.fillRect( 24+134, 44,  8,  2,  z  );
  img.fillRect( 46+134, 38,  4,  2,  z  );
  img.fillRect( 40+134, 40,  8,  2,  z  );
  img.fillRect( 42+134, 42,  4,  2,  z  );
}

// ufo_F----------------------------------------------
void ufo_F(int z){
  img.fillRect( 218,  8, 12,  2,  z  );
  img.fillRect( 216, 10, 16,  2,  z  );
  img.fillRect( 214, 12, 20,  2,  z  );
  img.fillRect( 212, 14, 24,  6,  z  );
  img.fillRect( 212, 20, 22,  2,  z  );
  img.fillRect( 214, 22, 16,  2,  z  );
  img.fillRect( 238, 18,  4,  2,  z  );
  img.fillRect( 238, 20, 10,  2,  z  );
  img.fillRect( 236, 22, 16,  2,  z  );
  img.fillRect( 232, 24, 20,  2,  z  );
  img.fillRect( 204, 26, 46,  2,  z  );
  img.fillRect( 202, 28, 46,  2,  z  );
  img.fillRect( 200, 30, 46,  2,  z  );
  img.fillRect( 198, 32, 46,  2,  z  );
  img.fillRect( 202, 34, 40,  2,  z  );
  img.fillRect( 208, 36, 30,  2,  z  );
  img.fillRect( 212, 38, 20,  2,  z  );
  img.fillRect( 208, 22,  2,  2,  z  );
  img.fillRect( 206, 24,  6,  2,  z  );
  img.fillRect( 204, 38,  4,  2,  z  );
  img.fillRect( 204, 40,  8,  2,  z  );
  img.fillRect( 208, 42,  6,  2,  z  );
  img.fillRect( 234, 40,  2,  2,  z  );
  img.fillRect( 224, 42, 12,  2,  z  );
  img.fillRect( 226, 44,  8,  2,  z  );
  img.fillRect( 248, 32,  2,  2,  z  );
  img.fillRect( 246, 34,  4,  2,  z  );
  img.fillRect( 242, 36,  6,  2,  z  );
  img.fillRect( 240, 38,  4,  2,  z  );
}

// usi1_A----------------------------------------------
void usi1_A(int z){
  img.fillRect(  0+4,  8+118,  2, 12,  z  );
  img.fillRect(  2+4,  6+118,  2,  8,  z  );
  img.fillRect(  4+4,  6+118,  2, 14,  z  );
  img.fillRect(  6+4,  6+118,  2,  8,  z  );
  img.fillRect(  8+4,  6+118,  2,  8,  z  );
  img.fillRect( 10+4,  2+118,  2, 12,  z  );
  img.fillRect( 12+4,  0+118,  2, 20,  z  );
  img.fillRect( 14+4,  4+118,  2,  2,  z  );
  img.fillRect( 14+4,  8+118,  2,  2,  z  );
  img.fillRect( 14+4, 12+118,  2,  2,  z  ); 
  img.fillRect( 16+4,  4+118,  2, 16,  z  );
  img.fillRect( 18+4,  0+118,  2,  6,  z  );
  img.fillRect( 18+4,  8+118,  2,  6,  z  );  
  img.fillRect( 20+4,  2+118,  2,  8,  z  );
  img.fillRect( 20+4, 12+118,  2,  2,  z  );
  img.fillRect( 22+4, 10+118,  2,  4,  z  );
}

// usi0_B----------------------------------------------
void usi0_B(int z){
  img.fillRect(  0+26,  32+138,  2,  4,  z  );  //karada
  img.fillRect(  2+26,  30+138,  2,  6,  z  );
  img.fillRect(  4+26,  22+138,  2,  8,  z  );
  img.fillRect(  6+26,  18+138,  2,  4,  z  );
  img.fillRect(  8+26,  16+138,  2, 30,  z  );
  img.fillRect( 10+26,  16+138,  2, 38,  z  );
  img.fillRect( 12+26,  14+138,  4, 40,  z  );
  img.fillRect( 16+26,  14+138,  4, 26,  z  );
  img.fillRect( 20+26,  14+138,  2, 32,  z  );
  img.fillRect( 22+26,  14+138,  6, 40,  z  );
  img.fillRect( 28+26,  14+138,  2, 28,  z  );
  img.fillRect( 30+26,  14+138, 10, 30,  z  );
  img.fillRect( 40+26,  14+138,  4, 28,  z  );
  img.fillRect( 44+26,  14+138,  4, 26,  z  );
  img.fillRect( 48+26,  16+138,  2, 32,  z  );
  img.fillRect( 50+26,  28+138,  2, 26,  z  );
  img.fillRect( 52+26,  30+138,  2, 24,  z  );
  img.fillRect( 54+26,  40+138,  2, 14,  z  );

  img.fillRect( 48+26,   4+138,  2,  6, 0xd69a );  //atama ue
  img.fillRect( 50+26,   2+138,  2, 10, 0xd69a );
  img.fillRect( 52+26,   0+138,  2,  4, 0xd69a );
  img.fillRect( 52+26,   8+138, 18, 20, 0xd69a );
  img.fillRect( 68+26,   0+138,  2,  4, 0xd69a );
  img.fillRect( 70+26,   2+138,  2, 10, 0xd69a );
  img.fillRect( 72+26,   4+138,  2,  6, 0xd69a );
  img.fillRect( 70+26,  18+138,  2, 10, 0xd69a );
  img.fillRect( 72+26,  20+138,  4,  8, 0xd69a );  
  
  img.fillRect( 56+26,  12+138,  2,  4, 0xffff );
  img.fillRect( 66+26,  12+138,  2,  4, 0xffff );
  img.fillRect( 56+26,  22+138,  4,  4, 0xffff );
  img.fillRect( 68+26,  22+138,  4,  4, 0xffff );

  img.fillRect( 56+26,  32+138,  2,  6,  z  );  //atama sita
  img.fillRect( 58+26,  30+138,  2, 20,  z  );
  img.fillRect( 60+26,  34+138, 14, 18,  z  );
  img.fillRect( 74+26,  30+138,  2, 22,  z  );
  img.fillRect( 76+26,  32+138,  2,  6,  z  );
  img.fillRect( 76+26,  42+138,  2, 10,  z  );
  img.fillRect( 78+26,  44+138,  4,  8,  z  );
  
  img.fillRect( 62+26,  38+138,  2,  4, 0xffff );
  img.fillRect( 72+26,  38+138,  2,  4, 0xffff );
  img.fillRect( 62+26,  46+138,  4,  4, 0xffff );
  img.fillRect( 74+26,  46+138,  4,  4, 0xffff );  
}

// usi1_B----------------------------------------------
void usi1_B(int z){
  img.fillRect(  0+26,  32+138,  2,  4,  z  );  //karada
  img.fillRect(  2+26,  30+138,  2,  6,  z  );
  img.fillRect(  4+26,  22+138,  2,  8,  z  );
  img.fillRect(  6+26,  18+138,  2,  4,  z  );
  img.fillRect(  8+26,  16+138,  2, 30,  z  );
  img.fillRect( 10+26,  16+138,  2, 38,  z  );
  img.fillRect( 12+26,  14+138,  4, 40,  z  );
  img.fillRect( 16+26,  14+138,  4, 26,  z  );
  img.fillRect( 20+26,  14+138,  2, 32,  z  );
  img.fillRect( 22+26,  14+138,  6, 40,  z  );
  img.fillRect( 28+26,  14+138,  2, 28,  z  );
  img.fillRect( 30+26,  14+138, 10, 30,  z  );
  img.fillRect( 40+26,  14+138,  4, 28,  z  );
  img.fillRect( 44+26,  14+138,  4, 26,  z  );
  img.fillRect( 48+26,  16+138,  2, 32,  z  );
  img.fillRect( 50+26,  28+138,  2, 26,  z  );
  img.fillRect( 52+26,  30+138,  2, 24,  z  );
  img.fillRect( 54+26,  40+138,  2, 14,  z  );

  img.fillRect( 48+26,   4+138,  2,  6,  z  );  //atama ue
  img.fillRect( 50+26,   2+138,  2, 10,  z  );
  img.fillRect( 52+26,   0+138,  2,  4,  z  );
  img.fillRect( 52+26,   8+138, 18, 20,  z  );
  img.fillRect( 68+26,   0+138,  2,  4,  z  );
  img.fillRect( 70+26,   2+138,  2, 10,  z  );
  img.fillRect( 72+26,   4+138,  2,  6,  z  );
  img.fillRect( 70+26,  18+138,  2, 10,  z  );
  img.fillRect( 72+26,  20+138,  4,  8,  z  );  
  
  img.fillRect( 56+26,  12+138,  2,  4, 0xffff );
  img.fillRect( 66+26,  12+138,  2,  4, 0xffff );
  img.fillRect( 56+26,  22+138,  4,  4, 0xffff );
  img.fillRect( 68+26,  22+138,  4,  4, 0xffff );

  img.fillRect( 56+26,  32+138,  2,  6, 0xd69a );  //atama sita
  img.fillRect( 58+26,  30+138,  2, 20, 0xd69a );
  img.fillRect( 60+26,  34+138, 14, 18, 0xd69a );
  img.fillRect( 74+26,  30+138,  2, 22, 0xd69a );
  img.fillRect( 76+26,  32+138,  2,  6, 0xd69a );
  img.fillRect( 76+26,  42+138,  2, 10, 0xd69a );
  img.fillRect( 78+26,  44+138,  4,  8, 0xd69a );
  
  img.fillRect( 62+26,  38+138,  2,  4, 0xffff );
  img.fillRect( 72+26,  38+138,  2,  4, 0xffff );
  img.fillRect( 62+26,  46+138,  4,  4, 0xffff );
  img.fillRect( 74+26,  46+138,  4,  4, 0xffff );  
}
// usi2_B----------------------------------------------
void usi2_B(int z){
  img.fillRect(  0+40, 130+6,  2,  8,  z  );
  img.fillRect(  2+40, 128+6,  2,  2,  z  );
  img.fillRect(  4+40, 126+6,  2, 14,  z  );
  img.fillRect(  6+40, 124+6,  2, 20,  z  );
  img.fillRect(  8+40, 122+6,  2, 12,  z  );
  img.fillRect( 10+40, 120+6,  2, 14,  z  );
  img.fillRect( 12+40, 118+6,  2, 20,  z  );
  img.fillRect( 14+40, 116+6,  2, 26,  z  );
  img.fillRect( 16+40, 114+6,  2, 18,  z  );
  img.fillRect( 18+40, 112+6,  2, 18,  z  );
  img.fillRect( 20+40, 112+6,  2, 14,  z  );
  
  img.fillRect( 22+40, 102+6,  2, 28,  z  );
  img.fillRect( 24+40, 100+6,  2,  4,  z  );
  img.fillRect( 24+40, 106+6,  2, 28,  z  );
  img.fillRect( 26+40, 106+6,  2, 16,  z  );
  img.fillRect( 28+40, 106+6,  2, 22,  z  );
  img.fillRect( 30+40, 106+6,  2, 26,  z  );
  img.fillRect( 32+40, 100+6,  2,  4,  z  );
  img.fillRect( 32+40, 106+6,  2, 14,  z  );
  img.fillRect( 34+40, 102+6,  2, 18,  z  );
  img.fillRect( 36+40, 114+6,  2,  6,  z  );
  img.fillRect( 24+40, 108+6,  2,  4, 0xffff);
  img.fillRect( 32+40, 108+6,  2,  4, 0xffff);
  img.fillRect( 28+40, 116+6,  2,  2, 0xffff);
  img.fillRect( 34+40, 116+6,  2,  2, 0xffff);
}

// usi3_B----------------------------------------------
void usi3_B(int z){
  img.fillRect(  0+70, 16+62,  2, 12,  z  );
  img.fillRect(  2+70, 14+62,  2,  8,  z  );
  img.fillRect(  4+70, 12+62,  2, 16,  z  );
  img.fillRect(  6+70,  8+62,  2, 14,  z  );
  img.fillRect(  8+70,  2+62,  2, 16,  z  );
  img.fillRect( 10+70,  0+62,  2, 22,  z  );
  img.fillRect( 12+70,  4+62,  2, 12,  z  );
  img.fillRect( 14+70,  4+62,  2, 18,  z  );
  img.fillRect( 16+70,  0+62,  2, 12,  z  );
  img.fillRect( 18+70,  2+62,  2, 10,  z  );
  img.fillRect( 12+70,  6+62,  2,  2, 0xffff);
  img.fillRect( 16+70,  6+62,  2,  2, 0xffff);
}

// usi4_B----------------------------------------------
void usi4_B(int z){
  img.fillRect( 90,  50,  6,  6,  z  );
  img.fillRect( 92,  46,  6,  6,  z  );
}

// usi0_D----------------------------------------------
void usi0_D(int z){
  img.fillRect(  0+124,  38+142,  2,  4,  z  );  //karada
  img.fillRect(  2+124,  24+142,  2, 18,  z  );
  img.fillRect(  4+124,  22+142,  2,  2,  z  );
  img.fillRect(  6+124,  20+142,  2, 22,  z  );
  img.fillRect(  8+124,  18+142,  2, 30,  z  );
  img.fillRect( 10+124,  16+142,  2, 36,  z  );
  img.fillRect( 12+124,  16+142,  4, 38,  z  );
  img.fillRect( 16+124,  16+142,  2, 26,  z  );
  img.fillRect( 18+124,  16+142,  2, 32,  z  );
  img.fillRect( 20+124,  16+142,  6, 38,  z  );
  img.fillRect( 26+124,  16+142,  2, 26,  z  );
  img.fillRect( 28+124,  16+142, 12, 28,  z  );
  img.fillRect( 40+124,  16+142,  4, 26,  z  );
  img.fillRect( 44+124,  18+142,  2, 30,  z  );
  img.fillRect( 46+124,  28+142,  2, 26,  z  );
  img.fillRect( 48+124,  30+142,  2, 24,  z  );
  img.fillRect( 50+124,  40+142,  2, 14,  z  );
  
  img.fillRect( 44+124,   4+142,  2,  6, 0xd69a );  //atama ue
  img.fillRect( 46+124,   2+142,  2, 10, 0xd69a );
  img.fillRect( 48+124,   0+142,  2,  4, 0xd69a );
  img.fillRect( 48+124,   8+142, 18, 20, 0xd69a );
  img.fillRect( 64+124,   0+142,  2,  4, 0xd69a );
  img.fillRect( 66+124,   2+142,  2, 10, 0xd69a );
  img.fillRect( 68+124,   4+142,  2,  6, 0xd69a );
  img.fillRect( 66+124,  18+142,  2, 10, 0xd69a );
  img.fillRect( 68+124,  20+142,  4,  8, 0xd69a );  
  
  img.fillRect( 52+124,  12+142,  2,  4, 0xffff );
  img.fillRect( 62+124,  12+142,  2,  4, 0xffff );
  img.fillRect( 52+124,  22+142,  4,  4, 0xffff );
  img.fillRect( 64+124,  22+142,  4,  4, 0xffff );

  img.fillRect( 52+124,  32+142,  2,  6,  z  );  //atama sita
  img.fillRect( 54+124,  30+142,  2, 20,  z  );
  img.fillRect( 56+124,  34+142, 14, 18,  z  );
  img.fillRect( 70+124,  30+142,  2, 22,  z  );
  img.fillRect( 72+124,  32+142,  2,  6,  z  );
  img.fillRect( 72+124,  42+142,  2, 10,  z  );
  img.fillRect( 74+124,  44+142,  4,  8,  z  );
  
  img.fillRect( 58+124,  38+142,  2,  4, 0xffff );
  img.fillRect( 68+124,  38+142,  2,  4, 0xffff );
  img.fillRect( 58+124,  46+142,  4,  4, 0xffff );
  img.fillRect( 70+124,  46+142,  4,  4, 0xffff );  
}


// usi1_D----------------------------------------------
void usi1_D(int z){
  img.fillRect(  0+124,  38+142,  2,  4,  z  );  //karada
  img.fillRect(  2+124,  24+142,  2, 18,  z  );
  img.fillRect(  4+124,  22+142,  2,  2,  z  );
  img.fillRect(  6+124,  20+142,  2, 22,  z  );
  img.fillRect(  8+124,  18+142,  2, 30,  z  );
  img.fillRect( 10+124,  16+142,  2, 36,  z  );
  img.fillRect( 12+124,  16+142,  4, 38,  z  );
  img.fillRect( 16+124,  16+142,  2, 26,  z  );
  img.fillRect( 18+124,  16+142,  2, 32,  z  );
  img.fillRect( 20+124,  16+142,  6, 38,  z  );
  img.fillRect( 26+124,  16+142,  2, 26,  z  );
  img.fillRect( 28+124,  16+142, 12, 28,  z  );
  img.fillRect( 40+124,  16+142,  4, 26,  z  );
  img.fillRect( 44+124,  18+142,  2, 30,  z  );
  img.fillRect( 46+124,  28+142,  2, 26,  z  );
  img.fillRect( 48+124,  30+142,  2, 24,  z  );
  img.fillRect( 50+124,  40+142,  2, 14,  z  );
  
  img.fillRect( 44+124,   4+142,  2,  6,  z  );  //atama ue
  img.fillRect( 46+124,   2+142,  2, 10,  z  );
  img.fillRect( 48+124,   0+142,  2,  4,  z  );
  img.fillRect( 48+124,   8+142, 18, 20,  z  );
  img.fillRect( 64+124,   0+142,  2,  4,  z  );
  img.fillRect( 66+124,   2+142,  2, 10,  z  );
  img.fillRect( 68+124,   4+142,  2,  6,  z  );
  img.fillRect( 66+124,  18+142,  2, 10,  z  );
  img.fillRect( 68+124,  20+142,  4,  8,  z  );  
  
  img.fillRect( 52+124,  12+142,  2,  4, 0xffff );
  img.fillRect( 62+124,  12+142,  2,  4, 0xffff );
  img.fillRect( 52+124,  22+142,  4,  4, 0xffff );
  img.fillRect( 64+124,  22+142,  4,  4, 0xffff );

  img.fillRect( 52+124,  32+142,  2,  6, 0xd69a );  //atama sita
  img.fillRect( 54+124,  30+142,  2, 20, 0xd69a );
  img.fillRect( 56+124,  34+142, 14, 18, 0xd69a );
  img.fillRect( 70+124,  30+142,  2, 22, 0xd69a );
  img.fillRect( 72+124,  32+142,  2,  6, 0xd69a );
  img.fillRect( 72+124,  42+142,  2, 10, 0xd69a );
  img.fillRect( 74+124,  44+142,  4,  8, 0xd69a );
  
  img.fillRect( 58+124,  38+142,  2,  4, 0xffff );
  img.fillRect( 68+124,  38+142,  2,  4, 0xffff );
  img.fillRect( 58+124,  46+142,  4,  4, 0xffff );
  img.fillRect( 70+124,  46+142,  4,  4, 0xffff );  
}
// usi2_D----------------------------------------------
void usi2_D(int z){
  img.fillRect(  0+132, 32+114,  2,  8,  z  );
  img.fillRect(  2+132, 30+114,  2,  2,  z  );
  img.fillRect(  4+132, 26+114,  2, 12,  z  );
  img.fillRect(  6+132, 22+114,  2, 20,  z  );
  img.fillRect(  8+132, 18+114,  2, 12,  z  );
  img.fillRect( 10+132, 16+114,  2, 14,  z  );
  img.fillRect( 12+132, 14+114,  2, 20,  z  );
  img.fillRect( 14+132, 12+114,  2, 26,  z  );
  img.fillRect( 16+132,  4+114,  2, 24,  z  );
  img.fillRect( 18+132,  2+114,  2, 30,  z  );
  img.fillRect( 20+132,  0+114,  2,  4,  z  );
  
  img.fillRect( 20+132,  6+114,  2, 18,  z  );
  img.fillRect( 22+132,  6+114,  2, 18,  z  );
  img.fillRect( 24+132,  6+114,  2, 22,  z  );
  img.fillRect( 26+132,  6+114,  2, 26,  z  );
  img.fillRect( 28+132,  0+114,  2,  4,  z  );
  img.fillRect( 28+132,  6+114,  2, 14,  z  );
  img.fillRect( 30+132,  2+114,  2, 18,  z  );
  img.fillRect( 32+132, 14+114,  2,  6,  z  );
  img.fillRect( 20+132,  8+114,  2,  4, 0xffff);
  img.fillRect( 28+132,  8+114,  2,  4, 0xffff);
  img.fillRect( 24+132, 16+114,  2,  2, 0xffff);
  img.fillRect( 30+132, 16+114,  2,  2, 0xffff);
}

// usi3_D----------------------------------------------
void usi3_D(int z){
  img.fillRect(  0+152, 14+62,  2, 14,  z  );
  img.fillRect(  2+152, 12+62,  2, 10,  z  );
  img.fillRect(  4+152, 10+62,  2, 18,  z  );
  img.fillRect(  6+152,  2+62,  2, 16,  z  );
  img.fillRect(  8+152,  0+62,  2, 24,  z  );
  img.fillRect( 10+152,  4+62,  2, 14,  z  );
  img.fillRect( 12+152,  4+62,  2, 20,  z  );
  img.fillRect( 14+152,  0+62,  2, 12,  z  );
  img.fillRect( 16+152,  2+62,  2, 10,  z  );
  img.fillRect( 10+152,  6+62,  2,  2, 0xffff);
  img.fillRect( 14+152,  6+62,  2,  2, 0xffff);
}

// usi4_D----------------------------------------------
void usi4_D(int z){
  img.fillRect( 158,  52,  6,  6,  z  );
  img.fillRect( 160,  48,  6,  6,  z  );
}

// usi0_F----------------------------------------------
void usi0_F(int z){
  img.fillRect(  0+218,  34+136,  2,  4,  z  );  //karada
  img.fillRect(  2+218,  20+136,  2, 18,  z  );
  img.fillRect(  4+218,  18+136,  2,  2,  z  );
  img.fillRect(  6+218,  16+136,  2, 22,  z  );
  img.fillRect(  8+218,  14+136,  2, 32,  z  );
  img.fillRect( 10+218,  14+136,  2, 38,  z  );
  img.fillRect( 12+218,  12+136,  4, 40,  z  );
  img.fillRect( 16+218,  12+136,  2, 26,  z  );
  img.fillRect( 18+218,  12+136,  2, 34,  z  );
  img.fillRect( 20+218,  12+136,  6, 40,  z  );
  img.fillRect( 26+218,  12+136,  2, 26,  z  );
  img.fillRect( 28+218,  12+136,  4, 28,  z  );
  img.fillRect( 32+218,  12+136,  6, 30,  z  );
  img.fillRect( 38+218,  14+136,  2, 26,  z  );
  img.fillRect( 40+218,  18+136,  2, 30,  z  );
  img.fillRect( 42+218,  28+136,  2, 24,  z  );
  img.fillRect( 44+218,  30+136,  2, 22,  z  );
  img.fillRect( 46+218,  40+136,  2, 12,  z  );
  
  img.fillRect( 40+218,   4+136,  2,  6, 0xd69a );  //atama ue
  img.fillRect( 42+218,   2+136,  2, 10, 0xd69a );
  img.fillRect( 44+218,   0+136,  2,  4, 0xd69a );
  img.fillRect( 44+218,   8+136, 18, 20, 0xd69a );
  img.fillRect( 60+218,   0+136,  2,  4, 0xd69a );
  img.fillRect( 62+218,   2+136,  2, 10, 0xd69a );
  img.fillRect( 64+218,   4+136,  2,  6, 0xd69a );
  img.fillRect( 62+218,  18+136,  2, 10, 0xd69a );
  img.fillRect( 64+218,  20+136,  4,  8, 0xd69a );  
  
  img.fillRect( 48+218,  12+136,  2,  4, 0xffff );
  img.fillRect( 58+218,  12+136,  2,  4, 0xffff );
  img.fillRect( 48+218,  22+136,  4,  4, 0xffff );
  img.fillRect( 60+218,  22+136,  4,  4, 0xffff );

  img.fillRect( 48+218,  32+136,  2,  6,  z  );  //atama sita
  img.fillRect( 50+218,  30+136,  2, 20,  z  );
  img.fillRect( 52+218,  34+136, 14, 18,  z  );
  img.fillRect( 66+218,  30+136,  2, 22,  z  );
  img.fillRect( 68+218,  32+136,  2,  6,  z  );
  img.fillRect( 68+218,  42+136,  2, 10,  z  );
  img.fillRect( 70+218,  44+136,  4,  8,  z  );
  
  img.fillRect( 54+218,  38+136,  2,  4, 0xffff );
  img.fillRect( 64+218,  38+136,  2,  4, 0xffff );
  img.fillRect( 54+218,  46+136,  4,  4, 0xffff );
  img.fillRect( 66+218,  46+136,  4,  4, 0xffff );  
}

// usi1_F----------------------------------------------
void usi1_F(int z){
  img.fillRect(  0+218,  34+136,  2,  4,  z  );  //karada
  img.fillRect(  2+218,  20+136,  2, 18,  z  );
  img.fillRect(  4+218,  18+136,  2,  2,  z  );
  img.fillRect(  6+218,  16+136,  2, 22,  z  );
  img.fillRect(  8+218,  14+136,  2, 32,  z  );
  img.fillRect( 10+218,  14+136,  2, 38,  z  );
  img.fillRect( 12+218,  12+136,  4, 40,  z  );
  img.fillRect( 16+218,  12+136,  2, 26,  z  );
  img.fillRect( 18+218,  12+136,  2, 34,  z  );
  img.fillRect( 20+218,  12+136,  6, 40,  z  );
  img.fillRect( 26+218,  12+136,  2, 26,  z  );
  img.fillRect( 28+218,  12+136,  4, 28,  z  );
  img.fillRect( 32+218,  12+136,  6, 30,  z  );
  img.fillRect( 38+218,  14+136,  2, 26,  z  );
  img.fillRect( 40+218,  18+136,  2, 30,  z  );
  img.fillRect( 42+218,  28+136,  2, 24,  z  );
  img.fillRect( 44+218,  30+136,  2, 22,  z  );
  img.fillRect( 46+218,  40+136,  2, 12,  z  );
  
  img.fillRect( 40+218,   4+136,  2,  6,  z  );  //atama ue
  img.fillRect( 42+218,   2+136,  2, 10,  z  );
  img.fillRect( 44+218,   0+136,  2,  4,  z  );
  img.fillRect( 44+218,   8+136, 18, 20,  z  );
  img.fillRect( 60+218,   0+136,  2,  4,  z  );
  img.fillRect( 62+218,   2+136,  2, 10,  z  );
  img.fillRect( 64+218,   4+136,  2,  6,  z  );
  img.fillRect( 62+218,  18+136,  2, 10,  z  );
  img.fillRect( 64+218,  20+136,  4,  8,  z  );  
  
  img.fillRect( 48+218,  12+136,  2,  4, 0xffff );
  img.fillRect( 58+218,  12+136,  2,  4, 0xffff );
  img.fillRect( 48+218,  22+136,  4,  4, 0xffff );
  img.fillRect( 60+218,  22+136,  4,  4, 0xffff );

  img.fillRect( 48+218,  32+136,  2,  6, 0xd69a );  //atama sita
  img.fillRect( 50+218,  30+136,  2, 20, 0xd69a );
  img.fillRect( 52+218,  34+136, 14, 18, 0xd69a );
  img.fillRect( 66+218,  30+136,  2, 22, 0xd69a );
  img.fillRect( 68+218,  32+136,  2,  6, 0xd69a );
  img.fillRect( 68+218,  42+136,  2, 10, 0xd69a );
  img.fillRect( 70+218,  44+136,  4,  8, 0xd69a );
  
  img.fillRect( 54+218,  38+136,  2,  4, 0xffff );
  img.fillRect( 66+218,  38+136,  2,  4, 0xffff );
  img.fillRect( 54+218,  46+136,  4,  4, 0xffff );
  img.fillRect( 66+218,  46+136,  4,  4, 0xffff );  
}

// usi2_F----------------------------------------------
void usi2_F(int z){
  img.fillRect(  0+220, 32+110,  2,  8,  z  );
  img.fillRect(  2+220, 30+110,  2,  2,  z  );
  img.fillRect(  4+220, 26+110,  2, 12,  z  );
  img.fillRect(  6+220, 22+110,  2, 20,  z  );
  img.fillRect(  8+220, 18+110,  2, 12,  z  );
  img.fillRect( 10+220, 16+110,  2, 14,  z  );
  img.fillRect( 12+220, 14+110,  2, 20,  z  );
  img.fillRect( 14+220, 12+110,  2, 26,  z  );
  img.fillRect( 16+220,  4+110,  2, 24,  z  );
  img.fillRect( 18+220,  2+110,  2, 30,  z  );
  img.fillRect( 20+220,  0+110,  2,  4,  z  );
  
  img.fillRect( 20+220,  6+110,  2, 18,  z  );
  img.fillRect( 22+220,  6+110,  2, 18,  z  );
  img.fillRect( 24+220,  6+110,  2, 22,  z  );
  img.fillRect( 26+220,  6+110,  2, 26,  z  );
  img.fillRect( 28+220,  0+110,  2,  4,  z  );
  img.fillRect( 28+220,  6+110,  2, 14,  z  );
  img.fillRect( 30+220,  2+110,  2, 18,  z  );
  img.fillRect( 32+220, 14+110,  2,  6,  z  );
  img.fillRect( 20+220,  8+110,  2,  4, 0xffff);
  img.fillRect( 28+220,  8+110,  2,  4, 0xffff);
  img.fillRect( 24+220, 16+110,  2,  2, 0xffff);
  img.fillRect( 30+220, 16+110,  2,  2, 0xffff);
}

// usi3_F----------------------------------------------
void usi3_F(int z){
  img.fillRect(  0+224, 20+58,  2, 12,  z  );
  img.fillRect(  2+224, 14+58,  2, 12,  z  );
  img.fillRect(  4+224, 10+58,  2, 22,  z  );
  img.fillRect(  6+224,  8+58,  2, 16,  z  );
  img.fillRect(  8+224,  2+58,  2, 18,  z  );
  img.fillRect( 10+224,  0+58,  2, 26,  z  );
  img.fillRect( 12+224,  4+58,  2, 12,  z  );
  img.fillRect( 14+224,  4+58,  2, 20,  z  );
  img.fillRect( 16+224,  0+58,  2, 12,  z  );
  img.fillRect( 18+224,  2+58,  2, 10,  z  );
  img.fillRect( 12+224,  6+58,  2,  2, 0xffff);
  img.fillRect( 16+224,  6+58,  2,  2, 0xffff);
}

// usi4_F----------------------------------------------
void usi4_F(int z){
  img.fillRect(  0+226,  4+48,  6,  6,  z  );
  img.fillRect(  2+226,  0+48,  6,  6,  z  );
}

// usi1_G----------------------------------------------
void usi1_G(int z){
  img.fillRect(  0+294,  8+126,  2, 12,  z  );
  img.fillRect(  2+294,  6+126,  2,  8,  z  );
  img.fillRect(  4+294,  6+126,  2, 14,  z  );
  img.fillRect(  6+294,  6+126,  2,  8,  z  );
  img.fillRect(  8+294,  6+126,  2,  8,  z  );
  img.fillRect( 10+294,  2+126,  2, 12,  z  );
  img.fillRect( 12+294,  0+126,  2, 20,  z  );
  img.fillRect( 14+294,  4+126,  2,  2,  z  );
  img.fillRect( 14+294,  8+126,  2,  2,  z  );
  img.fillRect( 14+294, 12+126,  2,  2,  z  ); 
  img.fillRect( 16+294,  4+126,  2, 16,  z  );
  img.fillRect( 18+294,  0+126,  2,  6,  z  );
  img.fillRect( 18+294,  8+126,  2,  6,  z  );  
  img.fillRect( 20+294,  2+126,  2,  8,  z  );
  img.fillRect( 20+294, 12+126,  2,  2,  z  );
  img.fillRect( 22+294, 10+126,  2,  4,  z  );
}
// tonbi_A----------------------------------------------
void tonbi_A(int z){
  img.fillRect( 4+28,  0+64, 14,  2,  z  );
  img.fillRect( 2+28,  2+64, 18,  2,  z  );
  img.fillRect(10+28,  4+64, 10,  2,  z  );
  img.fillRect(12+28,  6+64,  6,  2,  z  );
  img.fillRect(10+28,  8+64, 14,  2,  z  );
  img.fillRect( 0+28, 10+64,  4,  2,  z  );
  img.fillRect( 6+28, 10+64, 16,  2,  z  );
  img.fillRect(24+28, 10+64,  2,  2,  z  );
  img.fillRect( 2+28, 12+64, 22,  2,  z  );
  img.fillRect( 0+28, 14+64,  4,  2,  z  );
  img.fillRect( 8+28, 14+64, 14,  2,  z  );
  img.fillRect(18+28, 16+64,  4,  2,  z  );
  img.fillRect(16+28, 18+64,  8,  2,  z  );
  img.fillRect(12+28, 20+64, 12,  2,  z  );
  img.fillRect(10+28, 22+64, 12,  2,  z  );
}
// tonbi_B----------------------------------------------
void tonbi_B(int z){
  img.fillRect( 4+78,  0+86, 14,  2,  z  );
  img.fillRect( 2+78,  2+86, 18,  2,  z  );
  img.fillRect(10+78,  4+86, 10,  2,  z  );
  img.fillRect(12+78,  6+86,  6,  2,  z  );
  img.fillRect(10+78,  8+86, 14,  2,  z  );
  img.fillRect( 0+78, 10+86,  4,  2,  z  );
  img.fillRect( 6+78, 10+86, 16,  2,  z  );
  img.fillRect(24+78, 10+86,  2,  2,  z  );
  img.fillRect( 2+78, 12+86, 22,  2,  z  );
  img.fillRect( 0+78, 14+86,  4,  2,  z  );
  img.fillRect( 8+78, 14+86, 14,  2,  z  );
  img.fillRect(18+78, 16+86,  4,  2,  z  );
  img.fillRect(16+78, 18+86,  8,  2,  z  );
  img.fillRect(12+78, 20+86, 12,  2,  z  );
  img.fillRect(10+78, 22+86, 12,  2,  z  );
}
// tonbi_C----------------------------------------------
void tonbi_C(int z){
  img.fillRect( 4+116,  0+50, 14,  2,  z  );
  img.fillRect( 2+116,  2+50, 18,  2,  z  );
  img.fillRect(10+116,  4+50, 10,  2,  z  );
  img.fillRect(12+116,  6+50,  6,  2,  z  );
  img.fillRect(10+116,  8+50, 14,  2,  z  );
  img.fillRect( 0+116, 10+50,  4,  2,  z  );
  img.fillRect( 6+116, 10+50, 16,  2,  z  );
  img.fillRect(24+116, 10+50,  2,  2,  z  );
  img.fillRect( 2+116, 12+50, 22,  2,  z  );
  img.fillRect( 0+116, 14+50,  4,  2,  z  );
  img.fillRect( 8+116, 14+50, 14,  2,  z  );
  img.fillRect(18+116, 16+50,  4,  2,  z  );
  img.fillRect(16+116, 18+50,  8,  2,  z  );
  img.fillRect(12+116, 20+50, 12,  2,  z  );
  img.fillRect(10+116, 22+50, 12,  2,  z  );
}
// tonbi_D----------------------------------------------
void tonbi_D(int z){
  img.fillRect( 4+156,  0+90, 14,  2,  z  );
  img.fillRect( 2+156,  2+90, 18,  2,  z  );
  img.fillRect(10+156,  4+90, 10,  2,  z  );
  img.fillRect(12+156,  6+90,  6,  2,  z  );
  img.fillRect(10+156,  8+90, 14,  2,  z  );
  img.fillRect( 0+156, 10+90,  4,  2,  z  );
  img.fillRect( 6+156, 10+90, 16,  2,  z  );
  img.fillRect(24+156, 10+90,  2,  2,  z  );
  img.fillRect( 2+156, 12+90, 22,  2,  z  );
  img.fillRect( 0+156, 14+90,  4,  2,  z  );
  img.fillRect( 8+156, 14+90, 14,  2,  z  );
  img.fillRect(18+156, 16+90,  4,  2,  z  );
  img.fillRect(16+156, 18+90,  8,  2,  z  );
  img.fillRect(12+156, 20+90, 12,  2,  z  );
  img.fillRect(10+156, 22+90, 12,  2,  z  );
}
// tonbi_E----------------------------------------------
void tonbi_E(int z){
  img.fillRect( 4+186,  0+62, 14,  2,  z  );
  img.fillRect( 2+186,  2+62, 18,  2,  z  );
  img.fillRect(10+186,  4+62, 10,  2,  z  );
  img.fillRect(12+186,  6+62,  6,  2,  z  );
  img.fillRect(10+186,  8+62, 14,  2,  z  );
  img.fillRect( 0+186, 10+62,  4,  2,  z  );
  img.fillRect( 6+186, 10+62, 16,  2,  z  );
  img.fillRect(24+186, 10+62,  2,  2,  z  );
  img.fillRect( 2+186, 12+62, 22,  2,  z  );
  img.fillRect( 0+186, 14+62,  4,  2,  z  );
  img.fillRect( 8+186, 14+62, 14,  2,  z  );
  img.fillRect(18+186, 16+62,  4,  2,  z  );
  img.fillRect(16+186, 18+62,  8,  2,  z  );
  img.fillRect(12+186, 20+62, 12,  2,  z  );
  img.fillRect(10+186, 22+62, 12,  2,  z  );
}
// tonbi_F----------------------------------------------
void tonbi_F(int z){
  img.fillRect( 4+234,  0+84, 14,  2,  z  );
  img.fillRect( 2+234,  2+84, 18,  2,  z  );
  img.fillRect(10+234,  4+84, 10,  2,  z  );
  img.fillRect(12+234,  6+84,  6,  2,  z  );
  img.fillRect(10+234,  8+84, 14,  2,  z  );
  img.fillRect( 0+234, 10+84,  4,  2,  z  );
  img.fillRect( 6+234, 10+84, 16,  2,  z  );
  img.fillRect(24+234, 10+84,  2,  2,  z  );
  img.fillRect( 2+234, 12+84, 22,  2,  z  );
  img.fillRect( 0+234, 14+84,  4,  2,  z  );
  img.fillRect( 8+234, 14+84, 14,  2,  z  );
  img.fillRect(18+234, 16+84,  4,  2,  z  );
  img.fillRect(16+234, 18+84,  8,  2,  z  );
  img.fillRect(12+234, 20+84, 12,  2,  z  );
  img.fillRect(10+234, 22+84, 12,  2,  z  );
}

// tonbi_G----------------------------------------------
void tonbi_G(int z){
  img.fillRect( 4+268,  0+72, 14,  2,  z  );
  img.fillRect( 2+268,  2+72, 18,  2,  z  );
  img.fillRect(10+268,  4+72, 10,  2,  z  );
  img.fillRect(12+268,  6+72,  6,  2,  z  );
  img.fillRect(10+268,  8+72, 14,  2,  z  );
  img.fillRect( 0+268, 10+72,  4,  2,  z  );
  img.fillRect( 6+268, 10+72, 16,  2,  z  );
  img.fillRect(24+268, 10+72,  2,  2,  z  );
  img.fillRect( 2+268, 12+72, 22,  2,  z  );
  img.fillRect( 0+268, 14+72,  4,  2,  z  );
  img.fillRect( 8+268, 14+72, 14,  2,  z  );
  img.fillRect(18+268, 16+72,  4,  2,  z  );
  img.fillRect(16+268, 18+72,  8,  2,  z  );
  img.fillRect(12+268, 20+72, 12,  2,  z  );
  img.fillRect(10+268, 22+72, 12,  2,  z  );
}

// tori_A----------------------------------------------
void tori_A(int z){
  img.fillRect( 32,  90,  4,  2,  z  );
  img.fillRect( 28,  92,  6,  2,  z  );
  img.fillRect( 28,  94,  4,  2,  z  );
  img.fillRect( 28,  96,  2,  2,  z  );
  img.fillRect( 26,  98,  4,  8,  z  );  
  img.fillRect( 36,  94,  4,  2,  z  );
  img.fillRect( 32,  96,  6,  2,  z  );
  img.fillRect( 32,  98,  4,  2,  z  );
  img.fillRect( 30, 100,  4,  2,  z  );
  img.fillRect( 20,  98,  4,  2,  z  );
  img.fillRect( 16, 100,  4,  2,  z  );
  img.fillRect( 22, 100,  6,  2,  z  );  
  img.fillRect( 20, 102, 12,  2,  z  );
  img.fillRect( 22, 104, 10,  2,  z  );
  img.fillRect( 24, 106, 10,  2,  z  );
  img.fillRect( 28, 108, 10,  2,  z  );  
  img.fillRect( 40, 104,  2,  2,  z  );
  img.fillRect( 38, 106,  4,  2,  z  );  
}

// tori_B----------------------------------------------
void tori_B(int z){
  img.fillRect( 86, 116,  4,  2,  z  );
  img.fillRect( 82, 118,  4,  2,  z  );  
  img.fillRect( 88, 118,  6,  2,  z  );
  img.fillRect( 86, 120, 10,  2,  z  );
  img.fillRect( 88, 122, 10,  2,  z  );
  img.fillRect( 88, 124, 12,  2,  z  );
  img.fillRect( 86, 126,  6,  2,  z  );
  img.fillRect( 84, 128,  8,  2,  z  );
  img.fillRect( 86, 130,  4,  4,  z  );
  img.fillRect( 88, 134,  4,  2,  z  );
  img.fillRect( 94, 126, 10,  2,  z  );
  img.fillRect(104, 128,  4,  2,  z  );
}

// tori_C----------------------------------------------
void tori_C(int z){
  img.fillRect( 130,  78,  4,  2,  z  );
  img.fillRect( 126,  80,  6,  2,  z  );
  img.fillRect( 126,  82,  4,  2,  z  );
  img.fillRect( 126,  84,  2,  2,  z  );
  img.fillRect( 124,  86,  4,  8,  z  );  
  img.fillRect( 134,  82,  4,  2,  z  );
  img.fillRect( 130,  84,  6,  2,  z  );
  img.fillRect( 130,  86,  4,  2,  z  );
  img.fillRect( 128,  88,  4,  2,  z  );
  img.fillRect( 118,  86,  4,  2,  z  );
  img.fillRect( 114,  88,  4,  2,  z  );
  img.fillRect( 120,  88,  6,  2,  z  );  
  img.fillRect( 118,  90, 12,  2,  z  );
  img.fillRect( 120,  92, 10,  2,  z  );
  img.fillRect( 122,  94, 10,  2,  z  );
  img.fillRect( 126,  96, 10,  2,  z  );  
  img.fillRect( 138,  92,  2,  2,  z  );
  img.fillRect( 136,  94,  4,  2,  z  );  
}

// tori_D----------------------------------------------
void tori_D(int z){
  img.fillRect( 170, 120,  4,  2,  z  );
  img.fillRect( 166, 122,  4,  2,  z  );
  img.fillRect( 172, 122,  6,  2,  z  );
  img.fillRect( 170, 124, 10,  2,  z  );
  img.fillRect( 172, 126, 10,  2,  z  );
  img.fillRect( 172, 128, 12,  2,  z  );
  img.fillRect( 170, 130,  6,  2,  z  );
  img.fillRect( 168, 132,  8,  2,  z  );
  img.fillRect( 170, 134,  4,  4,  z  );
  img.fillRect( 172, 138,  4,  2,  z  );
  img.fillRect( 178, 130, 10,  2,  z  );
  img.fillRect( 188, 132,  4,  2,  z  );
}

// tori_E----------------------------------------------
void tori_E(int z){
  img.fillRect( 204,  88,  4,  2,  z  );
  img.fillRect( 200,  90,  6,  2,  z  );
  img.fillRect( 200,  92,  4,  2,  z  );
  img.fillRect( 200,  94,  2,  2,  z  );
  img.fillRect( 198,  96,  4,  8,  z  );
  img.fillRect( 208,  92,  4,  2,  z  );
  img.fillRect( 204,  94,  6,  2,  z  );
  img.fillRect( 204,  96,  4,  2,  z  );
  img.fillRect( 202,  98,  4,  2,  z  );
  img.fillRect( 192,  96,  4,  2,  z  );
  img.fillRect( 188,  98,  4,  2,  z  );
  img.fillRect( 194,  98,  6,  2,  z  );
  img.fillRect( 192, 100, 12,  2,  z  );
  img.fillRect( 194, 102, 10,  2,  z  );
  img.fillRect( 196, 104, 10,  2,  z  );
  img.fillRect( 200, 106, 10,  2,  z  );
  img.fillRect( 212, 102,  2,  2,  z  );
  img.fillRect( 210, 104,  4,  2,  z  );  
}

// tori_F----------------------------------------------
void tori_F(int z){
  img.fillRect(  260,  116,  4,  2,  z  );
  img.fillRect(  256,  118,  4,  2,  z  );  
  img.fillRect(  262,  118,  6,  2,  z  );
  img.fillRect(  260,  120, 10,  2,  z  );
  img.fillRect(  262,  122, 10,  2,  z  );
  img.fillRect(  262,  124, 12,  2,  z  );
  img.fillRect(  260,  126,  6,  2,  z  );
  img.fillRect(  258,  128,  8,  2,  z  );
  img.fillRect(  260,  130,  4,  4,  z  );
  img.fillRect(  262,  134,  4,  2,  z  );
  img.fillRect(  268,  126, 10,  2,  z  );
}

// tori_G----------------------------------------------
void tori_G(int z){
  img.fillRect( 296,  98,  4,  2,  z  );
  img.fillRect( 292, 100,  6,  2,  z  );
  img.fillRect( 292, 102,  4,  2,  z  );
  img.fillRect( 292, 104,  2,  2,  z  );
  img.fillRect( 290, 106,  4,  8,  z  );
  img.fillRect( 300, 102,  4,  2,  z  );
  img.fillRect( 296, 104,  6,  2,  z  );
  img.fillRect( 296, 106,  4,  2,  z  );
  img.fillRect( 294, 108,  4,  2,  z  );
  img.fillRect( 284, 106,  4,  2,  z  );
  img.fillRect( 280, 108,  4,  2,  z  );
  img.fillRect( 286, 108,  6,  2,  z  );
  img.fillRect( 284, 110, 12,  2,  z  );
  img.fillRect( 286, 112, 10,  2,  z  );
  img.fillRect( 288, 114, 10,  2,  z  );
  img.fillRect( 292, 116, 10,  2,  z  );
  img.fillRect( 304, 112,  2,  2,  z  );
  img.fillRect( 302, 114,  4,  2,  z  );  
}

// hikari1_B----------------------------------------------
void hikari1_B(int z){
  img.fillRect( 32, 132,  4,  4,  z  );
  img.fillRect( 30, 136,  4,  4,  z  );
  img.fillRect( 28, 140,  4,  4,  z  );
  img.fillRect( 26, 144,  4,  4,  z  );
  img.fillRect( 24, 148,  4,  4,  z  );
  img.fillRect( 22, 152,  4,  4,  z  );
  img.fillRect( 20, 156,  4,  4,  z  );
  img.fillRect( 18, 160,  4,  4,  z  );
  img.fillRect( 16, 164,  4,  4,  z  );
  img.fillRect(110, 132,  4, 20,  z  );
  img.fillRect(112, 152,  4, 20,  z  );
}

// hikari2_B----------------------------------------------
void hikari2_B(int z){
  img.fillRect(  54,  92,  4,  4,  z  );
  img.fillRect(  52,  96,  4,  4,  z  );
  img.fillRect(  50, 100,  4,  4,  z  );
  img.fillRect(  48, 104,  4,  4,  z  );
  img.fillRect(  46, 108,  4,  4,  z  );
  img.fillRect(  44, 112,  4,  4,  z  );
  img.fillRect(  42, 116,  4,  4,  z  );
  img.fillRect(  40, 120,  4,  4,  z  );
  img.fillRect(  38, 124,  4,  4,  z  );
  img.fillRect( 108,  94,  4, 18,  z  );
  img.fillRect( 110, 112,  4, 16,  z  );
}

// hikari3_B----------------------------------------------
void hikari3_B(int z){
  img.fillRect( 70, 60,  4,  4,  z  );
  img.fillRect( 68, 64,  4,  4,  z  );
  img.fillRect( 66, 68,  4,  4,  z  );
  img.fillRect( 64, 72,  4,  4,  z  );
  img.fillRect( 62, 76,  4,  4,  z  );
  img.fillRect( 60, 80,  4,  4,  z  );
  img.fillRect( 58, 84,  4,  4,  z  );
  img.fillRect(106, 62,  4, 16,  z  );
  img.fillRect(108, 76,  4, 14,  z  );
}

// hikari4_B----------------------------------------------
void hikari4_B(int z){
  img.fillRect(  82,  38,  4,  4,  z  );
  img.fillRect(  80,  42,  4,  4,  z  );
  img.fillRect(  78,  46,  4,  4,  z  );
  img.fillRect(  76,  50,  4,  4,  z  );
  img.fillRect(  74,  54,  4,  2,  z  );
  img.fillRect( 106,  42,  4, 16,  z  );
}

// hikari1_D----------------------------------------------
void hikari1_D(int z){
  img.fillRect( 126, 140,  4,  4,  z  );
  img.fillRect( 124, 144,  4,  8,  z  );
  img.fillRect( 122, 152,  4, 10,  z  );
  img.fillRect( 120, 162,  4,  8,  z  );
  img.fillRect( 198, 140,  4,  6,  z  );
  img.fillRect( 200, 146,  4,  6,  z  );
  img.fillRect( 202, 152,  4,  6,  z  );
  img.fillRect( 204, 158,  4,  6,  z  );
  img.fillRect( 206, 164,  4,  6,  z  );
}

// hikari2_D----------------------------------------------
void hikari2_D(int z){
  img.fillRect( 136, 100,  4,  4,  z  );
  img.fillRect( 134, 104,  4,  8,  z  );
  img.fillRect( 132, 112,  4,  8,  z  );
  img.fillRect( 130, 120,  4,  8,  z  );
  img.fillRect( 128, 128,  4,  8,  z  );
  img.fillRect( 186, 102,  4,  4,  z  );
  img.fillRect( 188, 106,  4,  6,  z  );
  img.fillRect( 190, 112,  4,  6,  z  );
  img.fillRect( 192, 118,  4,  6,  z  );
  img.fillRect( 194, 124,  4,  6,  z  );
  img.fillRect( 196, 130,  4,  6,  z  );
}

// hikari3_D----------------------------------------------
void hikari3_D(int z){
  img.fillRect( 148, 64,  4,  4,  z  );
  img.fillRect( 146, 68,  4,  6,  z  );
  img.fillRect( 144, 74,  4,  6,  z  );
  img.fillRect( 142, 80,  4,  6,  z  );
  img.fillRect( 140, 86,  4,  6,  z  );
  img.fillRect( 138, 92,  4,  4,  z  );
  img.fillRect( 174, 64,  4,  4,  z  );
  img.fillRect( 176, 68,  4,  6,  z  );
  img.fillRect( 178, 74,  4,  6,  z  );
  img.fillRect( 180, 80,  4,  6,  z  );
  img.fillRect( 182, 86,  4,  6,  z  );
  img.fillRect( 184, 92,  4,  6,  z  );
}

// hikari4_D----------------------------------------------
void hikari4_D(int z){
  img.fillRect(  152,  46,  4,  8,  z  );
  img.fillRect(  150,  54,  4,  6,  z  );
  img.fillRect(  170,  46,  4,  8,  z  );
  img.fillRect(  172,  54,  4,  6,  z  );
}

// hikari1_F----------------------------------------------
void hikari1_F(int z){
  img.fillRect( 214, 146,  4,  6,  z  );
  img.fillRect( 212, 152,  4, 18,  z  );
  img.fillRect( 288, 146,  4,  4,  z  );
  img.fillRect( 290, 150,  4,  4,  z  );
  img.fillRect( 292, 154,  4,  4,  z  );
  img.fillRect( 294, 158,  4,  4,  z  );
  img.fillRect( 296, 162,  4,  4,  z  );
}

// hikari2_F----------------------------------------------
void hikari2_F(int z){
  img.fillRect( 218,  94,  4,  4,  z  );
  img.fillRect( 216,  98,  4, 22,  z  );
  img.fillRect( 214, 120,  4, 22,  z  );
  img.fillRect( 260,  88,  4,  4,  z  );
  img.fillRect( 262,  92,  4,  4,  z  );
  img.fillRect( 264,  96,  4,  4,  z  );
  img.fillRect( 266, 100,  4,  4,  z  );
  img.fillRect( 268, 104,  4,  4,  z  );
  img.fillRect( 270, 108,  4,  4,  z  );
  img.fillRect( 272, 112,  4,  4,  z  );
  img.fillRect( 274, 116,  4,  4,  z  );
  img.fillRect( 276, 120,  4,  4,  z  );
  img.fillRect( 278, 124,  4,  4,  z  );
  img.fillRect( 280, 128,  4,  4,  z  );
  img.fillRect( 282, 132,  4,  4,  z  );
  img.fillRect( 284, 136,  4,  4,  z  );
  img.fillRect( 286, 140,  4,  2,  z  );
}

// hikari3_F----------------------------------------------
void hikari3_F(int z){
  img.fillRect( 220,  64,  4,  6,  z  );
  img.fillRect( 218,  70,  4, 20,  z  );
  img.fillRect( 248,  64,  4,  4,  z  );
  img.fillRect( 250,  68,  4,  4,  z  );
  img.fillRect( 252,  72,  4,  4,  z  );
  img.fillRect( 254,  76,  4,  4,  z  );
  img.fillRect( 256,  80,  4,  4,  z  );
}

// hikari4_F----------------------------------------------
void hikari4_F(int z){
  img.fillRect( 220,  46,  4, 14,  z  );
  img.fillRect( 238,  44,  4,  4,  z  );
  img.fillRect( 240,  48,  4,  4,  z  );
  img.fillRect( 242,  52,  4,  4,  z  );
  img.fillRect( 244,  56,  4,  4,  z  );
}

// kusa1_B----------------------------------------------
void kusa1_B(int z){
  img.fillRect( 74,  194,  2,  6,  z  );
  img.fillRect( 76,  196,  2,  4,  z  );
  img.fillRect( 78,  198,  2,  2,  z  );
  img.fillRect( 80,  194,  2,  6,  z  );
  img.fillRect( 82,  196,  2,  4,  z  );
  img.fillRect( 84,  198,  2,  2,  z  );
  img.fillRect( 86,  194,  2,  6,  z  );
  img.fillRect( 88,  196,  2,  4,  z  );
  img.fillRect( 90,  198,  2,  2,  z  );
  img.fillRect( 74,  200, 20,  2,  z  );
}

// kusa2_B----------------------------------------------
void kusa2_B(int z){
  img.fillRect(  96,  194,  2,  6,  z  );
  img.fillRect(  98,  196,  2,  4,  z  );
  img.fillRect( 100,  198,  2,  2,  z  );
  img.fillRect( 102,  194,  2,  6,  z  );
  img.fillRect( 104,  196,  2,  4,  z  );
  img.fillRect( 106,  198,  2,  2,  z  );
  img.fillRect( 108,  194,  2,  6,  z  );
  img.fillRect( 110,  196,  2,  4,  z  );
  img.fillRect( 112,  198,  2,  2,  z  );  
  img.fillRect(  96,  200, 20,  2,  z  );
}

// kusa1_D----------------------------------------------
void kusa1_D(int z){
  img.fillRect( 170,  198,  2,  6,  z  );
  img.fillRect( 172,  200,  2,  4,  z  );
  img.fillRect( 174,  202,  2,  2,  z  );
  img.fillRect( 176,  198,  2,  6,  z  );
  img.fillRect( 178,  200,  2,  4,  z  );
  img.fillRect( 180,  202,  2,  2,  z  );
  img.fillRect( 182,  198,  2,  6,  z  );
  img.fillRect( 184,  200,  2,  4,  z  );
  img.fillRect( 186,  202,  2,  2,  z  );  
  img.fillRect( 170,  204, 20,  2,  z  );
}

// kusa2_D----------------------------------------------
void kusa2_D(int z){
  img.fillRect( 192,  198,  2,  6,  z  );
  img.fillRect( 194,  200,  2,  4,  z  );
  img.fillRect( 196,  202,  2,  2,  z  );
  img.fillRect( 198,  198,  2,  6,  z  );
  img.fillRect( 200,  200,  2,  4,  z  );
  img.fillRect( 202,  202,  2,  2,  z  );
  img.fillRect( 204,  198,  2,  6,  z  );
  img.fillRect( 206,  200,  2,  4,  z  );
  img.fillRect( 208,  202,  2,  2,  z  );  
  img.fillRect( 192,  204, 20,  2,  z  );
}

// kusa1_F----------------------------------------------
void kusa1_F(int z){
  img.fillRect( 258,  190,  2,  6,  z  );
  img.fillRect( 260,  192,  2,  4,  z  );
  img.fillRect( 262,  194,  2,  2,  z  );
  img.fillRect( 264,  190,  2,  6,  z  );
  img.fillRect( 266,  192,  2,  4,  z  );
  img.fillRect( 268,  194,  2,  2,  z  );
  img.fillRect( 270,  190,  2,  6,  z  );
  img.fillRect( 272,  192,  2,  4,  z  );
  img.fillRect( 274,  194,  2,  2,  z  );
  img.fillRect( 258,  196, 20,  2,  z  );
}

// kusa2_F---------------------------------------------
void kusa2_F(int z){
  img.fillRect( 280,  190,  2,  6,  z  );
  img.fillRect( 282,  192,  2,  4,  z  );
  img.fillRect( 284,  194,  2,  2,  z  );
  img.fillRect( 286,  190,  2,  6,  z  );
  img.fillRect( 288,  192,  2,  4,  z  );
  img.fillRect( 290,  194,  2,  2,  z  );
  img.fillRect( 292,  190,  2,  6,  z  );
  img.fillRect( 294,  192,  2,  4,  z  );
  img.fillRect( 296,  194,  2,  2,  z  );
  img.fillRect( 280,  196, 20,  2,  z  );
}

// 食べるアイコン-----------------------------------------------
void taberu(){
  img.fillRect( 44, 224 , 4, 4, 0xffff );//ta
  img.fillRect( 48, 222 ,10, 4, 0xffff );
  img.fillRect( 54, 226 , 4, 6, 0xffff );
  img.fillRect( 50, 228 , 4, 2, 0xffff );
  img.fillRect( 52, 230 , 4, 4, 0xffff );
  img.fillRect( 50, 232 , 4, 4, 0xffff );
  img.fillRect( 48, 234 , 4, 4, 0xffff );
  
  img.fillRect( 62, 228 , 4,  8, 0xffff );//be
  img.fillRect( 64, 224 , 6,  6, 0xffff );
  img.fillRect( 70, 226 , 2,  6, 0xffff );
  img.fillRect( 72, 228 , 2,  6, 0xffff );
  img.fillRect( 74, 230 , 2,  6, 0xffff );
  img.fillRect( 76, 232 , 2,  4, 0xffff );
  img.fillRect( 74, 222 , 2,  4, 0xffff );
  img.fillRect( 78, 222 , 2,  4, 0xffff );
  
  img.fillRect( 82, 222 , 4, 14, 0xffff );//ru
  img.fillRect( 80, 234 , 4,  4, 0xffff );
  img.fillRect( 88, 222 , 4, 16, 0xffff );
  img.fillRect( 92, 232 , 2,  6, 0xffff );
  img.fillRect( 94, 232 , 2,  4, 0xffff );
}

// 歩くアイコン-----------------------------------------------
void aruku(){
  img.fillRect( 232, 222 ,16, 4, 0xffff );//a
  img.fillRect( 238, 226 ,4, 8, 0xffff );
  img.fillRect( 236, 232 ,4, 6, 0xffff );
  img.fillRect( 242, 228 ,4, 4, 0xffff );
  img.fillRect( 244, 226 ,4, 4, 0xffff );
  
  img.fillRect( 252, 222 ,4, 14, 0xffff );//ru
  img.fillRect( 250, 234 ,4, 4, 0xffff );
  img.fillRect( 258, 222 ,4, 16, 0xffff );
  img.fillRect( 262, 232 ,2, 6, 0xffff );
  img.fillRect( 264, 232 ,2, 4, 0xffff );

  img.fillRect( 270, 224 ,4, 4, 0xffff );//ku
  img.fillRect( 272, 222 ,10, 4, 0xffff );
  img.fillRect( 278, 226 ,4, 6, 0xffff );
  img.fillRect( 276, 230 ,4, 4, 0xffff );
  img.fillRect( 274, 232 ,4, 4, 0xffff );
  img.fillRect( 272, 234 ,4, 4, 0xffff );
}

// MISS1-----------------------------------------------
void MISS_1(int z){
  img.fillRect( 270, 30 ,8, 2, z );
  img.fillRect( 268, 32 ,12,12, z );
  img.fillRect( 280, 40 ,2, 4, z );
  img.fillRect( 272, 30 ,4, 4, 0xffbc );
  img.fillRect( 272, 36 ,2, 2, 0xffff );
  img.fillRect( 272, 40 ,2, 2, 0xffff );
  img.fillRect( 276, 36 ,2, 2, 0xffff );
  img.fillRect( 278, 40 ,2, 2, 0xffff );
}
// MISS2-----------------------------------------------
void MISS_2(int z){
  img.fillRect( 286, 30 ,8, 2, z );
  img.fillRect( 284, 32 ,12,12, z );
  img.fillRect( 296, 40 ,2, 4, z );  
  img.fillRect( 288, 30 ,4, 4, 0xffbc );
  img.fillRect( 288, 36 ,2, 2, 0xffff );
  img.fillRect( 288, 40 ,2, 2, 0xffff );
  img.fillRect( 292, 36 ,2, 2, 0xffff );
  img.fillRect( 294, 40 ,2, 2, 0xffff );
}
// MISS3-----------------------------------------------
void MISS_3(int z){
  img.fillRect( 302, 30 ,8, 2, z );
  img.fillRect( 300, 32 ,12,12, z );
  img.fillRect( 312, 40 ,2, 4, z );
  img.fillRect( 304, 30 ,4, 4, 0xffbc );
  img.fillRect( 304, 36 ,2, 2, 0xffff );
  img.fillRect( 304, 40 ,2, 2, 0xffff );
  img.fillRect( 308, 36 ,2, 2, 0xffff );
  img.fillRect( 310, 40 ,2, 2, 0xffff );
}
