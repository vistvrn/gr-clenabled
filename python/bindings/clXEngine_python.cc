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
/* BINDTOOL_HEADER_FILE(clXEngine.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(128ce9d50a1a1f5a7687405883fa99f3)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <clenabled/clXEngine.h>
// pydoc.h is automatically generated in the build directory
#include <clXEngine_pydoc.h>

void bind_clXEngine(py::module& m)
{

    using clXEngine    = ::gr::clenabled::clXEngine;


    py::class_<clXEngine, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<clXEngine>>(m, "clXEngine", D(clXEngine))

        .def(py::init(&clXEngine::make),
           py::arg("openCLPlatformType"),
           py::arg("devSelector"),
           py::arg("platformId"),
           py::arg("devId"),
           py::arg("setDebug"),
           py::arg("data_type"),
           py::arg("polarization"),
           py::arg("num_inputs"),
           py::arg("output_format"),
           py::arg("first_channel"),
           py::arg("num_channels"),
           py::arg("integration"),
           py::arg("output_file") = false,
           py::arg("file_base") = "",
           py::arg("rollover_size_mb") = 0,
           D(clXEngine,make)
        )
        



        ;




}








