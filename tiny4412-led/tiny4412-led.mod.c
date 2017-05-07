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

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x510068c, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x93490943, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xcfc19cb9, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xba301363, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x47f5d1e1, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x3356da59, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x1d58acc5, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0x43b45945, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0xf82a9d8f, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0x7eb99673, __VMLINUX_SYMBOL_STR(pinctrl_select_state) },
	{ 0xdf753012, __VMLINUX_SYMBOL_STR(pinctrl_lookup_state) },
	{ 0xd66e0994, __VMLINUX_SYMBOL_STR(devm_pinctrl_get) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x244a1ea2, __VMLINUX_SYMBOL_STR(gpiod_get_raw_value) },
	{ 0x9e07113e, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0xcd09bdb, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x139411f4, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x137dc1d8, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x489c5a5b, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

