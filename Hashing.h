// Hashing.h
// Provides utility functions for calculating content hashes.

#ifndef HASHING_H
#define HASHING_H

#include <string> // For std::string
#include <vector> // Potentially for processing byte vectors

/**
 * @brief Namespace for hashing utility functions.
 */
namespace Hashing {

    /**
     * @brief Calculates a simple (non-cryptographic) hash of a given string content.
     * This hash is used to uniquely identify file blobs and commit objects.
     * For a real Git, a cryptographic hash like SHA-1 would be used.
     * @param content The string content to hash.
     * @return A string representing the calculated hash.
     */
    std::string calculateHash(const std::string& content);

    // TODO: Potentially add a function to calculate hash from a file directly
    // std::string calculateHashFromFile(const std::string& filepath);

} // namespace Hashing

#endif // HASHING_H
