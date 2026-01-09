#include <iostream>
#include <cstdint>
#include <cassert>
#include <cstring>


struct MemoryArena {

    uint8_t* memory_block; 
    size_t capacity;      
    size_t offset;         


    void init(size_t size) {
        memory_block = (uint8_t*)malloc(size); 
        capacity = size;
        offset = 0;
    }

    void* push(size_t size) {
        assert(offset + size <= capacity); 
        
        void* ptr = &memory_block[offset]; 
        offset += size;                  
        return ptr;
    }

    void save_game(MemoryArena* arena, char* buffer) {
   
        memcpy(buffer, arena->memory_block, arena->offset);
    }

    void load_game(MemoryArena* arena, char* buffer, size_t loaded_size) {
        
        memcpy(arena->memory_block, buffer, loaded_size);
    
        arena->offset = loaded_size; 
    }


    void reset() {
        offset = 0; 
    }
};