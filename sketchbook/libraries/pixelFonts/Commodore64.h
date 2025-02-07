// Font: commodore_64_pixelised
// 528 bytes

//How many pixels does each character contain, starting with ASCII character 33? The '$' character's width is the fourth number in the list

int asciiColumns[] = { 
	6, 2, 6, 8, 6, 6, 7, 4, 4, 4, 8, 6, 3, 6, 2, 7, 6, 6, 6, 6, 7, 6, 6, 6, 6, 6, 2, 3, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 4, 6, 6, 6, 7, 6, 6, 6, 6, 6, 6, 6, 6, 6, 7, 6, 6, 6, 4, 7, 4, 6, 8, 4, 6, 6, 5, 6, 6, 5, 6, 6, 4, 4, 6, 4, 7, 6, 6, 6, 6, 6, 6, 6, 6, 6, 7, 6, 6, 6, 6, 2, 6, 0 //(N.B. a zero-length character marks the end, and allows the last column to be known after AlignFont.h translates these from relative column width to absolute column number)
};

//What are the 8-pixel columns of all the ASCII characters as 8-bit bytes (numbers between 0 and 255)

byte columns[] = {
/*SPACE*/ 0, 0, 0, 0, 0, 0,
/*EXCLAMATION*/ 95, 95, 
/*"*/ 3, 3, 0, 0, 3, 3, 
/*#*/ 20, 127, 127, 20, 20, 127, 127, 20, 
/*$*/ 36, 46, 107, 107, 58, 18, 
/*%*/ 99, 51, 24, 12, 102, 99, 
/*&*/ 50, 127, 77, 77, 119, 114, 80, 
/*'*/ 4, 6, 3, 1, 
/*(*/ 28, 62, 99, 65, 
/*)*/ 65, 99, 62, 28, 
/***/ 8, 42, 62, 28, 28, 62, 42, 8, 
/*+*/ 8, 8, 62, 62, 8, 8, 
/*,*/ 128, 224, 96, 
/*-*/ 8, 8, 8, 8, 8, 8, 
/*STOP*/ 96, 96, 
/*FWDSLASH*/ 64, 96, 48, 24, 12, 6, 2, 
/*0*/ 62, 127, 73, 69, 127, 62, 
/*1*/ 64, 68, 127, 127, 64, 64, 
/*2*/ 98, 115, 81, 73, 79, 70, 
/*3*/ 34, 99, 73, 73, 127, 54, 
/*4*/ 24, 24, 20, 22, 127, 127, 16, 
/*5*/ 39, 103, 69, 69, 125, 57, 
/*6*/ 62, 127, 73, 73, 123, 50, 
/*7*/ 3, 3, 121, 125, 7, 3, 
/*8*/ 54, 127, 73, 73, 127, 54, 
/*9*/ 38, 111, 73, 73, 127, 62, 
/*:*/ 99, 99, 
/*;*/ 128, 227, 99, 
/*<*/ 8, 28, 54, 99, 65, 65, 
/*=*/ 20, 20, 20, 20, 20, 20, 
/*>*/ 65, 65, 99, 54, 28, 8, 
/*QUESTION*/ 2, 3, 81, 89, 15, 6, 
/*@*/ 62, 127, 65, 77, 79, 46, 
/*A*/ 124, 126, 11, 11, 126, 124, 
/*B*/ 127, 127, 73, 73, 127, 54, 
/*C*/ 62, 127, 65, 65, 99, 34, 
/*D*/ 127, 127, 65, 99, 62, 28, 
/*E*/ 127, 127, 73, 73, 65, 65, 
/*F*/ 127, 127, 9, 9, 1, 1, 
/*G*/ 62, 127, 65, 73, 123, 58, 
/*H*/ 127, 127, 8, 8, 127, 127, 
/*I*/ 65, 127, 127, 65, 
/*J*/ 32, 96, 65, 127, 63, 1, 
/*K*/ 127, 127, 28, 54, 99, 65, 
/*L*/ 127, 127, 64, 64, 64, 64, 
/*M*/ 127, 127, 6, 12, 6, 127, 127, 
/*N*/ 127, 127, 14, 28, 127, 127, 
/*O*/ 62, 127, 65, 65, 127, 62, 
/*P*/ 127, 127, 9, 9, 15, 6, 
/*Q*/ 30, 63, 33, 97, 127, 94, 
/*R*/ 127, 127, 25, 57, 111, 70, 
/*S*/ 38, 111, 73, 73, 123, 50, 
/*T*/ 1, 1, 127, 127, 1, 1, 
/*U*/ 63, 127, 64, 64, 127, 63, 
/*V*/ 31, 63, 96, 96, 63, 31, 
/*W*/ 127, 127, 48, 24, 48, 127, 127, 
/*X*/ 99, 119, 28, 28, 119, 99, 
/*Y*/ 7, 15, 120, 120, 15, 7, 
/*Z*/ 97, 113, 89, 77, 71, 67, 
/*[*/ 127, 127, 65, 65, 
/*BACKSLASH*/ 2, 6, 12, 24, 48, 96, 64, 
/*]*/ 65, 65, 127, 127, 
/*^*/ 4, 6, 127, 127, 6, 4, 
/*_*/ 64, 64, 64, 64, 64, 64, 64, 64, 
/*FWDAPOS*/ 1, 3, 6, 4, 
/*a*/ 32, 116, 84, 84, 124, 120, 
/*b*/ 126, 126, 72, 72, 120, 48, 
/*c*/ 56, 124, 68, 68, 68, 
/*d*/ 48, 120, 72, 72, 126, 126, 
/*e*/ 56, 124, 84, 84, 92, 24, 
/*f*/ 8, 124, 126, 10, 10, 
/*g*/ 152, 188, 164, 164, 252, 124, 
/*h*/ 127, 127, 4, 4, 124, 120, 
/*i*/ 68, 125, 125, 64, 
/*j*/ 128, 128, 250, 122, 
/*k*/ 127, 127, 16, 56, 104, 64, 
/*l*/ 65, 127, 127, 64, 
/*m*/ 124, 124, 24, 56, 28, 124, 120, 
/*n*/ 124, 124, 4, 4, 124, 120, 
/*o*/ 56, 124, 68, 68, 124, 56, 
/*p*/ 252, 252, 36, 36, 60, 24, 
/*q*/ 24, 60, 36, 36, 252, 252, 
/*r*/ 124, 124, 4, 4, 12, 8, 
/*s*/ 72, 92, 84, 84, 116, 36, 
/*t*/ 4, 4, 62, 126, 68, 68, 
/*u*/ 60, 124, 64, 64, 124, 124, 
/*v*/ 28, 60, 96, 96, 60, 28, 
/*w*/ 28, 124, 112, 56, 112, 124, 28, 
/*x*/ 68, 108, 56, 56, 108, 68, 
/*y*/ 156, 188, 160, 224, 124, 60, 
/*z*/ 68, 100, 116, 92, 76, 68, 
/*{*/ 8, 8, 62, 119, 65, 65, 
/*|*/ 127, 127, 
/*}*/ 65, 65, 119, 62, 8, 8,  0 
};
