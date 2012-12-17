// Copyright (c) 2012 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_SCHEME_HANDLER_CALLBACK_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_SCHEME_HANDLER_CALLBACK_CTOCPP_H_
#pragma once

#ifndef USING_CEF_SHARED
#pragma message("Warning: "__FILE__" may be accessed wrapper-side only")
#else  // USING_CEF_SHARED

#include "include/cef_scheme.h"
#include "include/capi/cef_scheme_capi.h"
#include "libcef_dll/ctocpp/ctocpp.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefSchemeHandlerCallbackCToCpp
    : public CefCToCpp<CefSchemeHandlerCallbackCToCpp, CefSchemeHandlerCallback,
        cef_scheme_handler_callback_t> {
 public:
  explicit CefSchemeHandlerCallbackCToCpp(cef_scheme_handler_callback_t* str)
      : CefCToCpp<CefSchemeHandlerCallbackCToCpp, CefSchemeHandlerCallback,
          cef_scheme_handler_callback_t>(str) {}
  virtual ~CefSchemeHandlerCallbackCToCpp() {}

  // CefSchemeHandlerCallback methods
  virtual void HeadersAvailable() OVERRIDE;
  virtual void BytesAvailable() OVERRIDE;
  virtual void Cancel() OVERRIDE;
};

#endif  // USING_CEF_SHARED
#endif  // CEF_LIBCEF_DLL_CTOCPP_SCHEME_HANDLER_CALLBACK_CTOCPP_H_

