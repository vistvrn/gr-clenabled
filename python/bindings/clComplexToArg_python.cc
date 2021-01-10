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
/* BINDTOOL_HEADER_FILE(clComplexToArg.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(10bba4a23ad39b2bf92c6ba9092bc646)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <clenabled/clComplexToArg.h>
// pydoc.h is automatically generated in the build directory
#include <clComplexToArg_pydoc.h>

void bind_clComplexToArg(py::module& m)
{

    using clComplexToArg    = ::gr::clenabled::clComplexToArg;


    py::class_<clComplexToArg, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<clComplexToArg>>(m, "clComplexToArg", D(clComplexToArg))

        .def(py::init(&clComplexToArg::make),
           py::arg("openCLPlatformType"),
           py::arg("devSelector"),
           py::arg("platformId"),
           py::arg("devId"),
           py::arg("setDebug") = 0,
           D(clComplexToArg,make)
        )
        



        ;




}








