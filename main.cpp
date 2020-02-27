#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
void chessviz()
{HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
 printf ("8| ");
 SetConsoleTextAttribute(hConsole, (WORD) ((0 << 0) | 1));
 printf ("R H B Q K B H R\n");
 SetConsoleTextAttribute(hConsole, (WORD) ((0 << 0) | 15));
 printf ("7| ");
 SetConsoleTextAttribute(hConsole, (WORD) ((0 << 0) | 1));
 printf ("P P P P P P P P");
 SetConsoleTextAttribute(hConsole, (WORD) ((0 << 0) | 15));
 printf ("\n6| \n5| \n4| \n3| \n2| ");
 SetConsoleTextAttribute(hConsole, (WORD) ((0 << 0) | 6));
 printf ("P P P P P P P P\n");
 SetConsoleTextAttribute(hConsole, (WORD) ((0 << 0) | 15));
 printf ("1| ");
 SetConsoleTextAttribute(hConsole, (WORD) ((0 << 0) | 6));
 printf ("R H B Q K B H R\n");
 SetConsoleTextAttribute(hConsole, (WORD) ((0 << 0) | 15));
 printf ("   _ _ _ _ _ _ _ _\n   A B C D E F G H\n\n\n");
 SetConsoleTextAttribute(hConsole, (WORD) ((0 << 0) | 2));
 printf ("Coords:\n");
 SetConsoleTextAttribute(hConsole, (WORD) ((0 << 0) | 6));
 printf (" White: \n  Pawns: from A2 to H2\n  Rooks: A1 & H1\n  Knights (Horses): B1 & G1\n  Bishops: C1 & F1\n  King: E1\n  Queen: D1\n");
 SetConsoleTextAttribute(hConsole, (WORD) ((0 << 0) | 1));
 printf (" Black: \n  Pawns: from A7 to H7\n  Rooks: A8 & H8\n  Knights (Horses): B8 & G8\n  Bishops: C8 & F8\n  King: E8\n  Queen: D8\n");
 SetConsoleTextAttribute(hConsole, (WORD) ((0 << 0) | 15));
}
int main()
{HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
 chessviz();
 system("PAUSE");
 return 0;
}
