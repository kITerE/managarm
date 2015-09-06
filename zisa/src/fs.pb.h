// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: fs.proto

#ifndef PROTOBUF_fs_2eproto__INCLUDED
#define PROTOBUF_fs_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_util.h>
// @@protoc_insertion_point(includes)

namespace managarm {
namespace fs {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_fs_2eproto();
void protobuf_AssignDesc_fs_2eproto();
void protobuf_ShutdownFile_fs_2eproto();

class ClientRequest;
class ServerResponse;

enum ClientRequest_RequestType {
  ClientRequest_RequestType_OPEN = 1,
  ClientRequest_RequestType_READ = 2,
  ClientRequest_RequestType_WRITE = 3,
  ClientRequest_RequestType_CLOSE = 4
};
bool ClientRequest_RequestType_IsValid(int value);
const ClientRequest_RequestType ClientRequest_RequestType_RequestType_MIN = ClientRequest_RequestType_OPEN;
const ClientRequest_RequestType ClientRequest_RequestType_RequestType_MAX = ClientRequest_RequestType_CLOSE;
const int ClientRequest_RequestType_RequestType_ARRAYSIZE = ClientRequest_RequestType_RequestType_MAX + 1;

// ===================================================================

class ClientRequest : public ::google::protobuf::MessageLite {
 public:
  ClientRequest();
  virtual ~ClientRequest();

  ClientRequest(const ClientRequest& from);

  inline ClientRequest& operator=(const ClientRequest& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::std::string* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ClientRequest& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const ClientRequest* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(ClientRequest* other);

  // implements Message ----------------------------------------------

  inline ClientRequest* New() const { return New(NULL); }

  ClientRequest* New(::google::protobuf::Arena* arena) const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const ClientRequest& from);
  void MergeFrom(const ClientRequest& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  void DiscardUnknownFields();
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ClientRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _arena_ptr_;
  }
  inline ::google::protobuf::Arena* MaybeArenaPtr() const {
    return _arena_ptr_;
  }
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  typedef ClientRequest_RequestType RequestType;
  static const RequestType OPEN = ClientRequest_RequestType_OPEN;
  static const RequestType READ = ClientRequest_RequestType_READ;
  static const RequestType WRITE = ClientRequest_RequestType_WRITE;
  static const RequestType CLOSE = ClientRequest_RequestType_CLOSE;
  static inline bool RequestType_IsValid(int value) {
    return ClientRequest_RequestType_IsValid(value);
  }
  static const RequestType RequestType_MIN =
    ClientRequest_RequestType_RequestType_MIN;
  static const RequestType RequestType_MAX =
    ClientRequest_RequestType_RequestType_MAX;
  static const int RequestType_ARRAYSIZE =
    ClientRequest_RequestType_RequestType_ARRAYSIZE;

  // accessors -------------------------------------------------------

  // optional .managarm.fs.ClientRequest.RequestType request_type = 1;
  bool has_request_type() const;
  void clear_request_type();
  static const int kRequestTypeFieldNumber = 1;
  ::managarm::fs::ClientRequest_RequestType request_type() const;
  void set_request_type(::managarm::fs::ClientRequest_RequestType value);

  // optional int32 error = 7;
  bool has_error() const;
  void clear_error();
  static const int kErrorFieldNumber = 7;
  ::google::protobuf::int32 error() const;
  void set_error(::google::protobuf::int32 value);

  // optional string filename = 2;
  bool has_filename() const;
  void clear_filename();
  static const int kFilenameFieldNumber = 2;
  const ::std::string& filename() const;
  void set_filename(const ::std::string& value);
  void set_filename(const char* value);
  void set_filename(const char* value, size_t size);
  ::std::string* mutable_filename();
  ::std::string* release_filename();
  void set_allocated_filename(::std::string* filename);

  // optional int32 flags = 3;
  bool has_flags() const;
  void clear_flags();
  static const int kFlagsFieldNumber = 3;
  ::google::protobuf::int32 flags() const;
  void set_flags(::google::protobuf::int32 value);

  // optional int32 fd = 4;
  bool has_fd() const;
  void clear_fd();
  static const int kFdFieldNumber = 4;
  ::google::protobuf::int32 fd() const;
  void set_fd(::google::protobuf::int32 value);

  // optional int32 size = 5;
  bool has_size() const;
  void clear_size();
  static const int kSizeFieldNumber = 5;
  ::google::protobuf::int32 size() const;
  void set_size(::google::protobuf::int32 value);

