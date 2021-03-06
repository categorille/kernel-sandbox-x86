#include <stddef.h>
#include <stdint.h>

#include "vga.h"
#include "strings.h"
#include "printf.h"

void kernel_main(void) {
    struct term term;
    term_init(&term);
    term_clear(&term);
    term_set_color(&term, VGA_COLOR_LIGHT_GREY, VGA_COLOR_BLUE);
    for (size_t i = 0; i < 192; ++i) {
        term_printf(&term, "number %d\n", i);
    }
}

