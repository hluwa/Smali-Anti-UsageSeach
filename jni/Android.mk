LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)
LOCAL_MODULE := smalisafe
LOCAL_SRC_FILES := SmaliSafe.cpp
include $(BUILD_SHARED_LIBRARY)