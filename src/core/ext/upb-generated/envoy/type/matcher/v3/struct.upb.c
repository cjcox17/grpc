/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/type/matcher/v3/struct.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg.h"
#include "envoy/type/matcher/v3/struct.upb.h"
#include "envoy/type/matcher/v3/value.upb.h"
#include "udpa/annotations/status.upb.h"
#include "udpa/annotations/versioning.upb.h"
#include "validate/validate.upb.h"

#include "upb/port_def.inc"

static const upb_msglayout *const envoy_type_matcher_v3_StructMatcher_submsgs[2] = {
  &envoy_type_matcher_v3_StructMatcher_PathSegment_msginit,
  &envoy_type_matcher_v3_ValueMatcher_msginit,
};

static const upb_msglayout_field envoy_type_matcher_v3_StructMatcher__fields[2] = {
  {2, UPB_SIZE(8, 16), 0, 0, 11, 3},
  {3, UPB_SIZE(4, 8), 1, 1, 11, 1},
};

const upb_msglayout envoy_type_matcher_v3_StructMatcher_msginit = {
  &envoy_type_matcher_v3_StructMatcher_submsgs[0],
  &envoy_type_matcher_v3_StructMatcher__fields[0],
  UPB_SIZE(16, 24), 2, false, 255,
};

static const upb_msglayout_field envoy_type_matcher_v3_StructMatcher_PathSegment__fields[1] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(-9, -17), 0, 9, 1},
};

const upb_msglayout envoy_type_matcher_v3_StructMatcher_PathSegment_msginit = {
  NULL,
  &envoy_type_matcher_v3_StructMatcher_PathSegment__fields[0],
  UPB_SIZE(16, 32), 1, false, 255,
};

#include "upb/port_undef.inc"

