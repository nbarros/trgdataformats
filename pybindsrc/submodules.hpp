#ifndef TRGDATAFORMATS_PYBINDSRC_SUBMODULES_HPP_
#define TRGDATAFORMATS_PYBINDSRC_SUBMODULES_HPP_ 

#include <pybind11/pybind11.h>

namespace dunedaq::trgdataformats::python {

  extern void register_trigger_primitive(pybind11::module &);

}  // namespace dunedaq::trgdataformats::python

#endif // TRGDATAFORMATS_PYBINDSRC_SUBMODULES_HPP_ 
