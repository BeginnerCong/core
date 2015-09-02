#-------------------------------------------------
#
# Project created by QtCreator 2015-08-28T23:20:13
#
#-------------------------------------------------

QT       -= core
QT       -= gui

TARGET = ASCDocumentEditor
TEMPLATE = app
#CONFIG   += console
CONFIG   += app_bundle

INCLUDEPATH += \
    $$PWD/../../../lib/src/cef/mac

DEFINES += \
    "V8_DEPRECATION_WARNINGS" \
    "PSAPI_VERSION=1" \
    "_CRT_RAND_S" \
    "CERT_CHAIN_PARA_HAS_EXTRA_FIELDS" \
    "_ATL_NO_OPENGL" \
    "_HAS_EXCEPTIONS=0" \
    "_SECURE_ATL" \
    "CHROMIUM_BUILD" \
    "TOOLKIT_VIEWS=1" \
    "USE_AURA=1" \
    "USE_ASH=1" \
    "USE_DEFAULT_RENDER_THEME=1" \
    "USE_LIBJPEG_TURBO=1" \
    "ENABLE_ONE_CLICK_SIGNIN" \
    "ENABLE_PRE_SYNC_BACKUP" \
    "ENABLE_REMOTING=1" \
    "ENABLE_WEBRTC=1" \
    "ENABLE_PEPPER_CDMS" \
    "ENABLE_CONFIGURATION_POLICY" \
    "ENABLE_NOTIFICATIONS" \
    "ENABLE_HIDPI=1" \
    "ENABLE_EGLIMAGE=1" \
    "__STD_C" \
    "_CRT_SECURE_NO_DEPRECATE" \
    "_SCL_SECURE_NO_DEPRECATE" \
    "NTDDI_VERSION=0x06020000" \
    "_USING_V110_SDK71_" \
    "ENABLE_TASK_MANAGER=1" \
    "ENABLE_EXTENSIONS=1" \
    "ENABLE_PLUGIN_INSTALLATION=1" \
    "ENABLE_PLUGINS=1" \
    "ENABLE_SESSION_SERVICE=1" \
    "ENABLE_THEMES=1" \
    "ENABLE_AUTOFILL_DIALOG=1" \
    "ENABLE_BACKGROUND=1" \
    "ENABLE_GOOGLE_NOW=1" \
    "CLD_VERSION=2" \
    "CLD2_DATA_SOURCE=static" \
    "ENABLE_FULL_PRINTING=1" \
    "ENABLE_PRINTING=1" \
    "ENABLE_SPELLCHECK=1" \
    "ENABLE_CAPTIVE_PORTAL_DETECTION=1" \
    "ENABLE_APP_LIST=1" \
    "ENABLE_SETTINGS_APP=1" \
    "ENABLE_MANAGED_USERS=1" \
    "ENABLE_MDNS=1" \
    "ENABLE_SERVICE_DISCOVERY=1" \
    "ENABLE_WIFI_BOOTSTRAPPING=1" \
    "ENABLE_LOAD_COMPLETION_HACKS=1" \
    "USING_CEF_SHARED" \
    "__STDC_CONSTANT_MACROS" \
    "__STDC_FORMAT_MACROS" \
    "NDEBUG" \
    "NVALGRIND" \
    "DYNAMIC_ANNOTATIONS_ENABLED=0"

#PROJECT_PATH = /Users/Oleg/Desktop/activex/AVS/Sources/TeamlabOffice/trunk/ServerComponents/DesktopEditor/ChromiumBasedEditors\ 2/app/test/src
PROJECT_PATH = ../

QMAKE_LFLAGS += -F$${PROJECT_PATH}/../../cefbuilds/mac
LIBS += -framework "Chromium Embedded Framework"
LIBS += -framework AppKit
LIBS += -framework OpenGl

TEMPLATE = app

