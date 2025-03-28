#pragma once

#include <map>
#include <string>
#include <cstdint>
#include <vector>

namespace mperf {

//! get cpu vendor
std::string cpu_info_vendor();

//! get cpu brand
std::string cpu_info_brand();

//! get cpu family
int cpu_info_family();

//! get cpu model
int cpu_info_model();

//! get cpu stepping
int cpu_info_stepping();

//! get cpu type
int cpu_info_type();

//! get cpu cores number
int cpu_info_cores();

//! get cpu logical processors number
int cpu_info_processors();

//! get cpu frequency
float cpu_info_max_frequency();

//! get cpu frequency
float cpu_info_min_frequency();

//! get cpu frequency
float cpu_info_cur_frequency();

//! get cpu cache size
int cpu_info_l1_cache_size();
int cpu_info_l2_cache_size();
int cpu_info_l3_cache_size();

//! get cpu cache line size
int cpu_info_cache_line_size();

//! get cpu tlb size
int cpu_info_tlb_size();

//! get cpu features
std::vector<std::string> cpu_info_features();

//! get cpu features map
std::map<std::string, bool> cpu_info_features_map();

//! check if cpu support feature
bool cpu_info_support_feature(const std::string& feature);

//! get cpu microarchitecture
std::string cpu_info_uarch();

//! get cpu isa
std::string cpu_info_isa();

//! get cpu endian
std::string cpu_info_endian();

//! get cpu bits
int cpu_info_bits();

//! get cpu registers
int cpu_info_registers();

//! get cpu reference frequency
uint64_t cpu_info_ref_freq(int dev_id = 0);

//! get cpu reference cycles
uint64_t cpu_info_ref_cycles(int dev_id = 0);

} // namespace mperf