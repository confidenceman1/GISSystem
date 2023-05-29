#include <iostream>
#include <CGAL/Exact_predicates_inexact_constructions_kernel.h>
#include <CGAL/Voronoi_diagram_2.h>
#include <CGAL/Delaunay_triangulation_2.h>
#include <CGAL/Delaunay_triangulation_adaptation_traits_2.h>
#include <CGAL/Delaunay_triangulation_adaptation_policies_2.h>
#include <CGAL/draw_voronoi_diagram_2.h>

typedef CGAL::Exact_predicates_inexact_constructions_kernel                  K;
typedef CGAL::Delaunay_triangulation_2<K>                                    DT;
typedef CGAL::Delaunay_triangulation_adaptation_traits_2<DT>                 AT;
typedef CGAL::Delaunay_triangulation_caching_degeneracy_removal_policy_2<DT> AP;
typedef CGAL::Voronoi_diagram_2<DT, AT, AP>                                    VD;
typedef VD::Face_iterator Face_iterator;
typedef VD::Face_handle Face_handle;

//int main()
//{
//	// 定义输入点
//	std::vector<K::Point_2> points;
//	points.push_back(K::Point_2(0, 0));
//	points.push_back(K::Point_2(1, 0));
//	points.push_back(K::Point_2(0.5, 0.5));
//	points.push_back(K::Point_2(0.5, 1));
//
//	// 构建Delaunay三角剖分
//	DT dt;
//	dt.insert(points.begin(), points.end());
//
//	// 构建Voronoi图
//	VD vd;
//	vd.insert(dt.points_begin(), dt.points_end());
//
//	// 遍历Voronoi图的顶点并打印坐标
//	for (Face_iterator fit = vd.faces_begin(); fit != vd.faces_end(); ++fit)
//	{
//		if (fit->is_unbounded())
//			continue;
//
//		std::cout << "Face vertices: ";
//		Face_handle face = fit;
//		VD::Ccb_halfedge_circulator circ = face->ccb();
//		VD::Ccb_halfedge_circulator curr = circ;
//		do
//		{
//			K::Point_2 vertex = curr->source()->point();
//			std::cout << vertex << " ";
//			++curr;
//		} while (curr != circ);
//		std::cout << std::endl;
//	}
//
//	return 0;
//}