SOURCES += \
    ../../../lib/src/cef/mac/cefclient/browser/binding_test.cc \
    ../../../lib/src/cef/mac/cefclient/browser/browser_window.cc \
    ../../../lib/src/cef/mac/cefclient/browser/bytes_write_handler.cc \
    ../../../lib/src/cef/mac/cefclient/browser/client_app_browser.cc \
    ../../../lib/src/cef/mac/cefclient/browser/client_app_delegates_browser.cc \
    ../../../lib/src/cef/mac/cefclient/browser/client_handler.cc \
    ../../../lib/src/cef/mac/cefclient/browser/client_handler_osr.cc \
    ../../../lib/src/cef/mac/cefclient/browser/client_handler_std.cc \
    ../../../lib/src/cef/mac/cefclient/browser/dialog_test.cc \
    ../../../lib/src/cef/mac/cefclient/browser/geometry_util.cc \
    ../../../lib/src/cef/mac/cefclient/browser/main_context.cc \
    ../../../lib/src/cef/mac/cefclient/browser/main_context_impl.cc \
    ../../../lib/src/cef/mac/cefclient/browser/main_context_impl_posix.cc \
    ../../../lib/src/cef/mac/cefclient/browser/main_message_loop.cc \
    ../../../lib/src/cef/mac/cefclient/browser/main_message_loop_std.cc \
    ../../../lib/src/cef/mac/cefclient/browser/osr_renderer.cc \
    ../../../lib/src/cef/mac/cefclient/browser/resource_util_posix.cc \
    ../../../lib/src/cef/mac/cefclient/browser/root_window.cc \
    ../../../lib/src/cef/mac/cefclient/browser/root_window_manager.cc \
    ../../../lib/src/cef/mac/cefclient/browser/scheme_test.cc \
    ../../../lib/src/cef/mac/cefclient/browser/test_runner.cc \
    ../../../lib/src/cef/mac/cefclient/browser/urlrequest_test.cc \
    ../../../lib/src/cef/mac/cefclient/browser/window_test.cc \
    ../../../lib/src/cef/mac/cefclient/common/client_app.cc \
    ../../../lib/src/cef/mac/cefclient/common/client_app_delegates_common.cc \
    ../../../lib/src/cef/mac/cefclient/common/client_app_other.cc \
    ../../../lib/src/cef/mac/cefclient/common/client_switches.cc \
    ../../../lib/src/cef/mac/cefclient/common/scheme_test_common.cc \
    ../../../lib/src/cef/mac/cefclient/renderer/client_app_delegates_renderer.cc \
    ../../../lib/src/cef/mac/cefclient/renderer/client_app_renderer.cc \
    ../../../lib/src/cef/mac/cefclient/renderer/client_renderer.cc \
    ../../../lib/src/cef/mac/cefclient/renderer/performance_test.cc \
    ../../../lib/src/cef/mac/cefclient/renderer/performance_test_tests.cc \
    ../../../lib/src/cef/mac/libcef_dll/base/cef_atomicops_x86_gcc.cc \
    ../../../lib/src/cef/mac/libcef_dll/base/cef_bind_helpers.cc \
    ../../../lib/src/cef/mac/libcef_dll/base/cef_callback_helpers.cc \
    ../../../lib/src/cef/mac/libcef_dll/base/cef_callback_internal.cc \
    ../../../lib/src/cef/mac/libcef_dll/base/cef_lock.cc \
    ../../../lib/src/cef/mac/libcef_dll/base/cef_lock_impl.cc \
    ../../../lib/src/cef/mac/libcef_dll/base/cef_logging.cc \
    ../../../lib/src/cef/mac/libcef_dll/base/cef_ref_counted.cc \
    ../../../lib/src/cef/mac/libcef_dll/base/cef_string16.cc \
    ../../../lib/src/cef/mac/libcef_dll/base/cef_thread_checker_impl.cc \
    ../../../lib/src/cef/mac/libcef_dll/base/cef_thread_collision_warner.cc \
    ../../../lib/src/cef/mac/libcef_dll/base/cef_weak_ptr.cc \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/app_cpptoc.cc \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/base_cpptoc.cc \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/browser_process_handler_cpptoc.cc \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/client_cpptoc.cc \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/completion_callback_cpptoc.cc \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/context_menu_handler_cpptoc.cc \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/cookie_visitor_cpptoc.cc \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/delete_cookies_callback_cpptoc.cc \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/dialog_handler_cpptoc.cc \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/display_handler_cpptoc.cc \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/domvisitor_cpptoc.cc \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/download_handler_cpptoc.cc \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/drag_handler_cpptoc.cc \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/end_tracing_callback_cpptoc.cc \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/find_handler_cpptoc.cc \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/focus_handler_cpptoc.cc \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/geolocation_handler_cpptoc.cc \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/get_geolocation_callback_cpptoc.cc \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/jsdialog_handler_cpptoc.cc \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/keyboard_handler_cpptoc.cc \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/life_span_handler_cpptoc.cc \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/load_handler_cpptoc.cc \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/navigation_entry_visitor_cpptoc.cc \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/pdf_print_callback_cpptoc.cc \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/print_handler_cpptoc.cc \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/read_handler_cpptoc.cc \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/render_handler_cpptoc.cc \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/render_process_handler_cpptoc.cc \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/request_context_handler_cpptoc.cc \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/request_handler_cpptoc.cc \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/resource_bundle_handler_cpptoc.cc \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/resource_handler_cpptoc.cc \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/run_file_dialog_callback_cpptoc.cc \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/scheme_handler_factory_cpptoc.cc \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/set_cookie_callback_cpptoc.cc \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/string_visitor_cpptoc.cc \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/task_cpptoc.cc \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/urlrequest_client_cpptoc.cc \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/v8accessor_cpptoc.cc \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/v8handler_cpptoc.cc \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/web_plugin_info_visitor_cpptoc.cc \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/web_plugin_unstable_callback_cpptoc.cc \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/write_handler_cpptoc.cc \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/auth_callback_ctocpp.cc \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/before_download_callback_ctocpp.cc \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/binary_value_ctocpp.cc \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/browser_ctocpp.cc \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/browser_host_ctocpp.cc \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/callback_ctocpp.cc \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/command_line_ctocpp.cc \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/context_menu_params_ctocpp.cc \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/cookie_manager_ctocpp.cc \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/dictionary_value_ctocpp.cc \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/domdocument_ctocpp.cc \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/domnode_ctocpp.cc \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/download_item_callback_ctocpp.cc \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/download_item_ctocpp.cc \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/drag_data_ctocpp.cc \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/file_dialog_callback_ctocpp.cc \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/frame_ctocpp.cc \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/geolocation_callback_ctocpp.cc \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/jsdialog_callback_ctocpp.cc \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/list_value_ctocpp.cc \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/menu_model_ctocpp.cc \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/navigation_entry_ctocpp.cc \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/post_data_ctocpp.cc \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/post_data_element_ctocpp.cc \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/print_dialog_callback_ctocpp.cc \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/print_job_callback_ctocpp.cc \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/print_settings_ctocpp.cc \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/process_message_ctocpp.cc \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/request_callback_ctocpp.cc \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/request_context_ctocpp.cc \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/request_ctocpp.cc \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/response_ctocpp.cc \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/scheme_registrar_ctocpp.cc \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/sslcert_principal_ctocpp.cc \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/sslinfo_ctocpp.cc \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/stream_reader_ctocpp.cc \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/stream_writer_ctocpp.cc \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/task_runner_ctocpp.cc \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/urlrequest_ctocpp.cc \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/v8context_ctocpp.cc \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/v8exception_ctocpp.cc \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/v8stack_frame_ctocpp.cc \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/v8stack_trace_ctocpp.cc \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/v8value_ctocpp.cc \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/value_ctocpp.cc \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/web_plugin_info_ctocpp.cc \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/xml_reader_ctocpp.cc \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/zip_reader_ctocpp.cc \
    ../../../lib/src/cef/mac/libcef_dll/wrapper/cef_byte_read_handler.cc \
    ../../../lib/src/cef/mac/libcef_dll/wrapper/cef_closure_task.cc \
    ../../../lib/src/cef/mac/libcef_dll/wrapper/cef_message_router.cc \
    ../../../lib/src/cef/mac/libcef_dll/wrapper/cef_resource_manager.cc \
    ../../../lib/src/cef/mac/libcef_dll/wrapper/cef_stream_resource_handler.cc \
    ../../../lib/src/cef/mac/libcef_dll/wrapper/cef_xml_object.cc \
    ../../../lib/src/cef/mac/libcef_dll/wrapper/cef_zip_archive.cc \
    ../../../lib/src/cef/mac/libcef_dll/wrapper/libcef_dll_wrapper.cc \
    ../../../lib/src/cef/mac/libcef_dll/wrapper/libcef_dll_wrapper2.cc \
    ../../../lib/src/cef/mac/libcef_dll/transfer_util.cc

