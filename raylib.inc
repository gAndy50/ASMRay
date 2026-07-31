;if ~ defined __WIN32AX_INC__
;    include 'win32ax.inc'
;end if

;Raylib FASMW Wrapper
;Written by Andy P.
;Copyright (c) 2026
;For Raylib 6.0 (32-bit)
;Written in FASMW 1.73.35
;x86 Assembly

RAYLIB_VERSION_MAJOR = 6
RAYLIB_VERSION_MINOR = 0
RAYLIB_VERSION_PATCH = 0
RAYLIB_VERSION = "6.0"

;PI = 3.14159265358979323846

DEG2RAD = 0.017453292519943295
RAD2DEG = 57.29577951308232

FLAG_VSYNC_HINT = 0x00000040
FLAG_FULLSCREEN_MODE = 0x00000002
FLAG_WINDOW_RESIZABLE = 0x00000004
FLAG_WINDOW_UNDECORATED = 0x00000008
FLAG_WINDOW_HIDDEN = 0x00000080
FLAG_WINDOW_MINIMIZED = 0x00000200
FLAG_WINDOW_MAXIMIZED = 0x00000400
FLAG_WINDOW_UNFOCUSED = 0x00000800
FLAG_WINDOW_TOPMOST = 0x00001000
FLAG_WINDOW_ALWAYS_RUN = 0x00000100
FLAG_WINDOW_TRANSPARENT = 0x00000010
FLAG_WINDOW_HIGHDPI = 0x00002000
FLAG_WINDOW_MOUSE_PASSTHROUGH = 0x00004000
FLAG_BORDERLESS_WINDOWED_MODE = 0x00008000
FLAG_MSAA_4X_HINT = 0x00000020
FLAG_INTERLACED_HINT = 0x00010000

LOG_ALL = 0
LOG_TRACE = 1
LOG_DEBUG = 2
LOG_INFO = 3
LOG_WARNING = 4
LOG_ERROR = 5
LOG_FATAL = 6
LOG_NONE = 7

KEY_NULL = 0

KEY_APOSTROPHE = 39
KEY_COMMA = 44
KEY_MINUS = 45
KEY_PERIOD = 46
KEY_SLASH = 47
KEY_ZERO = 48
KEY_ONE = 49
KEY_TWO = 50
KEY_THREE = 51
KEY_FOUR = 52
KEY_FIVE = 53
KEY_SIX = 54
KEY_SEVEN = 55
KEY_EIGHT = 56
KEY_NINE = 57
KEY_SEMICOLON = 59
KEY_EQUAL = 61
KEY_A = 65
KEY_B = 66
KEY_C = 67
KEY_D = 68
KEY_E = 69
KEY_F = 70
KEY_G = 71
KEY_H = 72
KEY_I = 73
KEY_J = 74
KEY_K = 75
KEY_L = 76
KEY_M = 77
KEY_N = 78
KEY_O = 79
KEY_P = 80
KEY_Q = 81
KEY_R = 82
KEY_S = 83
KEY_T = 84
KEY_U = 85
KEY_V = 86
KEY_W = 87
KEY_X = 88
KEY_Y = 89
KEY_Z = 90
KEY_LEFT_BRACKET = 91
KEY_BACKSLASH = 92
KEY_RIGHT_BRACKET = 93
KEY_GRAVE = 96

KEY_SPACE = 32
KEY_ESCAPE = 256
KEY_ENTER = 257
KEY_TAB = 258
KEY_BACKSPACE = 259
KEY_INSERT = 260
KEY_DELETE = 261
KEY_RIGHT = 262
KEY_LEFT = 263
KEY_DOWN = 264
KEY_UP = 265
KEY_PAGE_UP = 266
KEY_PAGE_DOWN = 267
KEY_HOME = 268
KEY_END = 269
KEYS_CAPS_LOCK = 280
KEY_SCROLL_LOCK = 281
KEY_NUM_LOCK = 282
KEY_PRINT_SCREEN = 283
KEY_PAUSE = 284
KEY_F1 = 290
KEY_F2 = 291
KEY_F3 = 292
KEY_F4 = 293
KEY_F5 = 294
KEY_F6 = 295
KEY_F7 = 296
KEY_F8 = 297
KEY_F9 = 298
KEY_F10 = 299
KEY_F11 = 300
KEY_F12 = 301
KEY_LEFT_SHIFT = 340
KEY_LEFT_CONTROL = 341
KEY_LEFT_ALT = 342
KEY_LEFT_SUPER = 343
KEY_RIGHT_SHIFT = 344
KEY_RIGHT_CONTROL = 345
KEY_RIGHT_ALT = 346
KEY_RIGHT_SUPER = 347
KEY_KB_MENU = 348

KEY_KP_0 = 320
KEY_KP_1 = 321
KEY_KP_2 = 322
KEY_KP_3 = 323
KEY_KP_4 = 324
KEY_KP_5 = 325
KEY_KP_6 = 326
KEY_KP_7 = 327
KEY_KP_8 = 328
KEY_KP_9 = 329
KEY_KP_DECIMAL = 330
KEY_KP_DIVIDE = 331
KEY_KP_MULTIPLY = 332
KEY_KP_SUBTRACT = 333
KEY_KP_ADD = 334
KEY_KP_ENTER = 335
KEY_KP_EQUAL = 336

KEY_BACK = 4
KEY_MENU = 5
KEY_VOLUME_UP = 24
KEY_VOLUME_DOWN = 25

MOUSE_BUTTON_LEFT = 0
MOUSE_BUTTON_RIGHT = 1
MOUSE_BUTTON_MIDDLE = 2
MOUSE_BUTTON_SIDE = 3
MOUSE_BUTTON_EXTRA = 4
MOUSE_BUTTON_FORWARD = 5
MOUSE_BUTTON_BACK = 6

MOUSE_CURSOR_DEFAULT = 0
MOUSE_CURSOR_ARROW = 1
MOUSE_CURSOR_IBEAM = 2
MOUSE_CURSOR_CROSSHAIR = 3
MOUSE_CURSOR_POINTING_HAND = 4
MOUSE_CURSOR_RESIZE_EW = 5
MOUSE_CURSOR_RESIZE_NS = 6
MOUSE_CURSOR_RESIZE_NWSE = 7
MOUSE_CURSOR_RESIZE_NESW = 8
MOUSE_CURSOR_RESIZE_ALL = 9
MOUSE_CURSOR_NOT_ALLOWED = 10

GAMEPAD_BUTTON_UNKNOWN = 0
GAMEPAD_BUTTON_LEFT_FACE_UP = 1
GAMEPAD_BUTTON_LEFT_FACE_RIGHT = 2
GAMEPAD_BUTTON_LEFT_FACE_DOWN = 3
GAMEPAD_BUTTON_LEFT_FACE_LEFT = 4
GAMEPAD_BUTTON_RIGHT_FACE_UP = 5
GAMEPAD_BUTTON_RIGHT_FACE_RIGHT = 6
GAMEPAD_BUTTON_RIGHT_FACE_DOWN = 7
GAMEPAD_BUTTON_RIGHT_FACE_LEFT = 8
GAMEPAD_BUTTON_LEFT_TRIGGER_1 = 9
GAMEPAD_BUTTON_LEFT_TRIGGER_2 = 10
GAMEPAD_BUTTON_RIGHT_TRIGGER_1 = 11
GAMEPAD_BUTTON_RIGHT_TRIGGER_2 = 12
GAMEPAD_BUTTON_MIDDLE_LEFT = 13
GAMEPAD_BUTTON_MIDDLE = 14
GAMEPAD_BUTTON_MIDDLE_RIGHT = 15
GAMEPAD_BUTTON_LEFT_THUMB = 16
GAMEPAD_BUTTON_RIGHT_THUMB = 17