  // optional bytes buffer = 6;
  bool has_buffer() const;
  void clear_buffer();
  static const int kBufferFieldNumber = 6;
  const ::std::string& buffer() const;
  void set_buffer(const ::std::string& value);
  void set_buffer(const char* value);
  void set_buffer(const void* value, size_t size);
  ::std::string* mutable_buffer();
  ::std::string* release_buffer();
  void set_allocated_buffer(::std::string* buffer);

  // @@protoc_insertion_point(class_scope:managarm.fs.ClientRequest)
 private:
  inline void set_has_request_type();
  inline void clear_has_request_type();
  inline void set_has_error();
  inline void clear_has_error();
  inline void set_has_filename();
  inline void clear_has_filename();
  inline void set_has_flags();
  inline void clear_has_flags();
  inline void set_has_fd();
  inline void clear_has_fd();
  inline void set_has_size();
  inline void clear_has_size();
  inline void set_has_buffer();
  inline void clear_has_buffer();

  ::std::string _unknown_fields_;
  ::google::protobuf::Arena* _arena_ptr_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  int request_type_;
  ::google::protobuf::int32 error_;
  ::google::protobuf::internal::ArenaStringPtr filename_;
  ::google::protobuf::int32 flags_;
  ::google::protobuf::int32 fd_;
  ::google::protobuf::internal::ArenaStringPtr buffer_;
  ::google::protobuf::int32 size_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_fs_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_fs_2eproto();
  #endif
  friend void protobuf_AssignDesc_fs_2eproto();
  friend void protobuf_ShutdownFile_fs_2eproto();

  void InitAsDefaultInstance();
  static ClientRequest* default_instance_;
};
// -------------------------------------------------------------------

class ServerResponse : public ::google::protobuf::MessageLite {
 public:
  ServerResponse();
  virtual ~ServerResponse();

  ServerResponse(const ServerResponse& from);

  inline ServerResponse& operator=(const ServerResponse& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::std::string* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ServerResponse& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const ServerResponse* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(ServerResponse* other);

  // implements Message ----------------------------------------------

  inline ServerResponse* New() const { return New(NULL); }

  ServerResponse* New(::google::protobuf::Arena* arena) const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const ServerResponse& from);
  void MergeFrom(const ServerResponse& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  void DiscardUnknownFields();
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ServerResponse* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _arena_ptr_;
  }
  inline ::google::protobuf::Arena* MaybeArenaPtr() const {
    return _arena_ptr_;
  }
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 error = 3;
  bool has_error() const;
  void clear_error();
  static const int kErrorFieldNumber = 3;
  ::google::protobuf::int32 error() const;
  void set_error(::google::protobuf::int32 value);

  // optional int32 fd = 1;
  bool has_fd() const;
  void clear_fd();
  static const int kFdFieldNumber = 1;
  ::google::protobuf::int32 fd() const;
  void set_fd(::google::protobuf::int32 value);

  // optional bytes buffer = 2;
  bool has_buffer() const;
  void clear_buffer();
  static const int kBufferFieldNumber = 2;
  const ::std::string& buffer() const;
  void set_buffer(const ::std::string& value);
  void set_buffer(const char* value);
  void set_buffer(const void* value, size_t size);
  ::std::string* mutable_buffer();
  ::std::string* release_buffer();
  void set_allocated_buffer(::std::string* buffer);

  // @@protoc_insertion_point(class_scope:managarm.fs.ServerResponse)
 private:
  inline void set_has_error();
  inline void clear_has_error();
  inline void set_has_fd();
  inline void clear_has_fd();
  inline void set_has_buffer();
  inline void clear_has_buffer();

  ::std::string _unknown_fields_;
  ::google::protobuf::Arena* _arena_ptr_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 error_;
  ::google::protobuf::int32 fd_;
  ::google::protobuf::internal::ArenaStringPtr buffer_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_fs_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_fs_2eproto();
  #endif
  friend void protobuf_AssignDesc_fs_2eproto();
  friend void protobuf_ShutdownFile_fs_2eproto();

