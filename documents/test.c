extern char Image$$RW_IRAM1$$Base[];
extern char Image$$RW_IRAM1$$Limit[];
extern char Load$$RW_IRAM1$$Base[];
extern char Load$$RW_IRAM1$$Limit[];

int main(int argc, char *argv[])
{
    printf("Image RW base:   0x%08x.\n", Image$$RW_IRAM1$$Base);
    printf("Image RW limit:  0x%08x.\n", Image$$RW_IRAM1$$Limit);
    printf("Load  RW base:   0x%08x.\n", Load$$RW_IRAM1$$Base);
    printf("Load  RW limit:  0x%08x.\n", Load$$RW_IRAM1$$Limit);

    return 0;
}
