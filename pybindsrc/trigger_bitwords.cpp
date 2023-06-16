/**
 * @file trigger_primitive.cpp Python bindings for the trigger primitive formats
 *
 * This is part of the DUNE DAQ Software Suite, copyright 2020.
 * Licensing/copyright details are in the COPYING file that you should have
 * received with this code.
 */

#include "trgdataformats/TriggerCandidateData.hpp"

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

namespace dunedaq::trgdataformats::python {

void
register_trigger_bitwords(py::module& m)
{
  py::class_<TriggerCandidateData> py_triggerbits(m, "TriggerBits", py::buffer_protocol());

  py_triggerbits.def("get_trigger_candidate_type_names", &trgdataformats::get_trigger_candidate_type_names);

  py::enum_<TriggerCandidateData::Type>(m, "TriggerBitwords")
    .value("kUnknown", TriggerCandidateData::Type::kUnknown)
    .value("kTiming", TriggerCandidateData::Type::kTiming)
    .value("kTPCLowE", TriggerCandidateData::Type::kTPCLowE)
    .value("kSupernova", TriggerCandidateData::Type::kSupernova)
    .value("kRandom", TriggerCandidateData::Type::kRandom)
    .value("kPrescale", TriggerCandidateData::Type::kPrescale)
    .value("kADCSimpleWindow", TriggerCandidateData::Type::kADCSimpleWindow)
    .value("kHorizontalMuon", TriggerCandidateData::Type::kHorizontalMuon)
    .value("kMichelElectron", TriggerCandidateData::Type::kMichelElectron)
    .value("kPlaneCoincidence", TriggerCandidateData::Type::kPlaneCoincidence)
    .export_values();

}

} // namespace dunedaq::trgdataformats::python