  void InitAsDefaultInstance();
  static ServerResponse* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ClientRequest

// optional .managarm.fs.ClientRequest.RequestType request_type = 1;
inline bool ClientRequest::has_request_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ClientRequest::set_has_request_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ClientRequest::clear_has_request_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ClientRequest::clear_request_type() {
  request_type_ = 1;
  clear_has_request_type();
}
inline ::managarm::fs::ClientRequest_RequestType ClientRequest::request_type() const {
  // @@protoc_insertion_point(field_get:managarm.fs.ClientRequest.request_type)
  return static_cast< ::managarm::fs::ClientRequest_RequestType >(request_type_);
}
inline void ClientRequest::set_request_type(::managarm::fs::ClientRequest_RequestType value) {
  assert(::managarm::fs::ClientRequest_RequestType_IsValid(value));
  set_has_request_type();
  request_type_ = value;
  // @@protoc_insertion_point(field_set:managarm.fs.ClientRequest.request_type)
}

// optional int32 error = 7;
inline bool ClientRequest::has_error() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ClientRequest::set_has_error() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ClientRequest::clear_has_error() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ClientRequest::clear_error() {
  error_ = 0;
  clear_has_error();
}
inline ::google::protobuf::int32 ClientRequest::error() const {
  // @@protoc_insertion_point(field_get:managarm.fs.ClientRequest.error)
  return error_;
}
inline void ClientRequest::set_error(::google::protobuf::int32 value) {
  set_has_error();
  error_ = value;
  // @@protoc_insertion_point(field_set:managarm.fs.ClientRequest.error)
}

// optional string filename = 2;
inline bool ClientRequest::has_filename() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ClientRequest::set_has_filename() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ClientRequest::clear_has_filename() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ClientRequest::clear_filename() {
  filename_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_filename();
}
inline const ::std::string& ClientRequest::filename() const {
  // @@protoc_insertion_point(field_get:managarm.fs.ClientRequest.filename)
  return filename_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ClientRequest::set_filename(const ::std::string& value) {
  set_has_filename();
  filename_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:managarm.fs.ClientRequest.filename)
}
inline void ClientRequest::set_filename(const char* value) {
  set_has_filename();
  filename_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:managarm.fs.ClientRequest.filename)
}
inline void ClientRequest::set_filename(const char* value, size_t size) {
  set_has_filename();
  filename_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:managarm.fs.ClientRequest.filename)
}
inline ::std::string* ClientRequest::mutable_filename() {
  set_has_filename();
  // @@protoc_insertion_point(field_mutable:managarm.fs.ClientRequest.filename)
  return filename_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ClientRequest::release_filename() {
  clear_has_filename();
  return filename_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ClientRequest::set_allocated_filename(::std::string* filename) {
  if (filename != NULL) {
    set_has_filename();
  } else {
    clear_has_filename();
  }
  filename_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), filename);
  // @@protoc_insertion_point(field_set_allocated:managarm.fs.ClientRequest.filename)
}

// optional int32 flags = 3;
inline bool ClientRequest::has_flags() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ClientRequest::set_has_flags() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ClientRequest::clear_has_flags() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ClientRequest::clear_flags() {
  flags_ = 0;
  clear_has_flags();
}
inline ::google::protobuf::int32 ClientRequest::flags() const {
  // @@protoc_insertion_point(field_get:managarm.fs.ClientRequest.flags)
  return flags_;
}
inline void ClientRequest::set_flags(::google::protobuf::int32 value) {
  set_has_flags();
  flags_ = value;
  // @@protoc_insertion_point(field_set:managarm.fs.ClientRequest.flags)
}

// optional int32 fd = 4;
inline bool ClientRequest::has_fd() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void ClientRequest::set_has_fd() {
  _has_bits_[0] |= 0x00000010u;
}
inline void ClientRequest::clear_has_fd() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void ClientRequest::clear_fd() {
  fd_ = 0;
  clear_has_fd();
}
inline ::google::protobuf::int32 ClientRequest::fd() const {
  // @@protoc_insertion_point(field_get:managarm.fs.ClientRequest.fd)
  return fd_;
}
inline void ClientRequest::set_fd(::google::protobuf::int32 value) {
  set_has_fd();
  fd_ = value;
  // @@protoc_insertion_point(field_set:managarm.fs.ClientRequest.fd)
}

// optional int32 size = 5;
inline bool ClientRequest::has_size() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void ClientRequest::set_has_size() {
  _has_bits_[0] |= 0x00000020u;
}
inline void ClientRequest::clear_has_size() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void ClientRequest::clear_size() {
  size_ = 0;
  clear_has_size();
}
inline ::google::protobuf::int32 ClientRequest::size() const {
  // @@protoc_insertion_point(field_get:managarm.fs.ClientRequest.size)
  return size_;
}
inline void ClientRequest::set_size(::google::protobuf::int32 value) {
  set_has_size();
  size_ = value;
  // @@protoc_insertion_point(field_set:managarm.fs.ClientRequest.size)
}

// optional bytes buffer = 6;
inline bool ClientRequest::has_buffer() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void ClientRequest::set_has_buffer() {
  _has_bits_[0] |= 0x00000040u;
}
inline void ClientRequest::clear_has_buffer() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void ClientRequest::clear_buffer() {
  buffer_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_buffer();
}
inline const ::std::string& ClientRequest::buffer() const {
  // @@protoc_insertion_point(field_get:managarm.fs.ClientRequest.buffer)
  return buffer_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ClientRequest::set_buffer(const ::std::string& value) {
  set_has_buffer();
  buffer_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:managarm.fs.ClientRequest.buffer)
}
inline void ClientRequest::set_buffer(const char* value) {
  set_has_buffer();
  buffer_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:managarm.fs.ClientRequest.buffer)
}
inline void ClientRequest::set_buffer(const void* value, size_t size) {
  set_has_buffer();
  buffer_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:managarm.fs.ClientRequest.buffer)
}
inline ::std::string* ClientRequest::mutable_buffer() {
  set_has_buffer();
  // @@protoc_insertion_point(field_mutable:managarm.fs.ClientRequest.buffer)
  return buffer_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ClientRequest::release_buffer() {
  clear_has_buffer();
  return buffer_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ClientRequest::set_allocated_buffer(::std::string* buffer) {
  if (buffer != NULL) {
    set_has_buffer();
  } else {
    clear_has_buffer();
  }
  buffer_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), buffer);
  // @@protoc_insertion_point(field_set_allocated:managarm.fs.ClientRequest.buffer)
}

