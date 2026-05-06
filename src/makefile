# Saturn Man Makefile
# Jo Engine build configuration

# ============ Configuration ============

# Optional modules (set to 1 to enable, 0 to disable)
JO_COMPILE_WITH_VIDEO_MODULE = 0
JO_COMPILE_WITH_BACKUP_MODULE = 0
JO_COMPILE_WITH_TGA_MODULE = 1
JO_COMPILE_WITH_AUDIO_MODULE = 0
JO_COMPILE_WITH_3D_MODULE = 0
JO_COMPILE_WITH_PSEUDO_MODE7_MODULE = 0
JO_COMPILE_WITH_EFFECTS_MODULE = 0
JO_COMPILE_WITH_RAM_CARD_MODULE = 0
JO_DEBUG = 1

JO_FRAMERATE = 60

# ============ Source Files ============
# List all your .c source files here (NOT .h files)
SRCS = main.c player.c input.c

# ============ Paths ============
# Points to Jo Engine location
JO_ENGINE_SRC_DIR = ../../joengine/jo_engine

# Points to compiler directory
COMPILER_DIR = ../../joengine/Compiler

# ============ Build ============
# Include Jo Engine's master makefile
include $(COMPILER_DIR)/COMMON/jo_engine_makefile