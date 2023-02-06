#include "chunk.h"
#include "common.h"
#include "debug.h"

int main(int argc, const char* argv[]) {
    Chunk chunk;
    init_Chunk(&chunk);

    int constant = add_constant(&chunk, 1.2);
    write_Chunk(&chunk, OP_CONSTANT, 123);
    write_Chunk(&chunk, constant, 123);

    write_Chunk(&chunk, OP_RETURN, 123);

    disassemble_chunk(&chunk, "test chunk");

    free_Chunk(&chunk);
    return 0;
}
