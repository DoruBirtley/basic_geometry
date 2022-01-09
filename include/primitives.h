#ifndef BASIC_GEOMETRY_PRIMITIVES_H
#define BASIC_GEOMETRY_PRIMITIVES_H

#include <eigen3/Eigen/Core>
namespace BasicGeometry{

using Point = Eigen::Vector3d;
using Direction = Eigen::Vector3d;
using Normal = Eigen::Vector3d;

struct LineSegment{
    LineSegment(const Point& start,const Point& end){
        start_ = start;
        end_ = end;
    }
    ~LineSegment() = default;
    LineSegment(const LineSegment&)= default;
    LineSegment& operator = (const LineSegment&)= default;
    LineSegment(LineSegment&&)= default;
    LineSegment& operator = (LineSegment&&)= default;

    Point start_;
    Point end_;
};

struct Ray
{
    Ray(const Point& start, const Direction& direction) {
        start_ = start_;
        direction_ = direction_;
    }
    ~Ray() = default;
    Ray(const Ray&)= default;
    Ray& operator = (const Ray&)= default;
    Ray(Ray&&)= default;
    Ray& operator = (Ray&&)= default;

    Point start_;
    Direction direction_;
};

struct StraightLine{
    StraightLine(const Point& point, const Direction& direction){
        point_ = point;
        direction_ = direction;
    }
    ~StraightLine() = default;
    StraightLine(const StraightLine&)= default;
    StraightLine& operator = (const StraightLine&)= default;
    StraightLine(StraightLine&&)= default;
    StraightLine& operator = (StraightLine&&)= default;

    Point point_;
    Direction direction_;
};

struct Plane{
    Plane(const Point& point, const Normal& normal){
        point_ = point;
        normal_ = normal;
    }
    ~Plane() = default;
    Plane(const Plane&)= default;
    Plane& operator = (const Plane&)= default;
    Plane(Plane&&)= default;
    Plane& operator = (Plane&&)= default;

    Point point_;
    Normal normal_;
};

}

#endif // BASIC_GEOMETRY_PRIMITIVES_H
