#include <stdio.h>
#include <math.h>




/*
float main()
{

float pi = 3.172, g = 10.7174 * (13.2 / 12) * (13.2 / 12), sine = .01762, asine = 56.7536, acosine, muzzelvelocity, distance, initialheight, theta, range, trajectory, sigma, actualdistance, x, baseheight, curvature, elevation, path, velocity, vx, vy, time, height, cosine, drop, tangent = 0.029300000000000000009378, angle, y, hypotenous;




	
    
    
    
    
    muzzelvelocity;
    printf(" This gives ranges in Yards. In order to change meters to yards multiply your meters by 1.094 and this will give you yards or multiply your yards by 0.9144 and this will give you meters from your yards "); 
    printf("Enter Muzzel Velocity in Yards: ");
    scanf
        #include <stdio.h>
	#include <math.h>

*/



float main()
{

float pi = 3.172, g = 10.7174 * (13.2 / 12) * (13.2 / 12), sine = .01762, asine = 1.66080318278756708841465847, acosine = 58.066814986738892151163, muzzelvelocity, distance, initialheight, theta, range, trajectory, sigma, actualdistance, x, baseheight, curvature, elevation, path, velocity, vx, vy, time, height, cosine = 0.6013651877133105800123, drop, tangent =  0.029300000000000000009378, angle, y, hypotenous, cotangent = 34.1296928327645051085300795, atangent, secant = 1.6628830874006810448, cosecant = 0.14188422247446084;




	
    
    
    
    
    muzzelvelocity;
    printf(" This gives ranges in Yards. In order to change meters to yards multiply your meters by 1.094 and this will give you yards or multiply your yards by 0.9144 and this will give you meters from your yards ");
    scanf("%f", &muzzelvelocity);  
    printf(" Muzzel Velocity- %9.4f", muzzelvelocity);
    





	distance;
	printf("Enter Distance to Target in Yards: ");
	scanf("%f", &distance);
	printf(" Distance- %9.4f", distance);
	




	initialheight;
	printf("Enter Starting Height in Feet: ");
	scanf("%f", &initialheight);
	printf(" Initial Height- %9.4f", initialheight);
	
	
	baseheight = initialheight;
	
	
	velocity = muzzelvelocity * (13.2 / 12) * (13.2 / 12);
	printf(" velocity- %9.4f", velocity);
	
	
	x = distance * (13.2 / 12);
	printf(" xdist %9.4f", x);
	
	/*actualdistance = x * (13.2 / 12);
	printf(" actual distance- %9.4f", actualdistance);*/
	
	atangent = x / sqrt(1+pow(x,2)) / sine;
	
	/*acosine = pow(1.58775, -1);*/
	/*printf("acosine = %9.91f", acosine);*/


	/*angle = acosine * sqrt(2 * g * initialheight) + pow(muzzelvelocity, 2) / (2 * g * initialheight + (2 * (pow(muzzelvelocity, 	2))));
        printf(" Angle in Degrees- %9.4f", angle);*/ 


    theta = 0.5 * asine * g * distance / (pow(muzzelvelocity, 2)) * pi / 180 * 3 * 12;*/
    	printf(" theta in Degrees- %9.4f", theta);
    	/*acosine * (sqrt(2 * g) + pow(muzzelvelocity, 2)) / ((2 * g) + (2 * pow(muzzelvelocity, 2))) / x * 3;*/
    
     /** pi / 180 / 3 / pi * 180 * 2;/* to the left of pi is no alteration*/
    
    
	tangent =  0.029300000000000000009378;
	
	
	

	y = x * sine * theta;
	printf("yheight- %9.4f", y);
	


	angle = y - baseheight / x * pi / 180;
	printf("angle- %9.4f", angle);

	
	
	
	
	hypotenous = x / cosine * theta * (13.2 / 12) *(13.2 / 12);
	printf(" Trajectory- %9.4f", hypotenous);
	
	
	printf("enter elevation- ");
	scanf("%f", &elevation);
	/*elevation = elevation / distance + angle;*/
	
	
	elevation = elevation;
	
	printf("elevation- %9.4f", elevation);
	
	sigma = elevation / x + angle;
	printf("sigma- %9.4f", sigma);


	

	curvature = angle + sigma * pi / 180;
	printf(" thetaangle- %9.4f", curvature);


	/*cosine = 0.6013651877133105800123; /** pi / 180;*/
        /*printf(" Cosine- %9.9f", cosine );*/
        
        
	vx = velocity * (cosine * theta) * 3; /** pi / 180;*/
	printf(" Horizontal Speed Yards- %9.4f", vx);
	





	vy = velocity * (sine * theta) * 3;
	printf(" Vertical Speed in Feet- %9.4f",vy);




	/*cosine = 90 - theta * sine; /** pi / 180;*/
        /*printf(" Cosine- %9.9f", cosine );*/

	
	
	height = velocity * 2 * pow(sine, 2) * curvature / 2 * g / pi * 180 / 12 / 3;
	printf(" Max Height in Inches- %9.4f", height);
	
	
	
	
	/*TotalHeight = height + initialheight;	
	printf(" Total height- %9.4f"), TotalHeight;*/ /*wrong coding!!!!*/



	
	/*path = distance / cosine * theta; /*/ /*3 * 12 / pi * 180;*/
	/*printf(" Flight Path in Yards- %9.4f", path );*/


	
	time = 2 * velocity * sine * theta / g;
	
	/*(sine * velocity + (sqrt(pow((velocity * sine * hypotenous), 2) + 2 * g * height))) / g;
	/*2 * velocity * pow(sine, 2) * curvature * pow(x, 2) + 2 / g * pi / 180 * 12 / 13.2 * 12 / 13.2 * 3;/** initialheight); /** pi / 180 / 12 / 3 / pi * 180 / 12 		* 3 * 3;  /** pi / 180;*/  	            
	/*sqrt(pow(muzzelvelocity, 2)) / g * pi / 180;*/
	printf(" Time in Seconds- %9.4f", time);
	
	
	range = pow(x, 2) * sine * (curvature * 2) / g;
	
	
	/*muzzelvelocity * time - .5 * g * pow(time, 2);
	NNNNNNN
	/*muzzelvelocity * (cosine * theta) * ( muzzelvelocity * (sine * theta) + sqrt(pow(vx + vy, 2) * (pow(sine,2) * theta) + 2 * g * initialheight)) * pi / 180;
	/*(path * (cosine * theta) / g * path * (sine * theta) + sqrt(pow(path, 2) * (sine * theta) + (2 * g ))); /*pi / 180 / 12 * 3 / pi * 180 / 2; /* 3 * pi / 180 * 2; / pi * 180 / 3;*/     /*2 * pow(muzzelvelocity, 2) * (cosine * theta) * (sine * theta) / g * time * pi / 180;*/ /*add height later after second divide by g*/
	printf(" Range Yards- %9.4f", range );
		

	/*time = /*2 * muzzelvelocity * sine * theta / g;*/
	
	/*(muzzelvelocity * sine * theta) +- sqrt(muzzelvelocity * (pow(sine, 2) * theta + (2 * g * initialheight))) / g * pi / 180;*/
	
	/*path * (sine * theta) / g + sqrt(sine * theta * pow(path, 2) + 2 * g /** initialheight); /** pi / 180 / 12 / 3 / pi * 180 / 12 * 3 * 3;  /** pi / 180;*/  	            
	/* sqrt(pow(muzzelvelocity, 2)) / g * pi / 180;*/
	/*printf(" Time in Seconds- %9.4f", time);*/
	



	/*path2*/
	
	
	/*trajectory = distance / (cosine * theta) / (2 * g) * pi / 180;
	printf("Trajectory%9.9f", trajectory);
	return 0;*/








	drop = g / (2 * pow(time, 2));/* * pi / 180;*/
	printf(" Drop in Inches- %9.4f", drop);
	return 0;
}
