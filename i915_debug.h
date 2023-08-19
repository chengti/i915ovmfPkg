#include <Library/DebugLib.h>

#ifndef DEBUG_LINE_NUMBER
#define DEBUG_LINE_NUMBER __LINE__
#endif

#ifndef PRINT_DEBUG
#ifndef MDEPKG_NDEBUG
//%a is used instead of %s due to specific implementations in edk2. Mainly ASCII vs unicode.
#define PRINT_DEBUG(ERR_LEVEL, ...)                                                 \
    do                                                                              \
    {                                                                               \
        DebugPrint(ERR_LEVEL, "i915 Message: %a(%d)", __func__, DEBUG_LINE_NUMBER); \
        DebugPrint(ERR_LEVEL, __VA_ARGS__);                                         \
    } while (0)
#else
#define PRINT_DEBUG(ERR_LEVEL, ...)              \
    do                                           \
    {                                            \
        DebugPrint(ERR_LEVEL, "i915 Message: "); \
        DebugPrint(ERR_LEVEL, __VA_ARGS__);      \
    } while (0)
#endif
#endif


/**
  Function printing hex output to the console.

  @param[in] Indent       Number of spaces to indent.
  @param[in] Offset       Offset to start with.
  @param[in] DataSize     Length of data.
  @param[in] UserData     Pointer to some data.
**/
VOID
EFIAPI
DumpOpRegionHex (
  IN UINTN  Indent,
  IN UINTN  Offset,
  IN UINTN  DataSize,
  IN VOID   *UserData
  );
