/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/cluster/v3/circuit_breaker.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_CONFIG_CLUSTER_V3_CIRCUIT_BREAKER_PROTO_UPBDEFS_H_
#define ENVOY_CONFIG_CLUSTER_V3_CIRCUIT_BREAKER_PROTO_UPBDEFS_H_

#include "upb/def.h"
#include "upb/port_def.inc"
#ifdef __cplusplus
extern "C" {
#endif

#include "upb/def.h"

#include "upb/port_def.inc"

extern upb_def_init envoy_config_cluster_v3_circuit_breaker_proto_upbdefinit;

UPB_INLINE const upb_msgdef *envoy_config_cluster_v3_CircuitBreakers_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_cluster_v3_circuit_breaker_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.cluster.v3.CircuitBreakers");
}

UPB_INLINE const upb_msgdef *envoy_config_cluster_v3_CircuitBreakers_Thresholds_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_cluster_v3_circuit_breaker_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.cluster.v3.CircuitBreakers.Thresholds");
}

UPB_INLINE const upb_msgdef *envoy_config_cluster_v3_CircuitBreakers_Thresholds_RetryBudget_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_cluster_v3_circuit_breaker_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.cluster.v3.CircuitBreakers.Thresholds.RetryBudget");
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* ENVOY_CONFIG_CLUSTER_V3_CIRCUIT_BREAKER_PROTO_UPBDEFS_H_ */
