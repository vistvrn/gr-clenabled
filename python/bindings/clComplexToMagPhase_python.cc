/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(clComplexToMagPhase.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(9a168ac58da4c78d1f2a8f007b8a8969)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <clenabled/clComplexToMagPhase.h>
// pydoc.h is automatically generated in the build directory
#include <clComplexToMagPhase_pydoc.h>

void bind_clComplexToMagPhase(py::module& m)
{

    using clComplexToMagPhase    = ::gr::clenabled::clComplexToMagPhase;


    py::class_<clComplexToMagPhase, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<clComplexToMagPhase>>(m, "clComplexToMagPhase", D(clComplexToMagPhase))

        .def(py::init(&clComplexToMagPhase::make),
           py::arg("openCLPlatformType"),
           py::arg("devSelector"),
           py::arg("platformId"),
           py::arg("devId"),
           py::arg("setDebug") = 0,
           D(clComplexToMagPhase,make)
        )
        



        ;




}








