#include "car.h"

struct CarImplementation
{
  enum CarType type;
  enum Color color;
  float fill_level;
  float accelerate_rate;
  float speed;
};

static CarImplementation aixam1 = {AIXAM, RED, 16, 0, 0};
static CarImplementation multipla1 = {FIAT_MULTIPLA, RED, 65, 0, 0};
static CarImplementation multipla2 = {FIAT_MULTIPLA, BLUE, 65, 0, 0};
static CarImplementation multipla3 = {FIAT_MULTIPLA, ORANGE, 65, 0, 0};
static CarImplementation jeep1 = {JEEP, SILVER, 80, 0, 0};
static CarImplementation jeep2 = {JEEP, BLACK, 80, 0, 0};

static Car car_park[] = {&aixam1, &multipla1, &multipla2, &multipla3, &jeep1, &jeep2};

void init()
{

}
Car get_car(enum CarType type)
{
  for (int i = 0; i < sizeof(car_park); i++)
  {
    if (type == CarType)
    {
      return car_park[i]->type;
    }
  }
}
CarType get_type(Car car)
{
  return AIXAM;
}
Color get_color(Car Car)
{
  return BLACK;
}
int get_speed(Car car)
{
  return 0;
}
float get_fill_level(Car car)
{
  return 0;
}
float get_acceleration_rate(Car car)
{
  return 0;
}
void set_acceleration_rate(Car car,float speed)
{

}
int round(float speed)
{
  return 0;
}
void accelerate(Car car)
{

}