HEADERS += \
    ../../../lib/src/cef/mac/cefclient/browser/binding_test.h \
    ../../../lib/src/cef/mac/cefclient/browser/browser_window.h \
    ../../../lib/src/cef/mac/cefclient/browser/browser_window_osr_mac.h \
    ../../../lib/src/cef/mac/cefclient/browser/browser_window_std_mac.h \
    ../../../lib/src/cef/mac/cefclient/browser/bytes_write_handler.h \
    ../../../lib/src/cef/mac/cefclient/browser/client_app_browser.h \
    ../../../lib/src/cef/mac/cefclient/browser/client_handler.h \
    ../../../lib/src/cef/mac/cefclient/browser/client_handler_osr.h \
    ../../../lib/src/cef/mac/cefclient/browser/client_handler_std.h \
    ../../../lib/src/cef/mac/cefclient/browser/client_types.h \
    ../../../lib/src/cef/mac/cefclient/browser/dialog_test.h \
    ../../../lib/src/cef/mac/cefclient/browser/geometry_util.h \
    ../../../lib/src/cef/mac/cefclient/browser/main_context.h \
    ../../../lib/src/cef/mac/cefclient/browser/main_context_impl.h \
    ../../../lib/src/cef/mac/cefclient/browser/main_message_loop.h \
    ../../../lib/src/cef/mac/cefclient/browser/main_message_loop_std.h \
    ../../../lib/src/cef/mac/cefclient/browser/osr_dragdrop_events.h \
    ../../../lib/src/cef/mac/cefclient/browser/osr_renderer.h \
    ../../../lib/src/cef/mac/cefclient/browser/resource.h \
    ../../../lib/src/cef/mac/cefclient/browser/resource_util.h \
    ../../../lib/src/cef/mac/cefclient/browser/root_window.h \
    ../../../lib/src/cef/mac/cefclient/browser/root_window_mac.h \
    ../../../lib/src/cef/mac/cefclient/browser/root_window_manager.h \
    ../../../lib/src/cef/mac/cefclient/browser/scheme_test.h \
    ../../../lib/src/cef/mac/cefclient/browser/temp_window.h \
    ../../../lib/src/cef/mac/cefclient/browser/temp_window_mac.h \
    ../../../lib/src/cef/mac/cefclient/browser/test_runner.h \
    ../../../lib/src/cef/mac/cefclient/browser/urlrequest_test.h \
    ../../../lib/src/cef/mac/cefclient/browser/window_test.h \
    ../../../lib/src/cef/mac/cefclient/common/client_app.h \
    ../../../lib/src/cef/mac/cefclient/common/client_app_other.h \
    ../../../lib/src/cef/mac/cefclient/common/client_switches.h \
    ../../../lib/src/cef/mac/cefclient/common/scheme_test_common.h \
    ../../../lib/src/cef/mac/cefclient/renderer/client_app_renderer.h \
    ../../../lib/src/cef/mac/cefclient/renderer/client_renderer.h \
    ../../../lib/src/cef/mac/cefclient/renderer/performance_test.h \
    ../../../lib/src/cef/mac/cefclient/renderer/performance_test_setup.h \
    ../../../lib/src/cef/mac/include/base/internal/cef_atomicops_atomicword_compat.h \
    ../../../lib/src/cef/mac/include/base/internal/cef_atomicops_mac.h \
    ../../../lib/src/cef/mac/include/base/internal/cef_bind_internal.h \
    ../../../lib/src/cef/mac/include/base/internal/cef_callback_internal.h \
    ../../../lib/src/cef/mac/include/base/internal/cef_lock_impl.h \
    ../../../lib/src/cef/mac/include/base/internal/cef_raw_scoped_refptr_mismatch_checker.h \
    ../../../lib/src/cef/mac/include/base/internal/cef_thread_checker_impl.h \
    ../../../lib/src/cef/mac/include/base/cef_atomic_ref_count.h \
    ../../../lib/src/cef/mac/include/base/cef_atomicops.h \
    ../../../lib/src/cef/mac/include/base/cef_basictypes.h \
    ../../../lib/src/cef/mac/include/base/cef_bind.h \
    ../../../lib/src/cef/mac/include/base/cef_bind_helpers.h \
    ../../../lib/src/cef/mac/include/base/cef_build.h \
    ../../../lib/src/cef/mac/include/base/cef_callback.h \
    ../../../lib/src/cef/mac/include/base/cef_callback_forward.h \
    ../../../lib/src/cef/mac/include/base/cef_callback_helpers.h \
    ../../../lib/src/cef/mac/include/base/cef_callback_list.h \
    ../../../lib/src/cef/mac/include/base/cef_cancelable_callback.h \
    ../../../lib/src/cef/mac/include/base/cef_lock.h \
    ../../../lib/src/cef/mac/include/base/cef_logging.h \
    ../../../lib/src/cef/mac/include/base/cef_macros.h \
    ../../../lib/src/cef/mac/include/base/cef_move.h \
    ../../../lib/src/cef/mac/include/base/cef_platform_thread.h \
    ../../../lib/src/cef/mac/include/base/cef_ref_counted.h \
    ../../../lib/src/cef/mac/include/base/cef_scoped_ptr.h \
    ../../../lib/src/cef/mac/include/base/cef_string16.h \
    ../../../lib/src/cef/mac/include/base/cef_template_util.h \
    ../../../lib/src/cef/mac/include/base/cef_thread_checker.h \
    ../../../lib/src/cef/mac/include/base/cef_thread_collision_warner.h \
    ../../../lib/src/cef/mac/include/base/cef_trace_event.h \
    ../../../lib/src/cef/mac/include/base/cef_tuple.h \
    ../../../lib/src/cef/mac/include/base/cef_weak_ptr.h \
    ../../../lib/src/cef/mac/include/capi/cef_app_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_auth_callback_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_base_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_browser_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_browser_process_handler_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_callback_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_client_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_command_line_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_context_menu_handler_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_cookie_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_dialog_handler_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_display_handler_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_dom_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_download_handler_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_download_item_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_drag_data_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_drag_handler_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_find_handler_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_focus_handler_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_frame_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_geolocation_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_geolocation_handler_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_jsdialog_handler_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_keyboard_handler_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_life_span_handler_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_load_handler_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_menu_model_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_navigation_entry_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_origin_whitelist_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_parser_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_path_util_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_print_handler_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_print_settings_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_process_message_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_process_util_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_render_handler_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_render_process_handler_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_request_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_request_context_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_request_context_handler_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_request_handler_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_resource_bundle_handler_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_resource_handler_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_response_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_scheme_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_ssl_info_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_stream_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_string_visitor_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_task_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_trace_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_urlrequest_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_v8_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_values_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_web_plugin_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_xml_reader_capi.h \
    ../../../lib/src/cef/mac/include/capi/cef_zip_reader_capi.h \
    ../../../lib/src/cef/mac/include/internal/cef_export.h \
    ../../../lib/src/cef/mac/include/internal/cef_logging_internal.h \
    ../../../lib/src/cef/mac/include/internal/cef_mac.h \
    ../../../lib/src/cef/mac/include/internal/cef_ptr.h \
    ../../../lib/src/cef/mac/include/internal/cef_string.h \
    ../../../lib/src/cef/mac/include/internal/cef_string_list.h \
    ../../../lib/src/cef/mac/include/internal/cef_string_map.h \
    ../../../lib/src/cef/mac/include/internal/cef_string_multimap.h \
    ../../../lib/src/cef/mac/include/internal/cef_string_types.h \
    ../../../lib/src/cef/mac/include/internal/cef_string_wrappers.h \
    ../../../lib/src/cef/mac/include/internal/cef_thread_internal.h \
    ../../../lib/src/cef/mac/include/internal/cef_time.h \
    ../../../lib/src/cef/mac/include/internal/cef_trace_event_internal.h \
    ../../../lib/src/cef/mac/include/internal/cef_types.h \
    ../../../lib/src/cef/mac/include/internal/cef_types_mac.h \
    ../../../lib/src/cef/mac/include/internal/cef_types_wrappers.h \
    ../../../lib/src/cef/mac/include/wrapper/cef_byte_read_handler.h \
    ../../../lib/src/cef/mac/include/wrapper/cef_closure_task.h \
    ../../../lib/src/cef/mac/include/wrapper/cef_helpers.h \
    ../../../lib/src/cef/mac/include/wrapper/cef_message_router.h \
    ../../../lib/src/cef/mac/include/wrapper/cef_resource_manager.h \
    ../../../lib/src/cef/mac/include/wrapper/cef_stream_resource_handler.h \
    ../../../lib/src/cef/mac/include/wrapper/cef_xml_object.h \
    ../../../lib/src/cef/mac/include/wrapper/cef_zip_archive.h \
    ../../../lib/src/cef/mac/include/cef_app.h \
    ../../../lib/src/cef/mac/include/cef_application_mac.h \
    ../../../lib/src/cef/mac/include/cef_auth_callback.h \
    ../../../lib/src/cef/mac/include/cef_base.h \
    ../../../lib/src/cef/mac/include/cef_browser.h \
    ../../../lib/src/cef/mac/include/cef_browser_process_handler.h \
    ../../../lib/src/cef/mac/include/cef_callback.h \
    ../../../lib/src/cef/mac/include/cef_client.h \
    ../../../lib/src/cef/mac/include/cef_command_line.h \
    ../../../lib/src/cef/mac/include/cef_context_menu_handler.h \
    ../../../lib/src/cef/mac/include/cef_cookie.h \
    ../../../lib/src/cef/mac/include/cef_dialog_handler.h \
    ../../../lib/src/cef/mac/include/cef_display_handler.h \
    ../../../lib/src/cef/mac/include/cef_dom.h \
    ../../../lib/src/cef/mac/include/cef_download_handler.h \
    ../../../lib/src/cef/mac/include/cef_download_item.h \
    ../../../lib/src/cef/mac/include/cef_drag_data.h \
    ../../../lib/src/cef/mac/include/cef_drag_handler.h \
    ../../../lib/src/cef/mac/include/cef_find_handler.h \
    ../../../lib/src/cef/mac/include/cef_focus_handler.h \
    ../../../lib/src/cef/mac/include/cef_frame.h \
    ../../../lib/src/cef/mac/include/cef_geolocation.h \
    ../../../lib/src/cef/mac/include/cef_geolocation_handler.h \
    ../../../lib/src/cef/mac/include/cef_jsdialog_handler.h \
    ../../../lib/src/cef/mac/include/cef_keyboard_handler.h \
    ../../../lib/src/cef/mac/include/cef_life_span_handler.h \
    ../../../lib/src/cef/mac/include/cef_load_handler.h \
    ../../../lib/src/cef/mac/include/cef_menu_model.h \
    ../../../lib/src/cef/mac/include/cef_navigation_entry.h \
    ../../../lib/src/cef/mac/include/cef_origin_whitelist.h \
    ../../../lib/src/cef/mac/include/cef_pack_resources.h \
    ../../../lib/src/cef/mac/include/cef_pack_strings.h \
    ../../../lib/src/cef/mac/include/cef_parser.h \
    ../../../lib/src/cef/mac/include/cef_path_util.h \
    ../../../lib/src/cef/mac/include/cef_print_handler.h \
    ../../../lib/src/cef/mac/include/cef_print_settings.h \
    ../../../lib/src/cef/mac/include/cef_process_message.h \
    ../../../lib/src/cef/mac/include/cef_process_util.h \
    ../../../lib/src/cef/mac/include/cef_render_handler.h \
    ../../../lib/src/cef/mac/include/cef_render_process_handler.h \
    ../../../lib/src/cef/mac/include/cef_request.h \
    ../../../lib/src/cef/mac/include/cef_request_context.h \
    ../../../lib/src/cef/mac/include/cef_request_context_handler.h \
    ../../../lib/src/cef/mac/include/cef_request_handler.h \
    ../../../lib/src/cef/mac/include/cef_resource_bundle_handler.h \
    ../../../lib/src/cef/mac/include/cef_resource_handler.h \
    ../../../lib/src/cef/mac/include/cef_response.h \
    ../../../lib/src/cef/mac/include/cef_runnable.h \
    ../../../lib/src/cef/mac/include/cef_scheme.h \
    ../../../lib/src/cef/mac/include/cef_ssl_info.h \
    ../../../lib/src/cef/mac/include/cef_stream.h \
    ../../../lib/src/cef/mac/include/cef_string_visitor.h \
    ../../../lib/src/cef/mac/include/cef_task.h \
    ../../../lib/src/cef/mac/include/cef_trace.h \
    ../../../lib/src/cef/mac/include/cef_urlrequest.h \
    ../../../lib/src/cef/mac/include/cef_v8.h \
    ../../../lib/src/cef/mac/include/cef_values.h \
    ../../../lib/src/cef/mac/include/cef_version.h \
    ../../../lib/src/cef/mac/include/cef_web_plugin.h \
    ../../../lib/src/cef/mac/include/cef_xml_reader.h \
    ../../../lib/src/cef/mac/include/cef_zip_reader.h \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/app_cpptoc.h \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/base_cpptoc.h \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/browser_process_handler_cpptoc.h \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/client_cpptoc.h \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/completion_callback_cpptoc.h \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/context_menu_handler_cpptoc.h \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/cookie_visitor_cpptoc.h \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/cpptoc.h \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/delete_cookies_callback_cpptoc.h \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/dialog_handler_cpptoc.h \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/display_handler_cpptoc.h \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/domvisitor_cpptoc.h \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/download_handler_cpptoc.h \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/drag_handler_cpptoc.h \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/end_tracing_callback_cpptoc.h \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/find_handler_cpptoc.h \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/focus_handler_cpptoc.h \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/geolocation_handler_cpptoc.h \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/get_geolocation_callback_cpptoc.h \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/jsdialog_handler_cpptoc.h \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/keyboard_handler_cpptoc.h \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/life_span_handler_cpptoc.h \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/load_handler_cpptoc.h \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/navigation_entry_visitor_cpptoc.h \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/pdf_print_callback_cpptoc.h \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/print_handler_cpptoc.h \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/read_handler_cpptoc.h \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/render_handler_cpptoc.h \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/render_process_handler_cpptoc.h \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/request_context_handler_cpptoc.h \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/request_handler_cpptoc.h \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/resource_bundle_handler_cpptoc.h \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/resource_handler_cpptoc.h \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/run_file_dialog_callback_cpptoc.h \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/scheme_handler_factory_cpptoc.h \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/set_cookie_callback_cpptoc.h \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/string_visitor_cpptoc.h \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/task_cpptoc.h \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/urlrequest_client_cpptoc.h \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/v8accessor_cpptoc.h \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/v8handler_cpptoc.h \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/web_plugin_info_visitor_cpptoc.h \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/web_plugin_unstable_callback_cpptoc.h \
    ../../../lib/src/cef/mac/libcef_dll/cpptoc/write_handler_cpptoc.h \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/auth_callback_ctocpp.h \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/before_download_callback_ctocpp.h \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/binary_value_ctocpp.h \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/browser_ctocpp.h \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/browser_host_ctocpp.h \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/callback_ctocpp.h \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/command_line_ctocpp.h \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/context_menu_params_ctocpp.h \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/cookie_manager_ctocpp.h \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/ctocpp.h \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/dictionary_value_ctocpp.h \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/domdocument_ctocpp.h \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/domnode_ctocpp.h \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/download_item_callback_ctocpp.h \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/download_item_ctocpp.h \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/drag_data_ctocpp.h \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/file_dialog_callback_ctocpp.h \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/frame_ctocpp.h \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/geolocation_callback_ctocpp.h \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/jsdialog_callback_ctocpp.h \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/list_value_ctocpp.h \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/menu_model_ctocpp.h \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/navigation_entry_ctocpp.h \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/post_data_ctocpp.h \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/post_data_element_ctocpp.h \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/print_dialog_callback_ctocpp.h \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/print_job_callback_ctocpp.h \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/print_settings_ctocpp.h \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/process_message_ctocpp.h \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/request_callback_ctocpp.h \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/request_context_ctocpp.h \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/request_ctocpp.h \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/response_ctocpp.h \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/scheme_registrar_ctocpp.h \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/sslcert_principal_ctocpp.h \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/sslinfo_ctocpp.h \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/stream_reader_ctocpp.h \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/stream_writer_ctocpp.h \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/task_runner_ctocpp.h \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/urlrequest_ctocpp.h \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/v8context_ctocpp.h \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/v8exception_ctocpp.h \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/v8stack_frame_ctocpp.h \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/v8stack_trace_ctocpp.h \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/v8value_ctocpp.h \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/value_ctocpp.h \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/web_plugin_info_ctocpp.h \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/xml_reader_ctocpp.h \
    ../../../lib/src/cef/mac/libcef_dll/ctocpp/zip_reader_ctocpp.h \
    ../../../lib/src/cef/mac/libcef_dll/wrapper/cef_browser_info_map.h \
    ../../../lib/src/cef/mac/libcef_dll/transfer_util.h \
    ../../../lib/src/cef/mac/libcef_dll/wrapper_types.h

