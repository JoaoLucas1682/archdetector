#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void checkArchitecture(const char* path) {
    DWORD binaryType;
    HANDLE fileHandle = CreateFile(path, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, 0, NULL);
    if (fileHandle == INVALID_HANDLE_VALUE) {
        printf("Error opening file.\n");
        return;
    }

    if (!GetBinaryType(path, &binaryType)) {
        printf("Error getting binary type.\n");
        CloseHandle(fileHandle);
        return;
    }

    switch (binaryType) {
        case SCS_32BIT_BINARY:
            printf("32-bit executable.\n");
            break;
        case SCS_64BIT_BINARY:
            printf("64-bit executable.\n");
            break;
        case SCS_DOS_BINARY:
            printf("16-bit MS-DOS executable.\n");
            break;
        case SCS_WOW_BINARY:
            printf("16-bit Windows executable.\n");
            break;
        case SCS_PIF_BINARY:
            printf("PIF file.\n");
            break;
        case SCS_POSIX_BINARY:
            printf("POSIX executable.\n");
            break;
        case SCS_OS216_BINARY:
            printf("16-bit OS/2 executable.\n");
            break;
        default:
            printf("Unknown executable type.\n");
    }

    CloseHandle(fileHandle);
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("Usage: %s <executable_path>\n", argv[0]);
        return 1;
    }

    checkArchitecture(argv[1]);

    printf("Press any key to exit...\n");
    getchar();

    return 0;
}
