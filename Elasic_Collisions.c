#include <stdio.h>


struct Particle{
	int x_coordinate;
	int y_coordinate;
	double velocity;

};
int main(){

	struct Particle particle_one;
	struct Particle particle_two;

	printf("Particle One infomation:\n");
	printf("Enter x-coordinate: ");
	scanf("%d",&particle_one.x_coordinate);
	printf(" Enter y-coordinate: ");
	scanf("%d",&particle_one.y_coordinate);
	printf("Enter velocity in m/s:");
	scanf("%lf",&particle_one.velocity);

	printf("\nParticle Two information:\n");
	printf("Enter x-coordinate: ");
	scanf("%d",&particle_two.x_coordinate);
	printf(" Enter y-coordinate: ");
	scanf("%d",&particle_two.y_coordinate);
	printf(" Enter velocity in m/s:");
	scanf("%lf",&particle_two.velocity);


}