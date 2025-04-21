#pragma once
#include "lot.hpp"

namespace developed_lot
{

    class DevelopedLot : public lot::Lot
    {
    private:
        double building_area;
        double num_floors;

    public:
        DevelopedLot(double lat, double lon, double wid, double len, double area, double floors);
        virtual ~DevelopedLot();

        double value() override;

    protected:
        double floor_area_ratio() const;
    };

}
