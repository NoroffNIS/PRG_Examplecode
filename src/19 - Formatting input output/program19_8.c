#include <stdio.h>

struct card		//strukturdefinisjon
{
	char *face;	//definerer pekeren face
	char *suit;	//definerer pekeren suit
};

int main(void)
{
	struct card aCard;	//definerer en variabel av typen struct card
	struct card *cardPtr;	//definerer en peker til struct card

	aCard.face = "Ace";
	aCard.suit = "Spades";

	cardPtr = &aCard;	//tildeler aCard sin adresse til cardPtr

	printf("%s%s%s\n%s%s%s\n%s%s%s\n", aCard.face, " of ", aCard.suit,
		cardPtr->face, " of ", cardPtr->suit,
		(*cardPtr).face, " of ", (*cardPtr).suit);

	return 0;
}

