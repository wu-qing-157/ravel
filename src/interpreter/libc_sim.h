#pragma once

#include <array>
#include <cstddef>
#include <cstdio>
#include <unordered_set>
#include <vector>

// IO
namespace ravel::libc {

void puts(std::array<std::int32_t, 32> &regs, std::vector<std::byte> &storage,
          FILE *fp);

void scanf(std::array<std::int32_t, 32> &regs, std::vector<std::byte> &storage,
           FILE *fp);

void printf(std::array<std::int32_t, 32> &regs,
            const std::vector<std::byte> &storage, FILE *fp);

void putchar(std::array<std::int32_t, 32> &regs, FILE *fp);

} // namespace ravel::libc

namespace ravel::libc {

void malloc(std::array<std::int32_t, 32> &regs,
            const std::vector<std::byte> &storage, std::size_t &heapPtr,
            std::unordered_set<std::size_t> &malloced);

void free(const std::array<std::int32_t, 32> &regs,
          std::unordered_set<std::size_t> &malloced);

void memcpy(std::array<std::int32_t, 32> &regs,
            std::vector<std::byte> &storage);

void strlen(std::array<std::int32_t, 32> &regs,
            const std::vector<std::byte> &storage);

void strcpy(std::array<std::int32_t, 32> &regs,
            std::vector<std::byte> &storage);

void memset(std::array<std::int32_t, 32> &regs,
            std::vector<std::byte> &storage);

} // namespace ravel::libc