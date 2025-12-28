CC := gcc

GUI_DIR   := gui
LIB_DIR   := lib
BUILD_DIR := build

SRCS = $(wildcard $(LIB_DIR)/*.c) $(wildcard $(GUI_DIR)/*.c)

CFLAGS  := -O2 -I$(LIB_DIR)
LDFLAGS := `pkg-config --cflags --libs gtk+-3.0`

TARGET  := $(BUILD_DIR)/avl

all: $(TARGET)

$(TARGET): $(SRCS) | $(BUILD_DIR)
	$(CC) $(SRCS) -o $(TARGET) $(CFLAGS) $(LDFLAGS)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

clean:
	rm -rf $(wildcard $(BUILD_DIR)/*)

