# MiniGit - A Custom Version Control System (C++)

MiniGit is a simplified, local-only version control system that mimics basic Git operations like `init`, `add`, `commit`, `log`, `branch`, `checkout`, and `merge`. It is written in C++ for educational purposes.

## Project Structure

├── MiniGit.cpp / .h
├── Commit.cpp / .h
├── FileUtils.cpp / .h
├── Hashing.cpp / .h
├── main.cpp
├── minigit.exe
├── file1.txt, first_file.txt
└── .minigit/
├── objects/
├── refs/
│ ├── heads/
│ └── HEAD
└── index

All commands are executed via:
./minigit <command> [options]
Basic Commands
| Command                         | Description                            |
| ------------------------------- | -------------------------------------- |
| `./minigit init`                | Initialize a new MiniGit repository    |
| `./minigit add <filename>`      | Stage a file for the next commit       |
| `./minigit commit -m "message"` | Commit all staged files with a message |
| `./minigit log`                 | Show commit history                    |

Branching & Checkout
| Command                            | Description                                 |
| ---------------------------------- | ------------------------------------------- |
| `./minigit branch <branch-name>`   | Create a new branch at the current commit   |
| `./minigit checkout <branch-name>` | Switch to another branch                    |
| `./minigit checkout <commit-hash>` | Switch to a specific commit (detached mode) |

Merging & Diff
| Command                              | Description                                                                    |
| ------------------------------------ | ------------------------------------------------------------------------------ |
| `./minigit merge <branch-name>`      | Merge the given branch into the current branch                                 |
| `./minigit diff <commit1> [commit2]` | View changes between two commits or between a commit and the working directory |



-----------------------------------------------------------------
 Features
Git-like CLI: init, add, commit, log, branch, checkout, merge, diff

Stores file snapshots as content-addressed blobs

Commit graph as a Directed Acyclic Graph (DAG)

Merge support with conflict detection and markers

Lightweight diff viewer
------------------------------

Build Instructions
To compile the program:
g++ -std=c++17 -o minigit main.cpp MiniGit.cpp Commit.cpp FileUtils.cpp Hashing.cpp
--------------------------------------------------

To run commands (example):
./minigit init
./minigit add file1.txt
./minigit commit -m "Initial commit"
./minigit branch newfeature
./minigit checkout newfeature
./minigit merge master


----------------------------------------------
 Limitations
Only supports local repositories (no remote push/pull)

Merge conflict resolution must be done manually

No file rename/move detection

Whole file tracking only (not line-by-line)

-----------------------------------------
Future Improvements
Add GUI or text-based UI

SHA-1 integration

Remote push/pull simulation

Better diff visualizer

Support file renames and move tracking

Commit reversion/reset features
 Author
Misganaw Habtamu,
Lemi Gobenna, 
Fita Alemayehu,
Bekalu Addisu, 
Olit Oltgira


