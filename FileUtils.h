// FileUtils.h
// Provides utility functions for common file system operations.

#ifndef FILE_UTILS_H
#define FILE_UTILS_H

#include <string> // For std::string
#include <vector> // Potentially for listing directory contents

// Platform-specific headers for file system operations.
// For Windows, we'll use <direct.h> for _mkdir.
// For Linux/macOS, we'd use <sys/stat.h> for mkdir.
// We'll provide a simplified cross-platform approach for this project.

#ifdef _WIN32
    #include <direct.h> // For _mkdir
    #include <io.h>     // For _access
    #define MKDIR(path) _mkdir(path)
    #define ACCESS(path, mode) _access(path, mode)
#else
    #include <sys/stat.h> // For mkdir
    #include <sys/types.h> // For mkdir
    #include <unistd.h>    // For access
    #define MKDIR(path) mkdir(path, 0755) // 0755 grants read/write/execute for owner, read/execute for group/others
    #define ACCESS(path, mode) access(path, mode)
#endif


/**
 * @brief Namespace for file system utility functions.
 */
namespace FileUtils {

    /**
     * @brief Checks if a directory exists.
     * @param path The path to the directory.
     * @return true if the directory exists, false otherwise.
     */
    bool directoryExists(const std::string& path);

    /**
     * @brief Creates a directory.
     * @param path The path of the directory to create.
     * @return true if the directory was created successfully or already exists, false on error.
     */
    bool createDirectory(const std::string& path);

    /**
     * @brief Writes content to a file.
     * If the file does not exist, it will be created. If it exists, its content will be overwritten.
     * @param filepath The path to the file.
     * @param content The string content to write to the file.
     * @return true on success, false on failure.
     */
    bool writeToFile(const std::string& filepath, const std::string& content);

    /**
     * @brief Reads content from a file.
     * @param filepath The path to the file.
     * @param content A reference to a string where the file content will be stored.
     * @return true on success, false on failure (e.g., file not found, permission error).
     */
    bool readFromFile(const std::string& filepath, std::string& content);

    /**
     * @brief Deletes a file.
     * @param filepath The path to the file to delete.
     * @return true on success, false on failure.
     */
    bool deleteFile(const std::string& filepath);

    /**
     * @brief Checks if a file exists.
     * @param filepath The path to the file.
     * @return true if the file exists, false otherwise.
     */
    bool fileExists(const std::string& filepath);

    // TODO: Add more utility functions as needed, e.g., listDirectoryContents, copyFile, etc.

} // namespace FileUtils

#endif // FILE_UTILS_H
