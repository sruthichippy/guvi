#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
 //used to add some information about the modules
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("An Example module");
 static int mod_init(void) {
    printk(KERN_INFO"** Loaded module\n");
    //successful compilation returns zero 
    return 0;                 
}                
static void mod_exit(void) 
{
    printk(KERN_INFO"** Module exiting\n");
}                                   
module_init(mod_init);
module_exit(mod_exit);
