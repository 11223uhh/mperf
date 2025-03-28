#pragma once

#include <cstdint>
#include <string>

namespace mperf {

// CPU feature detection
int cpu_info_support_arm_neon();
int cpu_info_support_arm_vfpv4();
int cpu_info_support_arm_asimdhp();
int cpu_info_support_arm_asimddp();
int cpu_info_support_x86_avx();
int cpu_info_support_x86_fma();
int cpu_info_support_x86_xop();
int cpu_info_support_x86_avx2();
int cpu_info_support_x86_avx_vnni();
int cpu_info_support_x86_avx512();
int cpu_info_support_x86_avx512_vnni();
int cpu_info_support_mips_msa();
int cpu_info_support_loongson_mmi();
int cpu_info_support_riscv_v();
int cpu_info_support_riscv_zfh();
int cpu_info_cpu_riscv_vlenb();

// CPU information
int cpu_info_get_cpu_count();
int cpu_info_get_active_cpu_count(int powersave);
int cpu_info_get_max_freq_khz(int cpuid);
int cpu_info_get_cpu_powersave();
int cpu_info_get_little_cpu_count();
int cpu_info_get_middle_cpu_count();
int cpu_info_get_big_cpu_count();
int cpu_info_set_cpu_powersave(int powersave);

// Denormal handling
int cpu_info_get_flush_denormals();
int cpu_info_set_flush_denormals(int flush_denormals);

// Feature support string
std::string cpu_info_support_features();

// CPU architecture specific types
#if defined(__x86_64__) || defined(_M_X64)
using cpu_set_t = unsigned long long;
#else
using cpu_set_t = unsigned long;
#endif

} // namespace mperf