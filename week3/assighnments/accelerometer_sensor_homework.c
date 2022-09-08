/*
 * WAP for the acclerometer sensor to measure vehicle motion position of tilting using struct variale
 *
 * start
 * declare structure variable
 * take user input for 5 data for each axis
 * find the average of the each axis
 * compare it with predefined value for finding the position
 *
 */

#include<stdio.h>

struct accl_sensor
{
	int x_axis;
	int y_axis;
	int z_axis;
};

int main()
{
	setbuf(stdout,NULL);
	struct accl_sensor sensor_data[5];
	int x_avg=0,y_avg=0,z_avg=0;
	/* take the 5 sensor value for each variable from user   */
	printf("\n----enter the data for the sensor-----");
	for(int i=0;i<5;i++)
	{
		printf("\n%d-X axis: ",i+1);
		scanf("%d",&sensor_data[i].x_axis);
		printf("\n%d-Y axis: ",i+1);
		scanf("%d",&sensor_data[i].y_axis);
		printf("\n%d-Z axis: ",i+1);
		scanf("%d",&sensor_data[i].z_axis);
	}
	/*  find the average of the 5 sensor value    */
	for(int i=0;i<5;i++)
	{
		x_avg += sensor_data[i].x_axis;				//find sum of the values
		y_avg += sensor_data[i].y_axis;
		z_avg += sensor_data[i].z_axis;
	}
	x_avg /= 5;										//find avg of each axis
	y_avg /= 5;
	z_avg /= 5;

	/* compare the avg value of each axis for printing corresponding direction */
	printf("\nx_avg = %d\ty_avg = %d\tz_avg = %d",x_avg,y_avg,z_avg);
	if(x_avg ==100 && y_avg == 250 && z_avg == 300)									//for left
		printf("\n LEFT");
	else if(x_avg ==300 && y_avg == 250 && z_avg == 100)
		printf("\n RIGHT");															//for right
	else if(x_avg ==100 && y_avg == 100 && z_avg == 300)
			printf("\n FORWARD");													//for forward
	else if(x_avg ==250 && y_avg == 800 && z_avg == 200)
			printf("\n BACKWARD");													//for backward
	else
		printf("\tNONE");



	return 0;
}