OBJECTIVE_SOURCES += \
    ../../../lib/src/cef/mac/cefclient/browser/browser_window_osr_mac.mm \
    ../../../lib/src/cef/mac/cefclient/browser/browser_window_std_mac.mm \
    ../../../lib/src/cef/mac/cefclient/browser/resource_util_mac.mm \
    ../../../lib/src/cef/mac/cefclient/browser/root_window_mac.mm \
    ../../../lib/src/cef/mac/cefclient/browser/temp_window_mac.mm \
    ../../../lib/src/cef/mac/cefclient/browser/window_test_mac.mm \
    ../../../lib/src/cef/mac/cefclient/cefclient_mac.mm

BUNDLE_TARGET = $${PROJECT_PATH}/mac_Debug/$${TARGET}.app

QMAKE_POST_LINK += mkdir -p $${BUNDLE_TARGET}/Contents/Frameworks; \
cp -R $${PROJECT_PATH}/../../cefbuilds/mac/ASCDocumentEditor\ Helper.app $${BUNDLE_TARGET}/Contents/Frameworks; \
cp -R $${PROJECT_PATH}/../../cefbuilds/mac/Chromium\ Embedded\ Framework.framework $${BUNDLE_TARGET}/Contents/Frameworks; \
install_name_tool \
-change \
@executable_path/Chromium\ Embedded\ Framework \
@executable_path/../Frameworks/Chromium\ Embedded\ Framework.framework/Chromium\ Embedded\ Framework \
ASCDocumentEditor.app/Contents/MacOS/ASCDocumentEditor