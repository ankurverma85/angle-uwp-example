//
// pch.h
// Header for platform projection include files
//

#pragma once
#pragma warning(push, 1)
#include "unknwn.h"
#ifdef GetCurrentTime
#undef GetCurrentTime
#endif
#include <windows.ui.xaml.media.dxinterop.h>

#include "winrt/Windows.ApplicationModel.Core.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.System.Threading.h"
#include "winrt/Windows.UI.Composition.h"
#include "winrt/Windows.UI.Core.h"
#include "winrt/Windows.UI.Input.h"
#include "winrt/Windows.UI.Xaml.Controls.h"

// Enable function definitions in the GL headers below
#ifndef EGL_EGL_PROTOTYPES
#define EGL_EGL_PROTOTYPES 1
#endif
// OpenGL ES includes
#define _USE_MATH_DEFINES

#include <GLES3/gl3.h>
#include <GLES3/gl32.h>

#include <GLES2/gl2.h>

#include <GLES/gl.h>

// EGL includes
#include <EGL/egl.h>
#include <EGL/eglext.h>
#include <EGL/eglplatform.h>

#include <angle_windowsstore.h>
#include <cmath>
#include <math.h>

// OpenGL ES includes
#include <GLES2/gl2.h>
#include <GLES2/gl2ext.h>

// EGL includes
#include <EGL/egl.h>
#include <EGL/eglext.h>
#include <EGL/eglplatform.h>

#define EGL_PLATFORM_ANGLE_ANGLE 0x3202
#define EGL_PLATFORM_ANGLE_TYPE_ANGLE 0x3203
#define EGL_PLATFORM_ANGLE_TYPE_D3D9_ANGLE 0x3207
#define EGL_PLATFORM_ANGLE_TYPE_D3D11_ANGLE 0x3208
#define EGL_PLATFORM_ANGLE_TYPE_OPENGL_ANGLE 0x320D
#define EGL_PLATFORM_ANGLE_ENABLE_AUTOMATIC_TRIM_ANGLE 0x320F
#define EGL_PLATFORM_ANGLE_MAX_VERSION_MAJOR_ANGLE 0x3204
#define EGL_PLATFORM_ANGLE_MAX_VERSION_MINOR_ANGLE 0x3205
#pragma warning(pop)
