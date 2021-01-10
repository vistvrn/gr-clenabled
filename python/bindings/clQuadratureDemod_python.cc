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
/* BINDTOOL_HEADER_FILE(clQuadratureDemod.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(a358507c0b33d5c78057a6e0ce7bf079)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <clenabled/clQuadratureDemod.h>
// pydoc.h is automatically generated in the build directory
#include <clQuadratureDemod_pydoc.h>

void bind_clQuadratureDemod(py::module& m)
{

    using clQuadratureDemod    = ::gr::clenabled::clQuadratureDemod;


    py::class_<clQuadratureDemod, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<clQuadratureDemod>>(m, "clQuadratureDemod", D(clQuadratureDemod))

        .def(py::init(&clQuadratureDemod::make),
           py::arg("gain"),
           py::arg("openCLPlatformType"),
           py::arg("devSelector"),
           py::arg("platformId"),
           py::arg("devId"),
           py::arg("setDebug") = 0,
           D(clQuadratureDemod,make)
        )
        



        ;




}








