
// defination of a structure in C
struct StructureName {
    data_type member1;
    data_type member2;
    // Add more members as needed
}s1, s2, s3; // Declare variables of type StructureName


int mai(){
    //struct StructureName s1, s2, s3; // No need to redeclare here
}



// Using typedef to simplify structure declaration
typedef struct {
    data_type member1;
    data_type member2;
    // Add more members as needed
} StructureName;


int main() {
    StructureName s1, s2, s3; // Declare variables of type StructureName
    // Now you can use s1, s2, s3 as needed
    return 0;
}