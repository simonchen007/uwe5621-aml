#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x81942506, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xb30370a4, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x65e886aa, __VMLINUX_SYMBOL_STR(cfg80211_rx_unprot_mlme_mgmt) },
	{ 0x92b57248, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xb98518d0, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0xf7472f72, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xa12f9f13, __VMLINUX_SYMBOL_STR(cfg80211_cqm_rssi_notify) },
	{ 0xe4689576, __VMLINUX_SYMBOL_STR(ktime_get_with_offset) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x6155a9c9, __VMLINUX_SYMBOL_STR(wiphy_free) },
	{ 0xa2ab052c, __VMLINUX_SYMBOL_STR(cfg80211_unlink_bss) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x5df860bd, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x4a43a407, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xab1f5851, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb8eec98b, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x1fe912f1, __VMLINUX_SYMBOL_STR(netdev_alloc_frag) },
	{ 0x705a8a83, __VMLINUX_SYMBOL_STR(skb_pad) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x9c64fbd, __VMLINUX_SYMBOL_STR(ieee80211_frequency_to_channel) },
	{ 0xc9ef4728, __VMLINUX_SYMBOL_STR(cfg80211_inform_bss_data) },
	{ 0xf68285c0, __VMLINUX_SYMBOL_STR(register_inetaddr_notifier) },
	{ 0xd01e8cc1, __VMLINUX_SYMBOL_STR(genl_unregister_family) },
	{ 0xd4940016, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0xf4c26f18, __VMLINUX_SYMBOL_STR(__pm_stay_awake) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xe93c0cf3, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x2931d572, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x297a67f4, __VMLINUX_SYMBOL_STR(cfg80211_chandef_create) },
	{ 0xce51d983, __VMLINUX_SYMBOL_STR(vfs_llseek) },
	{ 0xccef244c, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xb678975d, __VMLINUX_SYMBOL_STR(irq_trace_stop) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0xc559b07b, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xc458d82b, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xb4ffd7a4, __VMLINUX_SYMBOL_STR(virt_check) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x65d9e877, __VMLINUX_SYMBOL_STR(cpufreq_register_notifier) },
	{ 0x60352082, __VMLINUX_SYMBOL_STR(register_inet6addr_notifier) },
	{ 0xa0cf2b7c, __VMLINUX_SYMBOL_STR(cfg80211_rx_mgmt) },
	{ 0xc9308f50, __VMLINUX_SYMBOL_STR(filp_close) },
	{ 0xe8663ae6, __VMLINUX_SYMBOL_STR(ieee80211_channel_to_frequency) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x3234709e, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x2628479a, __VMLINUX_SYMBOL_STR(__genl_register_family) },
	{ 0xa7c84377, __VMLINUX_SYMBOL_STR(skb_set_owner_w) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xe1a86482, __VMLINUX_SYMBOL_STR(cfg80211_unregister_wdev) },
	{ 0xdaea7ae, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x230dadb6, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0x39a92810, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0xf4c91ed, __VMLINUX_SYMBOL_STR(ns_to_timespec) },
	{ 0x3992f83e, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xf32c931, __VMLINUX_SYMBOL_STR(kfree_skb_list) },
	{ 0x5160dc50, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x88246d00, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x51e77c97, __VMLINUX_SYMBOL_STR(pfn_valid) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x6bcb6e07, __VMLINUX_SYMBOL_STR(__might_sleep) },
	{ 0xaa72c3ad, __VMLINUX_SYMBOL_STR(skb_unlink) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x5ddb2b77, __VMLINUX_SYMBOL_STR(cfg80211_mgmt_tx_status) },
	{ 0x59a853b, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x6214aef2, __VMLINUX_SYMBOL_STR(cpufreq_unregister_notifier) },
	{ 0x21101183, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0x2fe252cc, __VMLINUX_SYMBOL_STR(unregister_inet6addr_notifier) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xaa491604, __VMLINUX_SYMBOL_STR(kernel_read) },
	{ 0x108cde90, __VMLINUX_SYMBOL_STR(vfs_read) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x3f5c6471, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x8d2dc13b, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x60ea2d6, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0x7dbaea2c, __VMLINUX_SYMBOL_STR(cfg80211_vendor_cmd_reply) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x2bf31983, __VMLINUX_SYMBOL_STR(__ieee80211_get_channel) },
	{ 0xedf3565f, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x48829406, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x85ce9bb6, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x93813285, __VMLINUX_SYMBOL_STR(cfg80211_get_bss) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x32b4a69d, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xe6fb16a4, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xf8e2d586, __VMLINUX_SYMBOL_STR(platform_device_del) },
	{ 0x11a13e31, __VMLINUX_SYMBOL_STR(_kstrtol) },
	{ 0x251f11aa, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0xceab804d, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xb3302f12, __VMLINUX_SYMBOL_STR(wiphy_unregister) },
	{ 0x5d9ec995, __VMLINUX_SYMBOL_STR(phys_check) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x8664f62e, __VMLINUX_SYMBOL_STR(cpufreq_update_policy) },
	{ 0x723fe85d, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0x35c99359, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x1c06536a, __VMLINUX_SYMBOL_STR(netif_receive_skb) },
	{ 0x4f82db8, __VMLINUX_SYMBOL_STR(cfg80211_del_sta_sinfo) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xb84794b0, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x96d68768, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xbf3ca30, __VMLINUX_SYMBOL_STR(cfg80211_michael_mic_failure) },
	{ 0x767e80de, __VMLINUX_SYMBOL_STR(wiphy_apply_custom_regulatory) },
	{ 0xf1969a8e, __VMLINUX_SYMBOL_STR(__usecs_to_jiffies) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0xaa3ce1ee, __VMLINUX_SYMBOL_STR(dev_get_by_index) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x793dee37, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xc107a9ef, __VMLINUX_SYMBOL_STR(wakeup_source_unregister) },
	{ 0x373db350, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0x353f54c5, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xc6a68ceb, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0xee0e14c8, __VMLINUX_SYMBOL_STR(cfg80211_ibss_joined) },
	{ 0x12da2e16, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x146697da, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xd1e61abc, __VMLINUX_SYMBOL_STR(__pm_relax) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x61651be, __VMLINUX_SYMBOL_STR(strcat) },
	{ 0x11ed9f6e, __VMLINUX_SYMBOL_STR(__cfg80211_send_event_skb) },
	{ 0x27891f1d, __VMLINUX_SYMBOL_STR(build_skb) },
	{ 0x9766fc37, __VMLINUX_SYMBOL_STR(cfg80211_tdls_oper_request) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x7ce4ce42, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x8cfcbad2, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x8bfecf3d, __VMLINUX_SYMBOL_STR(cfg80211_ch_switch_notify) },
	{ 0xa0257627, __VMLINUX_SYMBOL_STR(cfg80211_put_bss) },
	{ 0x1853f571, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xfe029963, __VMLINUX_SYMBOL_STR(unregister_inetaddr_notifier) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x8362656d, __VMLINUX_SYMBOL_STR(__cfg80211_alloc_event_skb) },
	{ 0xbd938f1a, __VMLINUX_SYMBOL_STR(__cfg80211_alloc_reply_skb) },
	{ 0xb230e2be, __VMLINUX_SYMBOL_STR(wiphy_register) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xba8bb333, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xb8827106, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x2aa0e4fc, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x1c292e4b, __VMLINUX_SYMBOL_STR(cfg80211_ready_on_channel) },
	{ 0x8a7d1c31, __VMLINUX_SYMBOL_STR(high_memory) },
	{ 0x2ba75655, __VMLINUX_SYMBOL_STR(cfg80211_connect_bss) },
	{ 0x8398f626, __VMLINUX_SYMBOL_STR(wiphy_new_nm) },
	{ 0xcc2151cc, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0x8818e45, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x94eea794, __VMLINUX_SYMBOL_STR(getnstimeofday64) },
	{ 0x7f24de73, __VMLINUX_SYMBOL_STR(jiffies_to_usecs) },
	{ 0x63badac9, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x64a4e393, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x38238fa0, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x17fdee0f, __VMLINUX_SYMBOL_STR(cfg80211_disconnected) },
	{ 0xa3fe0311, __VMLINUX_SYMBOL_STR(__pskb_copy_fclone) },
	{ 0x5e84f372, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x36e0857a, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0xfabbfd19, __VMLINUX_SYMBOL_STR(cfg80211_new_sta) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0xb874eeed, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x31b9195c, __VMLINUX_SYMBOL_STR(__local_bh_disable_ip) },
	{ 0x2d9919b9, __VMLINUX_SYMBOL_STR(cfg80211_roamed_bss) },
	{ 0xa0381967, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x44da5d0f, __VMLINUX_SYMBOL_STR(__csum_ipv6_magic) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6f9ca5cc, __VMLINUX_SYMBOL_STR(regulatory_hint) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe321e23c, __VMLINUX_SYMBOL_STR(genlmsg_put) },
	{ 0xeaff1506, __VMLINUX_SYMBOL_STR(set_user_nice) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x1a7af0e3, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x53a34ed9, __VMLINUX_SYMBOL_STR(cfg80211_remain_on_channel_expired) },
	{ 0x586fc410, __VMLINUX_SYMBOL_STR(nla_put_64bit) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x216daeee, __VMLINUX_SYMBOL_STR(irq_trace_start) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xc66fe036, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x47e2aa29, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x250eca3a, __VMLINUX_SYMBOL_STR(cfg80211_scan_done) },
	{ 0x45163545, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xedb52bae, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x7cf9099, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x55a199a0, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x97826441, __VMLINUX_SYMBOL_STR(wakeup_source_register) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0xb3e4c7f, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0xbb7354d1, __VMLINUX_SYMBOL_STR(vfs_write) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x2bf17e5e, __VMLINUX_SYMBOL_STR(filp_open) },
	{ 0x92e64c05, __VMLINUX_SYMBOL_STR(cfg80211_sched_scan_results) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Csprd,unisoc-wifi");
MODULE_ALIAS("of:N*T*Csprd,unisoc-wifiC*");
