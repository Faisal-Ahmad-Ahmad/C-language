#include <stdio.h>

int main(){

	float velocity = 12.5;			// (in m/s)
	float acceleration= 3.2; 		// (in m/s2)
	float time = 6.0; 				// (in seconds)
	float final_velocity = velocity + (acceleration * time);
	float distance = (velocity * time) + (0.5 * acceleration * time * time);

	printf("================ KINEMATICS MOTION REPORT ===============  \n");
	printf("Initial Velocity (vi): \t\t %.2f m/s  \n",velocity);
	printf("Acceleration (a):  \t\t %.2f m/s^2  \n", acceleration);
	printf("Time Elapsed (t): \t\t %.2f s  \n", time);
	printf("---------------------------------------------------------  \n");
	printf("Calculated Final Velocity (vf):  %.2f m/s  \n", final_velocity);
	printf("Calculated Distance (s): \t %.2f m  \n", distance);
	printf("=========================================================  \n\n\n");


return 0;
}