GAMEPAD_AXIS_LEFT_X = 0
GAMEPAD_AXIS_LEFT_Y = 1
GAMEPAD_AXIS_RIGHT_X = 2
GAMEPAD_AXIS_RIGHT_Y = 3
GAMEPAD_AXIS_LEFT_TRIGGER = 4
GAMEPAD_AXIS_RIGHT_TRIGGER = 5

MATERIAL_MAP_ALBEDO = 0
MATERIAL_MAP_METALNESS = 1
MATERIAL_MAP_NORMAL = 2
MATERIAL_MAP_ROUGHNESS = 3
MATERIAL_MAP_OCCLUSION = 4
MATERIAL_MAP_EMISSION = 5
MATERIAL_MAP_HEIGHT = 6
MATERIAL_MAP_CUBEMAP = 7
MATERIAL_MAP_IRRADIANCE = 8
MATERIAL_MAP_PREFILTER = 9
MATERIAL_MAP_BRDF = 10

SHADER_LOC_VERTEX_POSITION = 0
SHADER_LOC_VERTEX_TEXCOORD01 = 1
SHADER_LOC_VERTEX_TEXCOORD02 = 2
SHADER_LOC_VERTEX_NORMAL = 3
SHADER_LOC_VERTEX_TANGENT = 4
SHADER_LOC_VERTEX_COLOR = 5
SHADER_LOC_MATRIX_MVP = 6
SHADER_LOC_MATRIX_VIEW = 7
SHADER_LOC_MATRIX_PROJECTION = 8
SHADER_LOC_MATRIX_NORMAL = 9
SHADER_LOC_VECTOR_VIEW = 10
SHADER_LOC_COLOR_DIFFUSE = 11
SHADER_LOC_COLOR_SPECULAR = 12
SHADER_LOC_COLOR_AMBIENT = 13
SHADER_LOC_MAP_ALBEDO = 14
SHADER_LOC_MAP_METALNESS = 15
SHADER_LOC_MAP_NORMAL = 16
SHADER_LOC_MAP_ROUGHNESS = 17
SHADER_LOC_MAP_OCCLUSION = 18
SHADER_LOC_MAP_EMISSION = 19
SHADER_LOC_MAP_HEIGHT = 20
SHADER_LOC_MAP_CUBEMAP = 21
SHADER_LOC_MAP_IRRADIANCE = 22
SHADER_LOC_MAP_PREFILTER = 23
SHADER_LOC_MAP_BRDF = 24
SHADER_LOC_VERTEX_BONEIDS = 25
SHADER_LOC_VERTEX_BONEWEIGHTS = 26
SHADER_LOC_MATRIX_BONETRANSFORMS = 27
SHADER_LOC_VERTEX_INSTANCETRANSFORM = 28

SHADER_UNIFORM_FLOAT = 0
SHADER_UNIFORM_VEC2 = 1
SHADER_UNIFORM_VEC3 = 2
SHADER_UNIFORM_VEC4 = 3
SHADER_UNIFORM_INT = 4
SHADER_UNIFORM_IVEC2 = 5
SHADER_UNIFORM_IVEC3 = 6
SHADER_UNIFORM_IVEC4 = 7
SHADER_UNIFORM_UINT = 8
SHADER_UNIFORM_UIVEC2 = 9
SHADER_UNIFORM_UIVEC3 = 10
SHADER_UNIFORM_UIVEC4 = 11
SHADER_UNIFORM_SAMPLER2D = 12

SHADER_ATTRIB_FLOAT = 0
SHADER_ATTRIB_VEC2 = 1
SHADER_ATTRIB_VEC3 = 2
SHADER_ATTRIB_VEC4 = 3

PIXELFORMAT_UNCOMPRESSED_GRAYSCALE = 1
    PIXELFORMAT_UNCOMPRESSED_GRAY_ALPHA = 2
    PIXELFORMAT_UNCOMPRESSED_R5G6B5 = 3
    PIXELFORMAT_UNCOMPRESSED_R8G8B8 = 4
    PIXELFORMAT_UNCOMPRESSED_R5G5B5A1 = 5
    PIXELFORMAT_UNCOMPRESSED_R4G4B4A4 = 6
    PIXELFORMAT_UNCOMPRESSED_R8G8B8A8 = 7
    PIXELFORMAT_UNCOMPRESSED_R32 = 8
    PIXELFORMAT_UNCOMPRESSED_R32G32B32 = 9
    PIXELFORMAT_UNCOMPRESSED_R32G32B32A32 = 10
    PIXELFORMAT_UNCOMPRESSED_R16 = 11
    PIXELFORMAT_UNCOMPRESSED_R16G16B16 = 12
    PIXELFORMAT_UNCOMPRESSED_R16G16B16A16 = 13
    PIXELFORMAT_COMPRESSED_DXT1_RGB = 14
    PIXELFORMAT_COMPRESSED_DXT1_RGBA = 15
    PIXELFORMAT_COMPRESSED_DXT3_RGBA = 16
    PIXELFORMAT_COMPRESSED_DXT5_RGBA = 17
    PIXELFORMAT_COMPRESSED_ETC1_RGB = 18
    PIXELFORMAT_COMPRESSED_ETC2_RGB = 19
    PIXELFORMAT_COMPRESSED_ETC2_EAC_RGBA = 20
    PIXELFORMAT_COMPRESSED_PVRT_RGB = 21
    PIXELFORMAT_COMPRESSED_PVRT_RGBA = 22
    PIXELFORMAT_COMPRESSED_ASTC_4x4_RGBA = 23
    PIXELFORMAT_COMPRESSED_ASTC_8x8_RGBA = 24

TEXTURE_FILTER_POINT = 0
TEXTURE_FILTER_BILINEAR = 1
TEXTURE_FILTER_TRILINEAR = 2
TEXTURE_FILTER_ANISOTROPIC_4X = 3
TEXTURE_FILTER_ANISOTROPIC_8X = 4
TEXTURE_FILTER_ANISOTROPIC_16X = 5

TEXTURE_WRAP_REPEAT = 0
TEXTURE_WRAP_CLAMP = 1
TEXTURE_WRAP_MIRROR_REPEAT = 2
TEXTURE_WRAP_MIRROR_CLAMP = 3

CUBEMAP_LAYOUT_AUTO_DETECT = 0
CUBEMAP_LAYOUT_LINE_VERTICAL = 1
CUBEMAP_LAYOUT_LINE_HORIZONTAL = 2
CUBEMAP_LAYOUT_CROSS_THREE_BY_FOUR = 3
CUBEMAP_LAYOUT_CROSS_FOUR_BY_THREE = 4

FONT_DEFAULT = 0
FONT_BITMAP = 1
FONT_SDF = 2

