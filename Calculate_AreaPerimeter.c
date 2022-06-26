#include<stdio.h>

// By calling 2 separate functions, calculate the Area & Perimeter of a rectangle.

double final, final2;
void FindArea(double Length, double Width) {

double totArea;
final = Length * Width;

printf("\nThe Area of your rectangle is: %f\n\n",final);
}

void FindPerimeter(double L1, double W1) {


final2 = 2 * (L1 + W1);

printf("\nThe perimeter of your rectangle is: %f\n\n",final2);
}

int main() {

double Length, Width, L1, W1;

printf("\tEnter Length here: ");
scanf("%lf",&Length);
printf("\tEnter Width here: ");
scanf("%lf",&Width);

FindArea(Length, Width);

printf("\tEnter Length here: ");
scanf("%lf",&L1);
printf("\tEnter Width here: ");
scanf("%lf",&W1);

FindPerimeter(L1, W1);


}
