/*----------------------------------------------------------
*				HTBLA-Leonding / Klasse: 2AHIF
* ---------------------------------------------------------
* Exercise Number: 0
* Title:			car.h
* Author:			Moritz Polleichtner
* Due Date:		November , 2018
* ----------------------------------------------------------
* Description:
* Car abstract data type demo.
* ----------------------------------------------------------
*/
#ifndef ___CAR_H
#define ___CAR_H



enum CarType {AIXAM, FIAT_MULTIPLA, JEEP};
enum Color {RED, GREEN, BLUE, ORANGE, SILVER, BLACK};

typedef struct CarImplementation* Car;

void init();
Car get_car(enum CarType type);
CarType get_type(Car car);
Color get_color(Car Car);
int get_speed(Car car);
float get_fill_level(Car car);
float get_acceleration_rate(Car car);
void set_acceleration_rate(Car car,float speed);
int round(float speed);
void accelerate(Car car);



#endif
