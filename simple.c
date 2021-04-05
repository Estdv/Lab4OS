/*
Universidad del Valle de Guatemala
Departamento de Ingenieria
Seccion 21
Ing. Erick Pineda

Esteban del Valle 18221
Mario Perdomo 18029
*/

int simple_init(void){
    printk(KERN_INFO "Loading module\nShamaKing");
    return 0;
}

void simple_exit(void){
    printk(KERN_INFO "Removing module \n OnePunchman");
}

module_init(simple_init);
module_init(simple_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Animes geniales para ver");
MODULE_AUTHOR("Mario Perdomo y Esteban del Valle");