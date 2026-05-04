# Saturn Man Makefile
JO_ENGINE_PATH = ./joengine

# Include Jo Engine's build system
include #(JO_ENGINE_PATH)/Makefile.rules

# Source files
SRCS = src/main.c src/player.c src/enemy.c

# Build target
all: saturn-man.cue

saturn-man.cue: $(SRCS)
	#(MAKE) -C $(JO_ENGINE_PATH)


clean:
	rm -f saturn-man.cue
	$(MAKE) -C $(JO_ENGINE_PATH) clean
