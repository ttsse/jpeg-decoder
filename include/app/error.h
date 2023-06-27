#pragma once

/**
 * @brief exit codes specifying the cause of the program exit
 * 
 */
enum AppError{
    // xcb errors
    XCB_CONNECT_FAILURE            = -0x001,
    XCB_WINDOW_CREATE_FAILURE      = -0x002,
    XCB_CHANGE_PROPERTY_FAILURE    = -0x003,
    XCB_INTERN_ATOM_FAILURE        = -0x004,

    // vulkan errors
    VULKAN_CREATE_INSTANCE_FAILURE =                -0x100,
    VULKAN_CREATE_XCB_SURFACE_FAILURE =             -0x101,
    VULKAN_QUEUE_PRESENT_KHR_FAILURE =              -0x102,
    VULKAN_CREATE_BUFFER_FAILURE =                  -0x103,
    VULKAN_ALLOCATE_MEMORY_FAILURE =                -0x104,
    VULKAN_BIND_BUFFER_MEMORY_FAILURE =             -0x105,
    VULKAN_SHADER_FILE_NOT_FOUND =                  -0x106,
    VULKAN_CREATE_DESCRIPTOR_SET_LAYOUT_FAILURE =   -0x107,
    VULKAN_CREATE_DESCRIPTOR_POOL_FAILURE =         -0x108,
    VULKAN_ALLOCATE_DESCRIPTOR_SETS_FAILURE =       -0x109,
    VULKAN_CREATE_DEVICE_FAILURE =                  -0x10A,
    VULKAN_GET_PHYSICAL_DEVICE_SURFACE_CAPABILITIES_KHR_FAILURE = -0x10B,
    VULKAN_CREATE_RENDER_PASS_FAILURE =             -0x10C,
    VULKAN_CREATE_SEMAPHORE_FAILURE =               -0x10D,
    VULKAN_CREATE_COMMAND_POOL_FAILURE =            -0x10E,
    VULKAN_ALLOCATE_COMMAND_BUFFERS_FAILURE =       -0x10F,
    VULKAN_ACQUIRE_NEXT_IMAGE_KHR_FAILURE =         -0x110,
    VULKAN_END_COMMAND_BUFFER_FAILURE =             -0x111,
    VULKAN_QUEUE_SUBMIT_FAILURE =                   -0x112,
    VULKAN_CREATE_IMAGE_FAILURE =                   -0x113,
    VULKAN_BIND_IMAGE_MEMORY_FAILURE =              -0x114,
    VULKAN_CREATE_IMAGE_VIEW_FAILURE =              -0x115,

    // other errors
    FATAL_UNEXPECTED_ERROR = -0x400,
};
