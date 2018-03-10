/**
 * @file template_element.h
 * @brief 
 * @author
 * @version 
 * @date 2018-03-10
 */
#ifndef __TEMPLATE_ELEMENT_H_
#define __TEMPLATE_ELEMENT_H_

#include "point.h"

template <typename D> class TemplateGeometryBase;
class TemplateLineGeometry;
class TemplateTriangleGeometry;
template <typename D> class TemplateElementBase;
class TemplateTriangleElement;

template <typename D>
class TemplateGeometryBase : public std::vector<Point<D>>{
  typedef std::vector<Point<D>> Base;
public:
  using Base::Base;
};
                             





#endif
