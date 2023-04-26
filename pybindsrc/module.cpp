/**
 * @file module.cpp
 *
 * This is part of the DUNE DAQ Software Suite, copyright 2020.
 * Licensing/copyright details are in the COPYING file that you should have
 * received with this code.
 */

#include "submodules.hpp"

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

namespace py = pybind11;

namespace dunedaq::trgdataformats::python {

PYBIND11_MODULE(_daq_trgdataformats_py, m)
{

  m.doc() = "C++ implementation of the trgdataformats modules";

  py::module_ trigger_primitive_module = m.def_submodule("trigger_primitive");
  register_trigger_primitive(trigger_primitive_module);
}

} // namespace dunedaq::trgdataformats::python
