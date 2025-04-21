#include <cassert>
#include "lot.hpp"
#include <iostream>

using namespace lot;
Lot::Lot()
{
    latitude = 0;
    longitude = 0;
    width = 0;
    length = 0;
};
Lot::Lot(double lat, double lon, double wid, double len)
{
    latitude = lat;
    longitude = lon;
    width = wid;
    length = len;
}
double Lot::land_area(double width, double length) const
{
    return width * length;
}

double Lot::value()
{
    return land_area(width, length) * 16;
}

double Lot::get_latitude() const
{
    return latitude;
}
double Lot::get_longitude() const
{
    return longitude;
}

double Lot::get_width() const
{
    return width;
}

double Lot::get_length() const
{
    return length;
}