BLEND_ALPHA = 0
BLEND_ADDITIVE = 1
BLEND_MULTIPLIED = 2
BLEND_ADD_COLORS = 3
BLEND_SUBTRACT_COLORS = 4
BLEND_ALPHA_PREMULTIPLY = 5
BLEND_CUSTOM = 6
BLEND_CUSTOM_SEPARATE = 7

GESTURE_NONE = 0
GESTURE_TAP = 1
GESTURE_DOUBLETAP = 2
GESTURE_HOLD = 4
GESTURE_DRAG = 8
GESTURE_SWIPE_RIGHT = 16
GESTURE_SWIPE_LEFT = 32
GESTURE_SWIPE_UP = 64
GESTURE_SWIPE_DOWN = 128
GESTURE_PINCH_IN = 256
GESTURE_PINCH_OUT = 512

CAMERA_CUSTOM = 0
CAMERA_FREE = 1
CAMERA_ORBITAL = 2
CAMERA_FIRST_PERSON = 3
CAMERA_THIRD_PERSON = 4

CAMERA_PERSPECTIVE = 0
CAMERA_ORTHOGRAPHIC = 1

NPATCH_NINE_PATCH = 0
NPATCH_THREE_PATCH_VERTICAL = 1
NPATCH_THREE_PATCH_HORIZONTAL = 2

;structs
struct Vector2
 x dd ?
 y dd ?
ends

struct Vector3
 x dd ?
 y dd ?
 z dd ?
ends

struct Vector4
 x dd ?
 y dd ?
 z dd ?
 w dd ?
ends

struct Matrix
  m0 dd ?
  m4 dd ?
  m8 dd ?
  m12 dd ?

  m1 dd ?
  m5 dd ?
  m9 dd ?
  m13 dd ?

  m2 dd ?
  m6 dd ?
  m10 dd ?
  m14 dd ?

  m3 dd ?
  m7 dd ?
  m11 dd ?
  m15 dd ?
ends

struct Image
 data dd ?
 width dd ?
 height dd ?
 mipmaps dd ?
 format dd ?
ends

struct Rectangle
 x dd ?
 y dd ?
 width dd ?
 height dd ?
ends

struct Texture
 data dd ?
 width dd ?
 height dd ?
 mipmaps dd ?
 format dd ?
ends

struct Texture2D
 id dd ?
 width dd ?
 height dd ?
 mipmaps dd ?
 format dd ?
ends

struct RenderTexture
 id dd ?
 texture Texture
 depth Texture
ends

struct NPatchInfo
 source Rectangle
 left dd ?
 top dd ?
 right dd ?
 bottom dd ?
 layout dd ?
ends

struct GlyphInfo
 value dd ?
 offsetX dd ?
 offsetY dd ?
 advanceX dd ?
 image Image
ends

struct Font
 baseSize dd ?
 glyphCount dd ?
 glyphPadding dd ?
 texture Texture2D
 recs dd ?
 glyphs dd ?
ends

struct Camera2D
 offset Vector2
 target Vector2
 rotation dd ?
 zoom dd ?
ends

struct Camera3D
 position Vector3
 target Vector3
 up Vector3
 fovy dd ?
 projection dd ?
ends

struct Mesh
 vertexCount dd ?
 triangleCount dd ?

 vertices dd ?
 texcoords dd ?
 texcoords2 dd ?
 normals dd ?
 tangents dd ?
 colors dd ?
 indices dd ?

 boneCount dd ?
 boneIndices dd ?
 boneWeights dd ?

 animVertices dd ?
 animNormals dd ?

 vaoId dd ?
 vboId dd ?
ends

struct Shader
 id dd ?
 locs dd ?
ends

struct Material
 shader Shader
 maps dd ?
 params dd ?
ends

struct Transform
 translation Vector3
 rotation Vector4
 scale Vector3
ends

struct BoneInfo
 name rb 32
 parent dd ?
ends

struct ModelSkeleton
 boneCount dd ?
 bones dd ?
 bindPose dd ?
ends

struct Model
 transform Matrix

 meshCount dd ?
 materialCount dd ?
 meshes dd ?
 materials dd ?
 meshMaterial dd ?

 skeleton ModelSkeleton

 currentPose dd ?
 boneMatrices dd ?
ends

struct Color
 r db ?
 g db ?
 b db ?
 a db ?
ends

struct MaterialMap
 texture Texture2D
 color Color
 value dd ?
ends

struct ModelAnimation
 name rb 32
 boneCount dd ?
 keyframeCount dd ?
 keyframePoses dd ?
ends

struct Ray
 position Vector3
 direction Vector3
ends

struct RayCollision
 hit db ?
 rb 3 ;for padding
 distance dd ?
 point Vector3
 normal Vector3
ends

struct BoundingBox
 min Vector3
 max Vector3
ends

struct Wave
 frameCount dd ?
 sampleRate dd ?
 sampleSize dd ?
 channels dd ?
 data dd ?
ends

struct AudioStream
 buffer dd ?
 processor dd ?
 sampleRate dd ?
 sampleSize dd ?
 channels dd ?
ends

struct Sound
 stream AudioStream
 frameCount dd ?
ends

struct Music
 stream AudioStream
 frameCount dd ?
 looping db ?
 rb 3
 ctxType dd ?
 ctxData dd ?
ends

struct VrDeviceInfo
 hResolution dd ?
 vResolution dd ?
 hScreenSize dd ?
 vScreenSize dd ?
 eyeToScreenDistance dd ?
 lensSeparationDistance dd ?
 interpupillaryDistance dd ?
 lensDistortionValues dd ?
 chromaAbCorrection dd ?
ends

struct VrStereoConfig
 projection Matrix 2
 viewOffset Matrix 2
 leftLensCenter rd 2
 rightLensCenter rd 2
 leftScreenCenter rd 2
 rightScreenCenter rd 2
 scale rd 2
 scaleIn rd 2
ends

struct FilePathList
 count dd ?
 paths dd ?
ends

struct AutomationEvent
 frame dd ?
 type dd ?
 params rd 4
ends

struct AutomationEventList
 capacity dd ?
 count dd ?
 events dd ?
ends

;Raylib predefined colors
LIGHTGRAY Color 200,200,200,255
GRAY Color 130,130,130,255
DARKGRAY Color 80,80,80,255
YELLOW Color 253,249,0,255
GOLD Color 255,203,0,255
ORANGE Color 255,161,0,255
PINK Color 255,109,194,255
RED Color 230,41,55,255
MAROON Color 190,33,55,255
GREEN Color 0,228,48,255
LIME Color 0,158,47,255
DARKGREEN Color 0,117,44,255
SKYBLUE Color 102,191,255,255
BLUE Color 0,121,241,255
DARKBLUE Color 0,82,172,255
PURPLE Color 200,122,255,255
VIOLET Color 135,60,190,255
DARKPURPLE Color 112,31,126,255
BEIGE Color 211,176,131,255
BROWN Color 127,106,79,255
DARKBROWN Color 76,63,47,255

WHITE Color 255,255,255,255
BLACK Color 0,0,0,255
BLANK Color 0,0,0,0
MAGENTA Color 255,0,255,255
RAYWHITE Color 245,245,245,255

