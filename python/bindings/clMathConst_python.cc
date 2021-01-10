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
/* BINDTOOL_HEADER_FILE(clMathConst.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(00c2cc63eeb54b826b4c7aec47ca97dd)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <clenabled/clMathConst.h>
// pydoc.h is automatically generated in the build directory
#include <clMathConst_pydoc.h>

void bind_clMathConst(py::module& m)
{

    using clMathConst    = ::gr::clenabled::clMathConst;


    py::class_<clMathConst, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<clMathConst>>(m, "clMathConst", D(clMathConst))

        .def(py::init(&clMathConst::make),
           py::arg("idataType"),
           py::arg("openCLPlatformType"),
           py::arg("devSelector"),
           py::arg("platformId"),
           py::arg("devId"),
           py::arg("fValue"),
           py::arg("operatorType"),
           py::arg("setDebug") = 0,
           D(clMathConst,make)
        )
        




        
        .def("k",&clMathConst::k,       
            D(clMathConst,k)
        )


        
        .def("set_k",&clMathConst::set_k,       
            py::arg("newValue"),
            D(clMathConst,set_k)
        )

        ;




}








