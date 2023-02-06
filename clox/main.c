#include "chunk.h"
#include "common.h"
#include "debug.h"
#include "vm.h"


int main(int argc, const char* argv[]) {
    init_VM();

    Chunk chunk;
    init_Chunk(&chunk);

    int constant = add_constant(&chunk, 1.2);
    write_Chunk(&chunk, OP_CONSTANT, 123);
    write_Chunk(&chunk, constant, 123);

    constant = add_constant(&chunk, 4.4);
    write_Chunk(&chunk, OP_CONSTANT, 123);
    write_Chunk(&chunk, constant, 123);

    write_Chunk(&chunk, OP_ADD, 123);

    constant = add_constant(&chunk, 5.6);
    write_Chunk(&chunk, OP_CONSTANT, 123);
    write_Chunk(&chunk, constant, 123);

    write_Chunk(&chunk, OP_DIVIDE, 123);
    write_Chunk(&chunk, OP_NEGATE, 123);

    write_Chunk(&chunk, OP_RETURN, 123);

    interpret(&chunk);

    free_VM();
    free_Chunk(&chunk);
    return 0;
}
