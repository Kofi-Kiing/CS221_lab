#include "developed_lot.hpp"

namespace developed_lot
{

    DevelopedLot::DevelopedLot(double lat, double lon, double wid, double len, double area, double floors)
        : lot::Lot(lat, lon, wid, len), building_area(area), num_floors(floors) {}

    DevelopedLot::~DevelopedLot()
    {
    }

    double DevelopedLot::floor_area_ratio() const
    {
        double lot_area = land_area(get_width(), get_length());
        double total_floor_area = building_area * num_floors;

        if (lot_area == 0)
        {
            return 0;
        }
        else
        {
            return total_floor_area / lot_area;
        }
    }

    double DevelopedLot::value()
    {
        double lot_val = Lot::value();
        double extra_val = building_area * num_floors * 100;
        return lot_val + extra_val;
    }

}
