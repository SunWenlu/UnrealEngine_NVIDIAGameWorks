// Copyright (c) 2017 The Chromium Embedded Framework Authors. All rights
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

#include "libcef_dll/ctocpp/sslstatus_ctocpp.h"
#include "libcef_dll/ctocpp/x509certificate_ctocpp.h"


// VIRTUAL METHODS - Body may be edited by hand.

bool CefSSLStatusCToCpp::IsSecureConnection() {
  cef_sslstatus_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_secure_connection))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_secure_connection(_struct);

  // Return type: bool
  return _retval?true:false;
}

cef_cert_status_t CefSSLStatusCToCpp::GetCertStatus() {
  cef_sslstatus_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_cert_status))
    return CERT_STATUS_NONE;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_cert_status_t _retval = _struct->get_cert_status(_struct);

  // Return type: simple
  return _retval;
}

cef_ssl_version_t CefSSLStatusCToCpp::GetSSLVersion() {
  cef_sslstatus_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_sslversion))
    return SSL_CONNECTION_VERSION_UNKNOWN;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_ssl_version_t _retval = _struct->get_sslversion(_struct);

  // Return type: simple
  return _retval;
}

cef_ssl_content_status_t CefSSLStatusCToCpp::GetContentStatus() {
  cef_sslstatus_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_content_status))
    return SSL_CONTENT_NORMAL_CONTENT;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_ssl_content_status_t _retval = _struct->get_content_status(_struct);

  // Return type: simple
  return _retval;
}

CefRefPtr<CefX509Certificate> CefSSLStatusCToCpp::GetX509Certificate() {
  cef_sslstatus_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_x509certificate))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_x509certificate_t* _retval = _struct->get_x509certificate(_struct);

  // Return type: refptr_same
  return CefX509CertificateCToCpp::Wrap(_retval);
}


// CONSTRUCTOR - Do not edit by hand.

CefSSLStatusCToCpp::CefSSLStatusCToCpp() {
}

template<> cef_sslstatus_t* CefCToCppRefCounted<CefSSLStatusCToCpp,
    CefSSLStatus, cef_sslstatus_t>::UnwrapDerived(CefWrapperType type,
    CefSSLStatus* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template<> base::AtomicRefCount CefCToCppRefCounted<CefSSLStatusCToCpp,
    CefSSLStatus, cef_sslstatus_t>::DebugObjCt = 0;
#endif

template<> CefWrapperType CefCToCppRefCounted<CefSSLStatusCToCpp, CefSSLStatus,
    cef_sslstatus_t>::kWrapperType = WT_SSLSTATUS;