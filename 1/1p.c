#include<linux/module.h>

MODULE_LICENSE("GPL");
MODULE_LICENSE("GPL v2");
MODULE_LICENSE("Dual BSD/GPL");

MODULE_AUTHOR("balu");
MODULE_DESCRIPTION("A sample driver first code");
MODULE_VERSION("1:0.0");


static int __init hello_world_init(void)
{
printk(KERN_INFO"hello world entry");
return 0;
}

void __exit hello_world_exit(void)
{
printk(KERN_INFO"hello world exit");
}

module_init(hello_world_init);
module_exit(hello_world_exit);
