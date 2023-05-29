#include <iostream>
#include <CGAL/config.h>

#ifndef CGAL_USE_CORE
int main()
{
    std::cout << "Sorry, this example needs CORE ..." << std::endl;
    return 0;
}
#else

#include <CGAL/Timer.h>
#include <CGAL/Gps_traits_2.h>
#include <CGAL/offset_polygon_2.h>

typedef CGAL::Exact_predicates_exact_constructions_kernel Kernel;
typedef Kernel::Point_2 Point_2;
typedef CGAL::Polygon_2<Kernel> Polygon_2;
typedef CGAL::Gps_traits_2<Kernel> Gps_traits;
typedef Gps_traits::Polygon_with_holes_2 Offset_polygon_with_holes_2;

int main()
{
    // Create a custom polygon
    Polygon_2 P;
    P.push_back(Point_2(0, 0));
    P.push_back(Point_2(0, 5));
    P.push_back(Point_2(5, 5));
    P.push_back(Point_2(5, 0));

    std::cout << "Created an input polygon with " << P.size() << " vertices." << std::endl;

    // Compute the offset polygon.
    Gps_traits traits;
    CGAL::Timer timer;
    timer.start();
    Offset_polygon_with_holes_2 offset = CGAL::offset_polygon_2(P, 5, traits);
    double secs = timer.time();

    std::cout << "The offset polygon has " << offset.outer_boundary().size()
        << " vertices, " << offset.number_of_holes() << " holes."
        << std::endl;
    std::cout << "Offset computation took " << secs << " seconds." << std::endl;

    return 0;
}
#endif