;needed to load dll
section '.idata' import data readable writeable

library \
    kernel32, 'kernel32.dll', \
    raylib,   'raylib.dll'

import kernel32, \
    ExitProcess, 'ExitProcess'

;Window functions
import raylib, \
    InitWindow, 'InitWindow', \
    CloseWindow, 'CloseWindow', \
    WindowShouldClose, 'WindowShouldClose', \
    IsWindowReady, 'IsWindowReady', \
    IsWindowFullscreen, 'IsWindowFullscreen', \
    IsWindowHidden, 'IsWindowHidden', \
    IsWindowMinimized, 'IsWindowMinimized', \
    IsWindowMaximized, 'IsWindowMaximized', \
    IsWindowFocused, 'IsWindowFocused', \
    IsWindowResized, 'IsWindowResized', \
    IsWindowState, 'IsWindowState', \
    SetWindowState, 'SetWindowState', \
    ClearWindowState, 'ClearWindowState', \
    ToggleFullscreen, 'ToggleFullscreen', \
    ToggleBorderlessWindowed, 'ToggleBorderlessWindowed', \
    MaximizeWindow, 'MaximizeWindow', \
    MinimizeWindow, 'MinimizeWindow', \
    RestoreWindow, 'RestoreWindow', \
    SetWindowIcon, 'SetWindowIcon', \
    SetWindowIcons, 'SetWindowIcons', \
    SetWindowTitle, 'SetWindowTitle', \
    SetWindowPosition, 'SetWindowPosition', \
    SetWindowMonitor, 'SetWindowMonitor', \
    SetWindowMinSize, 'SetWindowMinSize', \
    SetWindowMaxSize, 'SetWindowMaxSize', \
    SetWindowSize, 'SetWindowSize', \
    SetWindowOpacity, 'SetWindowOpacity', \
    SetWindowFocused, 'SetWindowFocused', \
    GetWindowHandle, 'GetWindowHandle', \
    GetScreenWidth, 'GetScreenWidth', \
    GetScreenHeight, 'GetScreenHeight', \
    GetRenderWidth, 'GetRenderWidth', \
    GetRenderHeight, 'GetRenderHeight', \
    GetMonitorCount, 'GetMonitorCount', \
    GetCurrentMonitor, 'GetCurrentMonitor', \
    GetMonitorPosition, 'GetMonitorPosition', \
    GetMonitorWidth, 'GetMonitorWidth', \
    GetMonitorHeight, 'GetMonitorHeight', \
    GetMonitorPhysicalWidth, 'GetMonitorPhysicalWidth', \
    GetMonitorPhysicalHeight, 'GetMonitorPhysicalHeight', \
    GetWindowPosition, 'GetWindowPosition', \
    GetWindowScaleDPI, 'GetWindowScaleDPI', \
    GetMonitorName, 'GetMonitorName', \
    SetClipboardText, 'SetClipboardText', \
    GetClipboardText, 'GetClipboardText', \
    GetClipboardImage, 'GetClipboardImage', \
    EnableEventWaiting, 'EnableEventWaiting', \
    DisableEventWaiting, 'DisableEventWaiting', \
    ShowCursor, 'ShowCursor', \
    HideCursor, 'HideCursor', \
    IsCursorHidden, 'IsCursorHidden', \
    EnableCursor, 'EnableCursor', \
    DisableCursor, 'DisableCursor', \
    IsCursorOnScreen, 'IsCursorOnScreen', \
    ClearBackground, 'ClearBackground', \
    BeginDrawing, 'BeginDrawing', \
    EndDrawing, 'EndDrawing', \
    BeginMode2D, 'BeginMode2D', \
    EndMode2D, 'EndMode2D', \
    BeginMode3D, 'BeginMode3D', \
    EndMode3D, 'EndMode3D', \
    BeginTextureMode, 'BeginTextureMode', \
    EndTextureMode, 'EndTextureMode', \
    BeginShaderMode, 'BeginShaderMode', \
    EndShaderMode, 'EndShaderMode', \
    BeginBlendMode, 'BeginBlendMode', \
    EndBlendMode, 'EndBlendMode', \
    BeginScissorMode, 'BeginScissorMode', \
    EndScissorMode, 'EndScissorMode', \
    BeginVrStereoMode, 'BeginVrStereoMode', \
    EndVrStereoMode, 'EndVrStereoMode', \
    LoadVrStereoConfig, 'LoadVrStereoConfig', \
    UnloadVrStereoConfig, 'UnloadVrStereoConfig', \
    LoadShader, 'LoadShader', \
    LoadShaderFromMemory, 'LoadShaderFromMemory', \
    IsShaderValid, 'IsShaderValid', \
    GetShaderLocation, 'GetShaderLocation', \
    GetShaderLocationAttrib, 'GetShaderLocationAttrib', \
    SetShaderValue, 'SetShaderValue', \
    SetShaderValueV, 'SetShaderValueV', \
    SetShaderValueMatrix, 'SetShaderValueMatrix', \
    SetShaderValueTexture, 'SetShaderValueTexture', \
    UnloadShader, 'UnloadShader', \
    GetScreenToWorldRay, 'GetScreenToWorldRay', \
    GetScreenToWorldRayEx, 'GetScreenToWorldRayEx', \
    GetWorldToScreen, 'GetWorldToScreen', \
    GetWorldToScreenEx, 'GetWorldToScreenEx', \
    GetWorldToScreen2D, 'GetWorldToScreen2D', \
    GetScreenToWorld2D, 'GetScreenToWorld2D', \
    GetCameraMatrix, 'GetCameraMatrix', \
    GetCameraMatrix2D, 'GetCameraMatrix2D', \
    SetTargetFPS, 'SetTargetFPS', \
    GetFrameTime, 'GetFrameTime', \
    GetTime, 'GetTime', \
    GetFPS, 'GetFPS', \
    SwapScreenBuffer, 'SwapScreenBuffer', \
    PollInputEvents, 'PollInputEvents', \
    WaitTime, 'WaitTime', \
    SetRandomSeed, 'SetRandomSeed', \
    GetRandomValue, 'GetRandomValue', \
    LoadRandomSequence, 'LoadRandomSequence', \
    UnloadRandomSequence, 'UnloadRandomSequence', \
    TakeScreenshot, 'TakeScreenshot', \
    SetConfigFlags, 'SetConfigFlags', \
    OpenURL, 'OpenURL', \
    SetTraceLogLevel, 'SetTraceLogLevel', \
    TraceLog, 'TraceLog', \
    SetTraceLogCallback, 'SetTraceLogCallback', \
    MemAlloc, 'MemAlloc', \
    MemRealloc, 'MemRealloc', \
    MemFree, 'MemFree', \
    LoadFileData, 'LoadFileData', \
    UnloadFileData, 'UnloadFileData', \
    SaveFileData, 'SaveFileData', \
    ExportDataAsCode, 'ExportDataAsCode', \
    LoadFileText, 'LoadFileText', \
    UnloadFileText, 'UnloadFileText', \
    SaveFileText, 'SaveFileText', \
    SetLoadFileDataCallback, 'SetLoadFileDataCallback', \
    SetSaveFileDataCallback, 'SetSaveFileDataCallback', \
    SetLoadFileTextCallback, 'SetLoadFileTextCallback', \
    SetSaveFileTextCallback, 'SetSaveFileTextCallback', \
    FileRename, 'FileRename', \
    FileRemove, 'FileRemove', \
    FileCopy, 'FileCopy', \
    FileMove, 'FileMove', \
    FileTextReplace, 'FileTextReplace', \
    FileTextFindIndex, 'FileTextFindIndex', \
    FileExists, 'FileExists', \
    DirectoryExists, 'DirectoryExists', \
    IsFileExtension, 'IsFileExtension', \
    GetFileLength, 'GetFileLength', \
    GetFileModTime, 'GetFileModTime', \
    GetFileExtension, 'GetFileExtension', \
    GetFileName, 'GetFileName', \
    GetFileNameWithoutExt, 'GetFileNameWithoutExt', \
    GetDirectoryPath, 'GetDirectoryPath', \
    GetPrevDirectoryPath, 'GetPrevDirectoryPath', \
    GetWorkingDirectory, 'GetWorkingDirectory', \
    GetApplicationDirectory, 'GetApplicationDirectory', \
    MakeDirectory, 'MakeDirectory', \
    ChangeDirectory, 'ChangeDirectory', \
    IsPathFile, 'IsPathFile', \
    IsFileNameValid, 'IsFileNameValid', \
    LoadDirectoryFiles, 'LoadDirectoryFiles', \
    LoadDirectoryFilesEx, 'LoadDirectoryFilesEx', \
    UnloadDirectoryFiles, 'UnloadDirectoryFiles', \
    IsFileDropped, 'IsFileDropped', \
    LoadDroppedFiles, 'LoadDroppedFiles', \
    UnloadDroppedFiles, 'UnloadDroppedFiles', \
    GetDirectoryFileCount, 'GetDirectoryFileCount', \
    GetDirectoryFileCountEx, 'GetDirectoryFileCountEx', \
    CompressData, 'CompressData', \
    DecompressData, 'DecompressData', \
    EncodeDataBase64, 'EncodeDataBase64', \
    DecodeDataBase64, 'DecodeDataBase64', \
    ComputeCRC32, 'ComputeCRC32', \
    ComputeMD5, 'ComputeMD5', \
    ComputeSHA1, 'ComputeSHA1', \
    ComputeSHA256, 'ComputeSHA256', \
    LoadAutomationEventList, 'LoadAutomationEventList', \
    UnloadAutomationEventList, 'UnloadAutomationEventList', \
    ExportAutomationEventList, 'ExportAutomationEventList', \
    SetAutomationEventList, 'SetAutomationEventList', \
    SetAutomationEventBaseFrame, 'SetAutomationEventBaseFrame', \
    StartAutomationEventRecording, 'StartAutomationEventRecording', \
    StopAutomationEventRecording, 'StopAutomationEventRecording', \
    PlayAutomationEvent, 'PlayAutomationEvent', \
    IsKeyPressed, 'IsKeyPressed', \
    IsKeyPressedRepeat, 'IsKeyPressedRepeat', \
    IsKeyDown, 'IsKeyDown', \
    IsKeyReleased, 'IsKeyReleased', \
    IsKeyUp, 'IsKeyUp', \
    GetKeyPressed, 'GetKeyPressed', \
    GetCharPressed, 'GetCharPressed', \
    GetKeyName, 'GetKeyName', \
    SetExitKey, 'SetExitKey', \
    DrawPixel, 'DrawPixel', \
    DrawPixelV, 'DrawPixelV', \
    DrawLine, 'DrawLine', \
    DrawLineV, 'DrawLineV', \
    DrawLineEx, 'DrawLineEx', \
    DrawLineStrip, 'DrawLineStrip', \
    DrawLineBezier, 'DrawLineBezier', \
    DrawLineDashed, 'DrawLineDashed', \
    DrawCircle, 'DrawCircle', \
    DrawCircleV, 'DrawCircleV', \
    DrawCircleGradient, 'DrawCircleGradient', \
    DrawCircleSector, 'DrawCircleSector', \
    DrawCircleSectorLines, 'DrawCircleSectorLines', \
    DrawCircleLines, 'DrawCircleLines', \
    DrawCircleLinesV, 'DrawCircleLinesV', \
    DrawEllipse, 'DrawEllipse', \
    DrawEllipseV, 'DrawEllipseV', \
    DrawEllipseLines, 'DrawEllipseLines', \
    DrawEllipseLinesV, 'DrawEllipseLinesV', \
    DrawRing, 'DrawRing', \
    DrawRingLines, 'DrawRingLines', \
    DrawRectangle, 'DrawRectangle', \
    DrawRectangleV, 'DrawRectangleV', \
    DrawRectangleRec, 'DrawRectangleRec', \
    DrawRectanglePro, 'DrawRectanglePro', \
    DrawRectangleGradientV, 'DrawRectangleGradientV', \
    DrawRectangleGradientH, 'DrawRectangleGradientH', \
    DrawRectangleGradientEx, 'DrawRectangleGradientEx', \
    DrawRectangleLines, 'DrawRectangleLines', \
    DrawRectangleLinesEx, 'DrawRectangleLinesEx', \
    DrawRectangleRounded, 'DrawRectangleRounded', \
    DrawRectangleRoundedLines, 'DrawRectangleRoundedLines', \
    DrawRectangleRoundedLinesEx, 'DrawRectangleRoundedLinesEx', \
    DrawTriangle, 'DrawTriangle', \
    DrawTriangleLines, 'DrawTriangleLines', \
    DrawTriangleFan, 'DrawTriangleFan', \
    DrawTriangleStrip, 'DrawTriangleStrip', \
    DrawPoly, 'DrawPoly', \
    DrawPolyLines, 'DrawPolyLines', \
    DrawPolyLinesEx, 'DrawPolyLinesEx', \
    DrawSplineLinear, 'DrawSplineLinear', \
    DrawSplineBasis, 'DrawSplineBasis', \
    DrawSplineCatmullRom, 'DrawSplineCatmullRom', \
    DrawSplineBezierQuadratic, 'DrawSplineBezierQuadratic', \
    DrawSplineBezierCubic, 'DrawSplineBezierCubic', \
    DrawSplineSegmentLinear, 'DrawSplineSegmentLinear', \
    DrawSplineSegmentBasis, 'DrawSplineSegmentBasis', \
    DrawSplineSegmentCatmullRom, 'DrawSplineSegmentCatmullRom', \
    DrawSplineSegmentBezierQuadratic, 'DrawSplineSegmentBezierQuadratic', \
    DrawSplineSegmentBezierCubic, 'DrawSplineSegmentBezierCubic', \
    GetSplinePointLinear, 'GetSplinePointLinear', \
    GetSplinePointBasis, 'GetSplinePointBasis', \
    GetSplinePointCatmullRom, 'GetSplinePointCatmullRom', \
    GetSplinePointBezierQuad, 'GetSplinePointBezierQuad', \
    GetSplinePointBezierCubic, 'GetSplinePointBezierCubic', \
    DrawFPS, 'DrawFPS', \
    DrawText, 'DrawText', \
    DrawTextEx, 'DrawTextEx', \
    DrawTextPro, 'DrawTextPro', \
    DrawTextCodepoint, 'DrawTextCodepoint', \
    DrawTextCodepoints, 'DrawTextCodepoints', \
    IsGamepadAvailable, 'IsGamepadAvailable', \
    GetGamepadName, 'GetGamepadName', \
    IsGamepadButtonPressed, 'IsGamepadButtonPressed', \
    IsGamepadButtonDown, 'IsGamepadButtonDown', \
    IsGamepadButtonReleased, 'IsGamepadButtonReleased', \
    IsGamepadButtonUp, 'IsGamepadButtonUp', \
    GetGamepadButtonPressed, 'GetGamepadButtonPressed', \
    GetGamepadAxisCount, 'GetGamepadAxisCount', \
    GetGamepadAxisMovement, 'GetGamepadAxisMovement', \
    SetGamepadMappings, 'SetGamepadMappings', \
    SetGamepadVibration, 'SetGamepadVibration', \
    IsMouseButtonPressed, 'IsMouseButtonPressed', \
    IsMouseButtonDown, 'IsMouseButtonDown', \
    IsMouseButtonReleased, 'IsMouseButtonReleased', \
    IsMouseButtonUp, 'IsMouseButtonUp', \
    GetMouseX, 'GetMouseX', \
    GetMouseY, 'GetMouseY', \
    GetMousePosition, 'GetMousePosition', \
    GetMouseDelta, 'GetMouseDelta', \
    SetMousePosition, 'SetMousePosition', \
    SetMouseOffset, 'SetMouseOffset', \
    SetMouseScale, 'SetMouseScale', \
    GetMouseWheelMove, 'GetMouseWheelMove', \
    GetMouseWheelMoveV, 'GetMouseWheelMoveV', \
    SetMouseCursor, 'SetMouseCursor', \
    GetTouchX, 'GetTouchX', \
    GetTouchY, 'GetTouchY', \
    GetTouchPosition, 'GetTouchPosition', \
    GetTouchPointId, 'GetTouchPointId', \
    GetTouchPointCount, 'GetTouchPointCount', \
    SetGesturesEnabled, 'SetGesturesEnabled', \
    IsGestureDetected, 'IsGestureDetected', \
    GetGestureDetected, 'GetGestureDetected', \
    GetGestureHoldDuration, 'GetGestureHoldDuration', \
    GetGestureDragVector, 'GetGestureDragVector', \
    GetGestureDragAngle, 'GetGestureDragAngle', \
    GetGesturePinchVector, 'GetGesturePinchVector', \
    GetGesturePinchAngle, 'GetGesturePinchAngle', \
    UpdateCamera, 'UpdateCamera', \
    UpdateCameraPro, 'UpdateCameraPro', \
    SetShapesTexture, 'SetShapesTexture', \
    GetShapesTexture, 'GetShapesTexture', \
    GetShapesTextureRectangle, 'GetShapesTextureRectangle', \
    CheckCollisionRecs, 'CheckCollisionRecs', \
    CheckCollisionCircles, 'CheckCollisionCircles', \
    CheckCollisionCircleRec, 'CheckCollisionCircleRec', \
    CheckCollisionCircleLine, 'CheckCollisionCircleLine', \
    CheckCollisionPointRec, 'CheckCollisionPointRec', \
    CheckCollisionPointCircle, 'CheckCollisionPointCircle', \
    CheckCollisionPointTriangle, 'CheckCollisionPointTriangle', \
    CheckCollisionPointLine, 'CheckCollisionPointLine', \
    CheckCollisionPointPoly, 'CheckCollisionPointPoly', \
    CheckCollisionLines, 'CheckCollisionLines', \
    GetCollisionRec, 'GetCollisionRec', \
    LoadImage, 'LoadImage', \
    LoadImageRaw, 'LoadImageRaw', \
    LoadImageAnim, 'LoadImageAnim', \
    LoadImageAnimFromMemory, 'LoadImageAnimFromMemory', \
    LoadImageFromMemory, 'LoadImageFromMemory', \
    LoadImageFromTexture, 'LoadImageFromTexture', \
    LoadImageFromScreen, 'LoadImageFromScreen', \
    IsImageValid, 'IsImageValid', \
    UnloadImage, 'UnloadImage', \
    ExportImage, 'ExportImage', \
    ExportImageToMemory, 'ExportImageToMemory', \
    ExportImageAsCode, 'ExportImageAsCode', \
    GenImageColor, 'GenImageColor', \
    GenImageGradientLinear, 'GenImageGradientLinear', \
    GenImageGradientRadial, 'GenImageGradientRadial', \
    GenImageGradientSquare, 'GenImageGradientSquare', \
    GenImageChecked, 'GenImageChecked', \
    GenImageWhiteNoise, 'GenImageWhiteNoise', \
    GenImagePerlinNoise, 'GenImagePerlinNoise', \
    GenImageCellular, 'GenImageCellular', \
    GenImageText, 'GenImageText', \
    ImageCopy, 'ImageCopy', \
    ImageFromImage, 'ImageFromImage', \
    ImageFromChannel, 'ImageFromChannel', \
    ImageText, 'ImageText', \
    ImageTextEx, 'ImageTextEx', \
    ImageFormat, 'ImageFormat', \
    ImageToPOT, 'ImageToPOT', \
    ImageCrop, 'ImageCrop', \
    ImageAlphaCrop, 'ImageAlphaCrop', \
    ImageAlphaClear, 'ImageAlphaClear', \
    ImageAlphaMask, 'ImageAlphaMask', \
    ImageAlphaPremultiply, 'ImageAlphaPremultiply', \
    ImageBlurGaussian, 'ImageBlurGaussian', \
    ImageKernelConvolution, 'ImageKernelConvolution', \
    ImageResize, 'ImageResize', \
    ImageResizeNN, 'ImageResizeNN', \
    ImageResizeCanvas, 'ImageResizeCanvas', \
    ImageMipmaps, 'ImageMipmaps', \
    ImageDither, 'ImageDither', \
    ImageFlipVertical, 'ImageFlipVertical', \
    ImageFlipHorizontal, 'ImageFlipHorizontal', \
    ImageRotate, 'ImageRotate', \
    ImageRotateCW, 'ImageRotateCW', \
    ImageRotateCCW, 'ImageRotateCCW', \
    ImageColorTint, 'ImageColorTint', \
    ImageColorInvert, 'ImageColorInvert', \
    ImageColorGrayscale, 'ImageColorGrayscale', \
    ImageColorContrast, 'ImageColorContrast', \
    ImageColorBrightness, 'ImageColorBrightness', \
    ImageColorReplace, 'ImageColorReplace', \
    LoadImageColors, 'LoadImageColors', \
    LoadImagePalette, 'LoadImagePalette', \
    UnloadImageColors, 'UnloadImageColors', \
    UnloadImagePalette, 'UnloadImagePalette', \
    GetImageAlphaBorder, 'GetImageAlphaBorder', \
    GetImageColor, 'GetImageColor', \
    ImageClearBackground, 'ImageClearBackground', \
    ImageDrawPixel, 'ImageDrawPixel', \
    ImageDrawPixelV, 'ImageDrawPixelV', \
    ImageDrawLine, 'ImageDrawLine', \
    ImageDrawLineV, 'ImageDrawLineV', \
    ImageDrawLineEx, 'ImageDrawLineEx', \
    ImageDrawCircle, 'ImageDrawCircle', \
    ImageDrawCircleV, 'ImageDrawCircleV', \
    ImageDrawCircleLines, 'ImageDrawCircleLines', \
    ImageDrawCircleLinesV, 'ImageDrawCircleLinesV', \
    ImageDrawRectangle, 'ImageDrawRectangle', \
    ImageDrawRectangleV, 'ImageDrawRectangleV', \
    ImageDrawRectangleRec, 'ImageDrawRectangleRec', \
    ImageDrawRectangleLines, 'ImageDrawRectangleLines', \
    ImageDrawTriangle, 'ImageDrawTriangle', \
    ImageDrawTriangleEx, 'ImageDrawTriangleEx', \
    ImageDrawTriangleLines, 'ImageDrawTriangleLines', \
    ImageDrawTriangleFan, 'ImageDrawTriangleFan', \
    ImageDrawTriangleStrip, 'ImageDrawTriangleStrip', \
    ImageDraw, 'ImageDraw', \
    ImageDrawText, 'ImageDrawText', \
    ImageDrawTextEx, 'ImageDrawTextEx', \
    LoadTexture, 'LoadTexture', \
    LoadTextureFromImage, 'LoadTextureFromImage', \
    LoadTextureCubemap, 'LoadTextureCubemap', \
    LoadRenderTexture, 'LoadRenderTexture', \
    IsTextureValid, 'IsTextureValid', \
    UnloadTexture, 'UnloadTexture', \
    IsRenderTextureValid, 'IsRenderTextureValid', \
    UnloadRenderTexture, 'UnloadRenderTexture', \
    UpdateTexture, 'UpdateTexture', \
    UpdateTextureRec, 'UpdateTextureRec', \
    GenTextureMipmaps, 'GenTextureMipmaps', \
    SetTextureFilter, 'SetTextureFilter', \
    SetTextureWrap, 'SetTextureWrap', \
    DrawTexture, 'DrawTexture', \
    DrawTextureV, 'DrawTextureV', \
    DrawTextureEx, 'DrawTextureEx', \
    DrawTextureRec, 'DrawTextureRec', \
    DrawTexturePro, 'DrawTexturePro', \
    DrawTextureNPatch, 'DrawTextureNPatch', \
    ColorIsEqual, 'ColorIsEqual', \
    Fade, 'Fade', \
    ColorToInt, 'ColorToInt', \
    ColorNormalize, 'ColorNormalize', \
    ColorFromNormalized, 'ColorFromNormalized', \
    ColorToHSV, 'ColorToHSV', \
    ColorFromHSV, 'ColorFromHSV', \
    ColorTint, 'ColorTint', \
    ColorBrightness, 'ColorBrightness', \
    ColorContrast, 'ColorContrast', \
    ColorAlpha, 'ColorAlpha', \
    ColorAlphaBlend, 'ColorAlphaBlend', \
    ColorLerp, 'ColorLerp', \
    GetColor, 'GetColor', \
    GetPixelColor, 'GetPixelColor', \
    SetPixelColor, 'SetPixelColor', \
    GetPixelDataSize, 'GetPixelDataSize', \
    GetFontDefault, 'GetFontDefault', \
    LoadFont, 'LoadFont', \
    LoadFontEx, 'LoadFontEx', \
    LoadFontFromImage, 'LoadFontFromImage', \
    LoadFontFromMemory, 'LoadFontFromMemory', \
    IsFontValid, 'IsFontValid', \
    LoadFontData, 'LoadFontData', \
    GenImageFontAtlas, 'GenImageFontAtlas', \
    UnloadFontData, 'UnloadFontData', \
    UnloadFont, 'UnloadFont', \
    ExportFontAsCode, 'ExportFontAsCode', \
    SetTextLineSpacing, 'SetTextLineSpacing', \
    MeasureText, 'MeasureText', \
    MeasureTextEx, 'MeasureTextEx', \
    MeasureTextCodepoints, 'MeasureTextCodepoints', \
    GetGlyphIndex, 'GetGlyphIndex', \
    GetGlyphInfo, 'GetGlyphInfo', \
    GetGlyphAtlasRec, 'GetGlyphAtlasRec', \
    LoadUTF8, 'LoadUTF8', \
    UnloadUTF8, 'UnloadUTF8', \
    LoadCodepoints, 'LoadCodepoints', \
    UnloadCodepoints, 'UnloadCodepoints', \
    GetCodepointCount, 'GetCodepointCount', \
    GetCodepoint, 'GetCodepoint', \
    GetCodepointNext, 'GetCodepointNext', \
    GetCodepointPrevious, 'GetCodepointPrevious', \
    CodepointToUTF8, 'CodepointToUTF8', \
    LoadTextLines, 'LoadTextLines', \
    UnloadTextLines, 'UnloadTextLines', \
    TextCopy, 'TextCopy', \
    TextIsEqual, 'TextIsEqual', \
    TextLength, 'TextLength', \
    TextFormat, 'TextFormat', \
    TextSubtext, 'TextSubtext', \
    TextRemoveSpaces, 'TextRemoveSpaces', \
    GetTextBetween, 'GetTextBetween', \
    TextReplace, 'TextReplace', \
    TextReplaceAlloc, 'TextReplaceAlloc', \
    TextReplaceBetween, 'TextReplaceBetween', \
    TextReplaceBetweenAlloc, 'TextReplaceBetweenAlloc', \
    TextInsert, 'TextInsert', \
    TextInsertAlloc, 'TextInsertAlloc', \
    TextJoin, 'TextJoin', \
    TextSplit, 'TextSplit', \
    TextAppend, 'TextAppend', \
    TextFindIndex, 'TextFindIndex', \
    TextToUpper, 'TextToUpper', \
    TextToLower, 'TextToLower', \
    TextToPascal, 'TextToPascal', \
    TextToSnake, 'TextToSnake', \
    TextToCamel, 'TextToCamel', \
    TextToInteger, 'TextToInteger', \
    TextToFloat, 'TextToFloat', \
    DrawLine3D, 'DrawLine3D', \
    DrawPoint3D, 'DrawPoint3D', \
    DrawCircle3D, 'DrawCircle3D', \
    DrawTriangle3D, 'DrawTriangle3D', \
    DrawTriangleStrip3D, 'DrawTriangleStrip3D', \
    DrawCube, 'DrawCube', \
    DrawCubeV, 'DrawCubeV', \
    DrawCubeWires, 'DrawCubeWires', \
    DrawCubeWiresV, 'DrawCubeWiresV', \
    DrawSphere, 'DrawSphere', \
    DrawSphereEx, 'DrawSphereEx', \
    DrawSphereWires, 'DrawSphereWires', \
    DrawCylinder, 'DrawCylinder', \
    DrawCylinderEx, 'DrawCylinderEx', \
    DrawCylinderWires, 'DrawCylinderWires', \
    DrawCylinderWiresEx, 'DrawCylinderWiresEx', \
    DrawCapsule, 'DrawCapsule', \
    DrawCapsuleWires, 'DrawCapsuleWires', \
    DrawPlane, 'DrawPlane', \
    DrawRay, 'DrawRay', \
    DrawGrid, 'DrawGrid', \
    LoadModel, 'LoadModel', \
    LoadModelFromMesh, 'LoadModelFromMesh', \
    IsModelValid, 'IsModelValid', \
    UnloadModel, 'UnloadModel', \
    GetModelBoundingBox, 'GetModelBoundingBox', \
    DrawModel, 'DrawModel', \
    DrawModelEx, 'DrawModelEx', \
    DrawModelWires, 'DrawModelWires', \
    DrawModelWiresEx, 'DrawModelWiresEx', \
    DrawBoundingBox, 'DrawBoundingBox', \
    DrawBillboard, 'DrawBillboard', \
    DrawBillboardRec, 'DrawBillboardRec', \
    DrawBillboardPro, 'DrawBillboardPro', \
    UploadMesh, 'UploadMesh', \
    UpdateMeshBuffer, 'UpdateMeshBuffer', \
    UnloadMesh, 'UnloadMesh', \
    DrawMesh, 'DrawMesh', \
    DrawMeshInstanced, 'DrawMeshInstanced', \
    GetMeshBoundingBox, 'GetMeshBoundingBox', \
    GenMeshTangents, 'GenMeshTangents', \
    ExportMesh, 'ExportMesh', \
    ExportMeshAsCode, 'ExportMeshAsCode', \
    GenMeshPoly, 'GenMeshPoly', \
    GenMeshPlane, 'GenMeshPlane', \
    GenMeshCube, 'GenMeshCube', \
    GenMeshSphere, 'GenMeshSphere', \
    GenMeshHemiSphere, 'GenMeshHemiSphere', \
    GenMeshCylinder, 'GenMeshCylinder', \
    GenMeshCone, 'GenMeshCone', \
    GenMeshTorus, 'GenMeshTorus', \
    GenMeshKnot, 'GenMeshKnot', \
    GenMeshHeightmap, 'GenMeshHeightmap', \
    GenMeshCubicmap, 'GenMeshCubicmap', \
    LoadMaterials, 'LoadMaterials', \
    LoadMaterialDefault, 'LoadMaterialDefault', \
    IsMaterialValid, 'IsMaterialValid', \
    UnloadMaterial, 'UnloadMaterial', \
    SetMaterialTexture, 'SetMaterialTexture', \
    SetModelMeshMaterial, 'SetModelMeshMaterial', \
    LoadModelAnimations, 'LoadModelAnimations', \
    UpdateModelAnimation, 'UpdateModelAnimation', \
    UpdateModelAnimationEx, 'UpdateModelAnimationEx', \
    UnloadModelAnimations, 'UnloadModelAnimations', \
    IsModelAnimationValid, 'IsModelAnimationValid', \
    CheckCollisionSpheres, 'CheckCollisionSpheres', \
    CheckCollisionBoxes, 'CheckCollisionBoxes', \
    CheckCollisionBoxSphere, 'CheckCollisionBoxSphere', \
    GetRayCollisionSphere, 'GetRayCollisionSphere', \
    GetRayCollisionBox, 'GetRayCollisionBox', \
    GetRayCollisionMesh, 'GetRayCollisionMesh', \
    GetRayCollisionTriangle, 'GetRayCollisionTriangle', \
    GetRayCollisionQuad, 'GetRayCollisionQuad', \
    InitAudioDevice, 'InitAudioDevice', \
    CloseAudioDevice, 'CloseAudioDevice', \
    IsAudioDeviceReady, 'IsAudioDeviceReady', \
    SetMasterVolume, 'SetMasterVolume', \
    GetMasterVolume, 'GetMasterVolume', \
    LoadWave, 'LoadWave', \
    LoadWaveFromMemory, 'LoadWaveFromMemory', \
    IsWaveValid, 'IsWaveValid', \
    LoadSound, 'LoadSound', \
    LoadSoundFromWave, 'LoadSoundFromWave', \
    LoadSoundAlias, 'LoadSoundAlias', \
    IsSoundValid, 'IsSoundValid', \
    UpdateSound, 'UpdateSound', \
    UnloadWave, 'UnloadWave', \
    UnloadSound, 'UnloadSound', \
    UnloadSoundAlias, 'UnloadSoundAlias', \
    ExportWave, 'ExportWave', \
    ExportWaveAsCode, 'ExportWaveAsCode', \
    PlaySound, 'PlaySound', \
    StopSound, 'StopSound', \
    PauseSound, 'PauseSound', \
    ResumeSound, 'ResumeSound', \
    IsSoundPlaying, 'IsSoundPlaying', \
    SetSoundVolume, 'SetSoundVolume', \
    SetSoundPitch, 'SetSoundPitch', \
    SetSoundPan, 'SetSoundPan', \
    WaveCopy, 'WaveCopy', \
    WaveCrop, 'WaveCrop', \
    WaveFormat, 'WaveFormat', \
    LoadWaveSamples, 'LoadWaveSamples', \
    UnloadWaveSamples, 'UnloadWaveSamples', \
    LoadMusicStream, 'LoadMusicStream', \
    LoadMusicStreamFromMemory, 'LoadMusicStreamFromMemory', \
    IsMusicValid, 'IsMusicValid', \
    UnloadMusicStream, 'UnloadMusicStream', \
    PlayMusicStream, 'PlayMusicStream', \
    IsMusicStreamPlaying, 'IsMusicStreamPlaying', \
    UpdateMusicStream, 'UpdateMusicStream', \
    StopMusicStream, 'StopMusicStream', \
    PauseMusicStream, 'PauseMusicStream', \
    ResumeMusicStream, 'ResumeMusicStream', \
    SeekMusicStream, 'SeekMusicStream', \
    SetMusicVolume, 'SetMusicVolume', \
    SetMusicPitch, 'SetMusicPitch', \
    SetMusicPan, 'SetMusicPan', \
    GetMusicTimeLength, 'GetMusicTimeLength', \
    GetMusicTimePlayed, 'GetMusicTimePlayed', \
    LoadAudioStream, 'LoadAudioStream', \
    IsAudioStreamValid, 'IsAudioStreamValid', \
    UnloadAudioStream, 'UnloadAudioStream', \
    UpdateAudioStream, 'UpdateAudioStream', \
    IsAudioStreamProcessed, 'IsAudioStreamProcessed', \
    PlayAudioStream, 'PlayAudioStream', \
    PauseAudioStream, 'PauseAudioStream', \
    ResumeAudioStream, 'ResumeAudioStream', \
    IsAudioStreamPlaying, 'IsAudioStreamPlaying', \
    StopAudioStream, 'StopAudioStream', \
    SetAudioStreamVolume, 'SetAudioStreamVolume', \
    SetAudioStreamPitch, 'SetAudioStreamPitch', \
    SetAudioStreamPan, 'SetAudioStreamPan', \
    SetAudioStreamBufferSizeDefault, 'SetAudioStreamBufferSizeDefault', \
    SetAudioStreamCallback, 'SetAudioStreamCallback', \
    AttachAudioStreamProcessor, 'AttachAudioStreamProcessor', \
    DetachAudioStreamProcessor, 'DetachAudioStreamProcessor', \
    AttachAudioMixedProcessor, 'AttachAudioMixedProcessor', \
    DetachAudioMixedProcessor, 'DetachAudioMixedProcessor'

