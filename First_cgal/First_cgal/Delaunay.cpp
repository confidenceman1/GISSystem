#include <iostream>
#include <CGAL/Exact_predicates_inexact_constructions_kernel.h>
#include <CGAL/Polygon_2.h>
#include <CGAL/Constrained_Delaunay_triangulation_2.h>

typedef CGAL::Exact_predicates_inexact_constructions_kernel K;
typedef CGAL::Polygon_2<K> Polygon;
typedef CGAL::Constrained_Delaunay_triangulation_2<K> CDT;
typedef CDT::Point Point;
//
//int main()
//{
//    // 创建多个面域
//    Polygon polygon1;
//    polygon1.push_back(Point(0, 0));
//    polygon1.push_back(Point(1, 0));
//    polygon1.push_back(Point(0.5, 0.5));
//
//    Polygon polygon2;
//    polygon2.push_back(Point(0.5, 0.5));
//    polygon2.push_back(Point(1, 0));
//    polygon2.push_back(Point(1, 1));
//    polygon2.push_back(Point(0.5, 1));
//
//    // 构建三角剖分
//    CDT cdt;
//    cdt.insert_constraint(polygon1.vertices_begin(), polygon1.vertices_end(), true);
//    cdt.insert_constraint(polygon2.vertices_begin(), polygon2.vertices_end(), true);
//
//    // 遍历三角形并打印顶点坐标
//    for (CDT::Finite_faces_iterator it = cdt.finite_faces_begin(); it != cdt.finite_faces_end(); ++it)
//    {
//        std::cout << "Triangle vertices: ";
//        std::cout << it->vertex(0)->point() << " ";
//        std::cout << it->vertex(1)->point() << " ";
//        std::cout << it->vertex(2)->point() << std::endl;
//    }
//
//    return 0;
//}

