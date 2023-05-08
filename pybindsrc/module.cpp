/**
 * @file module.cpp
 *
 * This is part of the DUNE DAQ Software Suite, copyright 2020.
 * Licensing/copyright details are in the COPYING file that you should have
 * received with this code.
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

namespace py = pybind11;

namespace dunedaq::trgdataformats::python {

  extern void register_trigger_primitive(pybind11::module &);

PYBIND11_MODULE(_daq_trgdataformats_py, m)
{

  m.doc() = "C++ implementation of the trgdataformats modules";

  register_trigger_primitive(m);
}

} // namespace dunedaq::trgdataformats::python