// -------------------------------------------------------------------

// ServerResponse

// optional int32 error = 3;
inline bool ServerResponse::has_error() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ServerResponse::set_has_error() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ServerResponse::clear_has_error() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ServerResponse::clear_error() {
  error_ = 0;
  clear_has_error();
}
inline ::google::protobuf::int32 ServerResponse::error() const {
  // @@protoc_insertion_point(field_get:managarm.fs.ServerResponse.error)
  return error_;
}
inline void ServerResponse::set_error(::google::protobuf::int32 value) {
  set_has_error();
  error_ = value;
  // @@protoc_insertion_point(field_set:managarm.fs.ServerResponse.error)
}

// optional int32 fd = 1;
inline bool ServerResponse::has_fd() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ServerResponse::set_has_fd() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ServerResponse::clear_has_fd() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ServerResponse::clear_fd() {
  fd_ = 0;
  clear_has_fd();
}
inline ::google::protobuf::int32 ServerResponse::fd() const {
  // @@protoc_insertion_point(field_get:managarm.fs.ServerResponse.fd)
  return fd_;
}
inline void ServerResponse::set_fd(::google::protobuf::int32 value) {
  set_has_fd();
  fd_ = value;
  // @@protoc_insertion_point(field_set:managarm.fs.ServerResponse.fd)
}

// optional bytes buffer = 2;
inline bool ServerResponse::has_buffer() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ServerResponse::set_has_buffer() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ServerResponse::clear_has_buffer() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ServerResponse::clear_buffer() {
  buffer_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_buffer();
}
inline const ::std::string& ServerResponse::buffer() const {
  // @@protoc_insertion_point(field_get:managarm.fs.ServerResponse.buffer)
  return buffer_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ServerResponse::set_buffer(const ::std::string& value) {
  set_has_buffer();
  buffer_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:managarm.fs.ServerResponse.buffer)
}
inline void ServerResponse::set_buffer(const char* value) {
  set_has_buffer();
  buffer_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:managarm.fs.ServerResponse.buffer)
}
inline void ServerResponse::set_buffer(const void* value, size_t size) {
  set_has_buffer();
  buffer_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:managarm.fs.ServerResponse.buffer)
}
inline ::std::string* ServerResponse::mutable_buffer() {
  set_has_buffer();
  // @@protoc_insertion_point(field_mutable:managarm.fs.ServerResponse.buffer)
  return buffer_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ServerResponse::release_buffer() {
  clear_has_buffer();
  return buffer_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ServerResponse::set_allocated_buffer(::std::string* buffer) {
  if (buffer != NULL) {
    set_has_buffer();
  } else {
    clear_has_buffer();
  }
  buffer_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), buffer);
  // @@protoc_insertion_point(field_set_allocated:managarm.fs.ServerResponse.buffer)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace fs
}  // namespace managarm

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::managarm::fs::ClientRequest_RequestType> : ::google::protobuf::internal::true_type {};

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_fs_2eproto__INCLUDED
