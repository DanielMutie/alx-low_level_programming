#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <stdlib.h>
#include <string.h>

#define ERR_EXIT(msg) { perror(msg); exit(98); }

/**
 * print_magic - Print the magic number in the ELF header.
 * @e_ident: The ELF identification array.
 */
void print_magic(unsigned char *e_ident)
{
    int i;

    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++)
        printf("%02x ", e_ident[i]);
    printf("\n");
}

/**
 * print_class - Print the class in the ELF header.
 * @e_ident: The ELF identification array.
 */
void print_class(unsigned char *e_ident)
{
    printf("  Class:                             ");
    switch (e_ident[EI_CLASS])
    {
        case ELFCLASS32:
            printf("ELF32\n");
            break;
        case ELFCLASS64:
            printf("ELF64\n");
            break;
        default:
            printf("<unknown: %x>\n", e_ident[EI_CLASS]);
    }
}

/**
 * print_data - Print the data encoding in the ELF header.
 * @e_ident: The ELF identification array.
 */
void print_data(unsigned char *e_ident)
{
    printf("  Data:                              ");
    switch (e_ident[EI_DATA])
    {
        case ELFDATA2LSB:
            printf("2's complement, little endian\n");
            break;
        case ELFDATA2MSB:
            printf("2's complement, big endian\n");
            break;
        default:
            printf("<unknown: %x>\n", e_ident[EI_DATA]);
    }
}

/**
 * print_version - Print the version in the ELF header.
 * @e_ident: The ELF identification array.
 */
void print_version(unsigned char *e_ident)
{
    printf("  Version:                           %d (current)\n", e_ident[EI_VERSION]);
}

/**
 * print_osabi - Print the OS/ABI in the ELF header.
 * @e_ident: The ELF identification array.
 */
void print_osabi(unsigned char *e_ident)
{
    printf("  OS/ABI:                            ");
    switch (e_ident[EI_OSABI])
    {
        case ELFOSABI_SYSV:
            printf("UNIX - System V\n");
            break;
        case ELFOSABI_NETBSD:
            printf("UNIX - NetBSD\n");
            break;
        case ELFOSABI_SOLARIS:
            printf("UNIX - Solaris\n");
            break;
        default:
            printf("<unknown: %x>\n", e_ident[EI_OSABI]);
    }
}

/**
 * print_abiversion - Print the ABI version in the ELF header.
 * @e_ident: The ELF identification array.
 */
void print_abiversion(unsigned char *e_ident)
{
    printf("  ABI Version:                       %d\n", e_ident[EI_ABIVERSION]);
}

/**
 * print_type - Print the type in the ELF header.
 * @e_type: The ELF type.
 */
void print_type(uint16_t e_type)
{
    printf("  Type:                              ");
    switch (e_type)
    {
        case ET_EXEC:
            printf("EXEC (Executable file)\n");
            break;
        case ET_DYN:
            printf("DYN (Shared object file)\n");
            break;
        default:
            printf("<unknown: %x>\n", e_type);
    }
}

/**
 * print_entrypoint - Print the entry point address in the ELF header.
 * @e_entry: The ELF entry point address.
 */
void print_entrypoint(uint64_t e_entry)
{
    printf("  Entry point address:               0x%lx\n", e_entry);
}

int main(int argc, char *argv[])
{
    int fd;
    Elf64_Ehdr elf_header;
    ssize_t n;

    if (argc != 2)
    {
        dprintf(2, "Usage: %s elf_filename\n", argv[0]);
        exit(98);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
        ERR_EXIT("open");

    n = read(fd, &elf_header, sizeof(elf_header));
    if (n == -1)
        ERR_EXIT("read");

    if (n != sizeof(elf_header))
    {
        dprintf(2, "Error: Not a valid ELF file\n");
        exit(98);
    }

    print_magic(elf_header.e_ident);
    print_class(elf_header.e_ident);
    print_data(elf_header.e_ident);
    print_version(elf_header.e_ident);
    print_osabi(elf_header.e_ident);
    print_abiversion(elf_header.e_ident);
    print_type(elf_header.e_type);
    print_entrypoint(elf_header.e_entry);

    close(fd);
    return (0);
}

