struct A {
    // sizeof(int) = 4
    int x;
    // Padding of 4 bytes

    // sizeof(double) = 8
    double z;

    // sizeof(short int) = 2
    short int y;
    // Padding of 6 bytes
};  // Total size = 24 bytes



struct B {
    // sizeof(double) = 8
    double z;

    // sizeof(int) = 4
    int x;

    // sizeof(short int) = 2
    short int y;
    // Padding of 2 bytes
};  // Total size = 16 bytes



struct C {
    // sizeof(double) = 8
    double z;

    // sizeof(short int) = 2
    short int y;
    // Padding of 2 bytes

    // sizeof(int) = 4
    int x;
}; // Total size = 16 bytes



struct __attribute__((__packed__)) A_pack {
    // sizeof(int) = 4
    int x;

    // sizeof(double) = 8
    double z;

    // sizeof(short int) = 2
    short int y;
};  // Total size = 14 bytes