
#pragma once
namespace lot
{
    class Lot
    {
    private:
        double latitude;
        double longitude;
        double width;
        double length;

    protected:
        double land_area(double width, double length) const;

    public:
        Lot();
        Lot(double lat, double lon, double wid, double len);
        double get_latitude() const;
        double get_longitude() const;
        double get_width() const;
        double get_length() const;

        virtual ~Lot() = default;
        virtual double value();
    };

}
