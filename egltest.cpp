#include <stdio.h>
#include <EGL/egl.h>
int main() {
    EGLint major, minor;
    EGLDisplay eglDisplay = eglGetDisplay(EGL_DEFAULT_DISPLAY);
    EGLBoolean eglInitialized = eglInitialize(eglDisplay, &major, &minor);
    if (eglInitialized == EGL_TRUE) {
        printf("EGL version: %d.%d\n", major, minor);
    } else {
        printf("Failed!\n");
    }
    return 0;
}