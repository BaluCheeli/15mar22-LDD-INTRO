#include<linux/module.h>

MODULE_LICENSE("GPL");
MODULE_LICENSE("GPL v2");
MODULE_LICENSE("Dual BSD/GPL");

MODULE_AUTHOR("BALU");
MODULE_DESCRIPTION("A Semaphore driver");
MODULE_VERSION("1:0.1");

static int __init hlwrld_init(void)   /*constructor*/
{
printk(KERN_INFO "hlwrld prg");
return 0;
}

static void __exit hlwrld_exit(void)
{
printk(KERN_INFO "exit my hlwrld");
}

module_init(hlwrld_init);
module_exit(hlwrld_exit);
